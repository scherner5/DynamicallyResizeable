#include "pch.h"
#include "DynamicList.h"
#include <iostream>

using namespace std;

template <class j>
DynamicList<j>::DynamicList()
{
	counter = 0;
}

template <class j>
void DynamicList<j>::push(j x) {
	if (*list > counter) {
		*list[counter] = *x;
		counter++;
	}
	else {
		return;
	}
}

template <class j>
int DynamicList<j>::length() {
	return counter;
}

template <class j>
void DynamicList<j>::remove(j y) {
	for (int c = 0; c < counter; c++) {
		if (*list[c] == y) {
			*list[c] = "";
		}
	}
}



