#include "pch.h"
#include "DynamicList.h"
#include <iostream>

using namespace std;

template <class j>
DynamicList<j>::DynamicList()
{
	counter = 0;
	list = new j[8];
	listSize = 8;
}

template <class j>
void DynamicList<j>::push(j x) {
	if ((listSize - 1) > counter) {
		list[counter] = x;
		counter++;
		printf("new");
	}
	else {
		listSize *= 2;
		j* newBiggerList = new j[listSize];
		for (int i = 0; i < counter; i++) {
			newBiggerList[i] = list[i];
		}
		list = newBiggerList;
		list[counter] = x;
		counter++;
		printf("hi");
	}
}

template <class j>
int DynamicList<j>::length() {
	return counter;
}

template <class j>
void DynamicList<j>::remove(int y) {
	counter--;
	for (int c = y; c < counter; c++) {
		list[y] = list[y + 1];
	}
}

template <class j>
int DynamicList<j>::get(int i) {
	return list[i];
}



