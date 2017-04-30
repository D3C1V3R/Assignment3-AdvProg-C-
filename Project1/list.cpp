/*********************************************************************
 * CSCI251/851 - Assignment 3
 * list.cpp - Implementation of LinkedList class.
 * Put you name, login and the date last modified here.
 *
 *********************************************************************/

#include <iostream>
#include "list.h"
using namespace std;

// Default constructor
LinkedList::LinkedList(){	
	Head = NULL; 	// set Head to NULL
}

// Copy constructor
LinkedList LinkedList::operator()(const LinkedList *clist) {
	Head = NULL;	// set Head to NULL

	NodePtr current = clist->Head;
	while (current->Next != nullptr) {
		if (Head == NULL) {
			AddHead(current->Item);
		}
		else {
			AddTail(current->Item);
		}
	}
	return *this;
}

LinkedList LinkedList::operator=(const LinkedList* obj){
	auto node = obj->Head;
	NodePtr oldNode = nullptr;

	while (node != NULL)
	{
		NodePtr newNode = new Node;
		newNode->Item = node->Item;
		oldNode->Next = newNode;


		node = node->Next;
		oldNode = node;
	}

	return *this;
}

// Destructor
LinkedList::~LinkedList()
{
	while (Head != NULL) {		//Loop through deleting all
		NodePtr tmp = Head;
		Head = Head->Next;
		delete Head;
	}	
}

// Adds item to tail of list
void LinkedList::AddTail(int Item)
{ 

	Node *newNode = new Node;					//Create	
	newNode->Item = Item;						//Set value
	newNode->Next = NULL;						//Point to next node

	NodePtr current = Head;
	if (Head == NULL) {
		Head = newNode;							//Point at first Node
	} else {
		while (current) {				
			if (current->Next == NULL) {
				current->Next = newNode;
				return;
			}
			current = current->Next;
		}
	}
}

bool LinkedList::RemoveTail() {
	NodePtr current = Head;
	while (current) {
		NodePtr tmp = Head;
		if (current->Next == NULL) {
			tmp->Next = NULL;					//Set new End

			delete current;						//Clear Data
			return true;
		}
		else {			
			current = current->Next;
			NodePtr tmp = current;				//Store place before end
		}
	}
	return false;
}

void LinkedList::AddHead(int Item) {

	NodePtr newNode = new Node;
	newNode->Item = Item;
	newNode->Next = Head;
	Head = newNode;

}

// Removes head node and returns true if success
bool LinkedList::RemoveHead()
{
	if (Head == NULL) {
		return false;					//List is empty duh.
	}	else {
		NodePtr tmp = Head;				//Store Tmp for delete
		Head = Head->Next;				//Update pointer

		delete tmp;						//Clear Data
		return true;
	}
}


// Prints contents of linked list
void LinkedList::Print()
{
	NodePtr current = Head;
	while (current) {
		cout << current->Item << endl;
		if (current->Next != NULL) {
			current = current->Next;
		}
		else {
			return;
		}
	}
}