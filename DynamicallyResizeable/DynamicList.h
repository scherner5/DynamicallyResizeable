#pragma once

template <class j>
class DynamicList
{
public:
	DynamicList();
	j counter;
	j listSize;
	j* list;
	void push(j x);
	int length();
	void remove(int y);
	int get(int i);
};

template <class j>
void DynamicList<j>::remove(int y) {
	for (int c = y; c < counter; c++) {
		list[c] = list[c + 1];
	}
	counter--;
}

