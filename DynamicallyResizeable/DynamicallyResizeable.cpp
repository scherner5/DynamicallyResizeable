#include "pch.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <Windows.h>
#include "DynamicList.h"

using namespace std;

int main()
{

	DynamicList<int> object;

	int size = object.length();

	cout << "List length: " << size << endl;


	object.push(5);
	object.push(10);
	object.push(15);
	object.push(20);
	object.push(25);
	object.push(30);
	object.push(35);
	object.push(40); 

	object.remove(1);

	object.push(45);
	object.push(50);

	for (int i = 0; i < object.length(); i++) {
		cout << object.get(i) << ", ";
	}

	system("pause");
	
}
		