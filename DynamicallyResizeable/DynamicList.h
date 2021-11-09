#pragma once

template <typename j>
class DynamicList
{
public:
	DynamicList();
	int counter;
	int listSize;
	j* list;
	void push(j x);
	int length();
	int index(j y);
	void remove(int y);
	int get(int i);
	bool contains(j z);
};

template <typename j>
void DynamicList<j>::remove(int y) {
	for (int c = y; c < counter; c++) {
		list[c] = list[c + 1];
	}
	counter--;
}

template <typename j>
DynamicList<j>::DynamicList()
{
	counter = 0;
	list = new j[8];
	listSize = 8;
}

template <typename j>
void DynamicList<j>::push(j x) {
	if ((listSize - 1) > counter) {
		list[counter] = x;
		counter++;
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
	}
}

template <typename j>
int DynamicList<j>::length() {
	return counter;
}

template <typename j>
int DynamicList<j>::get(int i) {
	return list[i];
}

template <typename j>
int DynamicList<j>::index(j y) {
	int realValue;
	for (int c = 0; c < counter; c++) {
		if (list[c] == y) {
			realValue = c;
		}
	}
	return realValue;
}

template <typename j>
bool DynamicList<j>::contains(j z) {
	bool containValue = false;
	for (int c = 0; c < counter; c++) {
		if (list[c] == z) {
			containValue = true;
		}
	}
	return containValue;
}

