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
	DynamicList<int> object;

	printf("List length: %u\n", object.length());

	object.push(5);
	object.push(10);
	object.remove(10);

	/**for (int i = 0; i < object.length(); i++) { // prints "5, 10" onto screen
		printf("%i", object[i]);
		(i + 1 == object.length()) ? printf("\n") : printf(", ");
	}**/

}
		