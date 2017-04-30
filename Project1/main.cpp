/*********************************************************************
 * CSCI251/851 - Assignment 3
 * main.cpp - main() driver for testing LinkedList class.
 * Put you name, login and the date last modified here.
 *
 *********************************************************************/

#include <iostream>
#include "list.h"
using namespace std;


int main()
{
	LinkedList *List = new LinkedList;
	cout << "Adding '1' to Tail of List" << endl;
	List->AddTail(1);

	cout << "Adding '2' to Tail of List" << endl;
	List->AddTail(2);

	cout << "Adding '3' to Tail of List" << endl;
	List->AddTail(3);

	cout << "Printing current List" << endl;
	List->Print();

	cout << "Deleting Head of List" << endl;
	List->RemoveHead();

	cout << "Printing current List" << endl;
	List->Print();

	cout << "Deleting Tail of List" << endl;
	List->RemoveTail();

	cout << "Printing current List" << endl;
	List->Print();

	cout << "Adding '1' to Head of List" << endl;
	List->AddHead(1);

	cout << "Adding '3' to Tails of List" << endl;
	List->AddTail(3);

	cout << "Printing current List" << endl;
	List->Print();
}
