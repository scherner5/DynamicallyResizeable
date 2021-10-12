#pragma once

template <class j>
class DynamicList
{
public:
	DynamicList();
	j counter;
	j* list;
	void push(j x);
	int length();
	void remove(j y);
};

