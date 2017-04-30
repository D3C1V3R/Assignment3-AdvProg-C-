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
LinkedList::LinkedList()
{
	// set Head to NULL
}

// Destructor
LinkedList::~LinkedList()
{
/*
	while head is not null
		set temp ptr to head
		set head to head->next
		delete head
*/	
}

// Adds item to tail of list
void LinkedList::AddTail(int Item)
{ 
/*
	Create a new node
	put the item in it
	set Next to NULL

	if Head is NULL then 
		assign head to new node
	else
		set Crnt to Head;
		while Crnt->Next is not NULL
			set Crnt to Crnt->Next
		set Crnt->Next to new node
*/
}

// Removes head node and returns true if success
bool LinkedList::RemoveHead(int &Item)
{
/*
	if list is empty return false
	
	set Item to Head item
	
	set temp ptr to head
	set head to head-> next
	delete temp
	return true 
*/
}


// Prints contents of linked list
void LinkedList::Print()
{
/*
	if list is empty print "empty\n" and return
	set crnt ptr to head
	while crnt is not null
		print crnt->Item
	print endl
}


