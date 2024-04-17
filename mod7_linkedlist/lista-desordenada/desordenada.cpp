#include <iostream>
#include <cassert>
#include "linkedList.h"

using namespace std;

int main()
{
	LinkedList<int> list;
	list.initializeList(5);
	list.print();

	// Use the LinkedListIterator
	LinkedListIterator<int> iterator;

	for (iterator = list.begin(); iterator != list.end(); ++iterator)
	{
		cout << *iterator << " ";
	}

	return 0;
}
