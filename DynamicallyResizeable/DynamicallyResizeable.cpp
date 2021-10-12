#include "pch.h"
#include <iostream>
#include <string>
#include "DynamicList.h"
#include "DynamicList.cpp"

using namespace std;

/**void addToList(list<int> list);
void subtractFromList(list<int> list);
void printList(list<int> const &list);
**/

int main()
{
	DynamicList<int> object;

	printf("List length: %u\n", object.length());

	object.push(5);
	object.push(11);
	object.remove(11);

	for (int i = 0; i < object.length(); i++) { // prints "5, 10" onto screen
		printf("%i", object[i]);
		(i + 1 == object.length()) ? printf("\n") : printf(", ");
	}
		


	/**int determine = 0;

	string yesOrNo;

	while (determine == 0) {
		cout << "Would you like to add to the list? (y/n)" << endl;
		getline(cin, yesOrNo);
		if (yesOrNo == "y" || yesOrNo == "Y") {
			addToList(list);
		}
		if (yesOrNo == "n" || yesOrNo == "N") {
			determine = 1;
		}
	}

	list.push(cool);

	determine = 0;

	while (determine == 0) {
		cout << "Would you like to subtract from the list? (y/n)" << endl;
		getline(cin, yesOrNo);
		if (yesOrNo == "y" || yesOrNo == "Y") {
			subtractFromList(list);
		}
		if (yesOrNo == "n" || yesOrNo == "N") {
			determine = 1;
		}
	}

	printList(list);
	**/

}

/**void addToList(list<int> list) {
	int listInput;
	cout << "Please input an integer to add to the list: " << endl;
	cin >> listInput;

	string frontOrBack;

	while (frontOrBack != "f" || frontOrBack != "F" || frontOrBack != "b" || frontOrBack != "B") {
		cout << "Would you like to add this integer to the front or back of the list? (f/b)" << endl;
		getline(cin, frontOrBack) ;
		if (frontOrBack == "f" || frontOrBack == "F") {
			list.push_front(listInput);
			break;
		}
		if (frontOrBack == "b" || frontOrBack == "B") {
			list.push_back(listInput);
			break;
		}
	}

}

void subtractFromList(list<int> list) {
	int elementToRemove;
	cout << "Please enter an integer that is an element from the list you would like to remove: " << endl;
	cin >> elementToRemove;
	list.remove(elementToRemove);
}

void printList(list<int> const &list) {
	for (auto const &i : list) {
		cout << i << endl;
	}
}
**/