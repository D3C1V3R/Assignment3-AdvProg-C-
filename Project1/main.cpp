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

	LinkedList *List2(List1);

	cout << "Printing current List2" << endl;
	List2->Print();

	LinkedList *List3 = new LinkedList;;

	cout << "Printing current List3" << endl;
	List3->Print();


	LinkedList *List5 = new LinkedList;
	List5->AddHead(54);
	List5->AddHead(55);
	LinkedList *List6 = new LinkedList;
	List6->AddTail(56);
	List6->AddTail(57);

	LinkedList *List4 = List5;
	cout << "Printing current List4" << endl;
	List4->Print();

	return 0;
}
