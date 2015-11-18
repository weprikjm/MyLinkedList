#ifndef __MYLINKEDLIST_H__
#define __MYLINKEDLIST_H__

#include "Defs.h"


template <class TYPE>
class ListNode
{
public:
	TYPE data = NULL;

	ListNode(const TYPE& data) : data(data){}

public:
	ListNode<TYPE>* next = NULL;
	
};

template <class TYPE>
class MyLinkedList
{
public:
	ListNode<TYPE>* start = NULL;


	MyLinkedList(){}
	

	~MyLinkedList(){}

	void PushBack(const TYPE& n)
	{
		
		ListNode<TYPE>* node = new ListNode<TYPE>(n);
		
		
		if(start == NULL)
			start = node;
		
		else
		{
			ListNode<TYPE>* tmpIterator = GetLast();
			tmpIterator->next = node;
			node->next = NULL;
		}
		
	}
	
	ListNode<TYPE>* GetLast()
	{
		ListNode<TYPE>* tmpIterator = start;
		while (tmpIterator->next)
		{
			tmpIterator = tmpIterator->next;
		}

		return tmpIterator;
	}


	uint Size()const
	{
		ListNode<TYPE>* tmpIterator = start;
		uint count = 0;
		while (tmpIterator)
		{
			count++;
			tmpIterator = tmpIterator->next;
		}
		return count;
	}

	bool Empty()const
	{
		return start == NULL;
	}
	void Clear()
	{
		ListNode<TYPE>* tmpIterator = start;
		ListNode<TYPE>* secondTmpIterator = start;

		while (tmpIterator)
		{
			secondTmpIterator = tmpIterator;
			tmpIterator = tmpIterator->next;
			delete secondTmpIterator;
		}
		start = NULL;
	}

	ListNode<TYPE>* front(){ return start;}
	ListNode<TYPE>* back(){ return GetLast();}
	void PushFront(){}
	bool PopBack(TYPE&){}
	bool PopFront(TYPE&){}
	void Insert(){}
	void Remove(){}

};

#endif