/*********************************************************************
 * CSCI251/851 - Assignment 3
 * main.cpp - main() driver for testing LinkedList class.
 * Christopher Aldous, ca797, 5096054 2/5/17
 *********************************************************************/

#include <iostream>
#include "list.h"
using namespace std;


int main()
{
	LinkedList *List1 = new LinkedList;
	cout << "Adding '1' to Tail of List" << endl;
	List1->AddTail(1);

	cout << "Adding '2' to Tail of List" << endl;
	List1->AddTail(2);

	cout << "Adding '3' to Tail of List" << endl;
	List1->AddTail(3);

	cout << "Printing current List" << endl;
	List1->Print();

	cout << "Deleting Head of List" << endl;
	List1->RemoveHead();

	cout << "Printing current List" << endl;
	List1->Print();

	cout << "Deleting Tail of List" << endl;
	List1->RemoveTail();

	cout << "Printing current List" << endl;
	List1->Print();

	cout << "Adding '1' to Head of List" << endl;
	List1->AddHead(1);

	cout << "Adding '3' to Tails of List" << endl;
	List1->AddTail(3);

	cout << "Printing current List" << endl;
	List1->Print();

	LinkedList List2(*List1);				// List full
											// Expected output is same as List1
	cout << "Printing current List2 (Copy constructor with content)" << endl;
	List2.Print();

	LinkedList *List3e = new LinkedList;
	LinkedList List3(*List3e);				//Empty list
											//Expected output is nothing
	cout << "Printing current List3 (Copy constructor without content)" << endl;
	List3.Print();


	LinkedList List5;
	List5.AddTail(54);
	List5.AddTail(55);

	LinkedList List6;
	List6.AddTail(56);
	List6.AddTail(57);

	LinkedList List4 = List5 = List6;
	cout << "Printing current List4 (Overload operator=)" << endl;
	List4.Print();

	return 0;
}
