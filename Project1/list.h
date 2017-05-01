/*********************************************************************
 * CSCI251/851 - Assignment 3
 * list.h - Declaration of LinkedList class
 * Christopher Aldous, ca797, 5096054 2/5/17
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
		LinkedList(const LinkedList & clist); 			// copy constructor
		LinkedList operator=(const LinkedList & obj);	// operator= overload

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

