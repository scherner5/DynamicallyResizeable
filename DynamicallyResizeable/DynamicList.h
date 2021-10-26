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

