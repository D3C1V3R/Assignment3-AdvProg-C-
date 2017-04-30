/*********************************************************************
 * CSCI251/851 - Assignment 3
 * list.h - Declaration of LinkedList class
 * Put you name, login and the date last modified here.
 *
 *********************************************************************/

#ifndef LIST_H
#define LIST_H


struct Node;

typedef Node *NodePtr;

struct Node
{
	int Item;
	NodePtr Next;
};

class LinkedList
{
	public:
		LinkedList ();									// default constructor
		LinkedList operator()(const LinkedList *clist); 			// copy constructor
		LinkedList operator=(const LinkedList * obj);

		~LinkedList();									// destructor
		void  AddTail(int);								// adds item to tail
		bool  RemoveHead();								// removes item from head
		void  AddHead(int);								// adds item to head
		bool  RemoveTail();								// removes item from tail
		void  Print();									// prints list
			
	private:
		NodePtr Head;
};

#endif

