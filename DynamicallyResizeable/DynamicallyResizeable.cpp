#include "pch.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <Windows.h>
#include "DynamicList.h"
#include "DynamicList.cpp"

using namespace std;

int main()
{
	/**int* array = new int[3];
	array[0] = 10;
	array[1] = 5;
	array[2] = 6;

	int size = (sizeof(array) / sizeof(int)); 

	cout << array << endl; **/

	DynamicList<int> object;

	int size = object.length();

	cout << "List length: " << size << endl;

	//printf("List length: %u\n", object.length());

	object.push(5);
	object.push(10);
	object.push(15);
	object.push(20);
	object.push(25);
	object.push(30);
	object.push(35);
	object.push(40); 

	// ERROR: remove function removes 10 but replaces it with 15, also messes up array so it won't print out 40(possibly because it the terms don't actually move over a spot)
	object.remove(1);

	object.push(45);
	object.push(50);

	for (int i = 0; i < object.length(); i++) {
		cout << object.get(i) << ", ";
	}

	system("pause");
	
}
		