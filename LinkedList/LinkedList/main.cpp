#include <iostream>
#include "MyLinkedList.h"

int main(int argc, char** argv)
{
	MyLinkedList<int> list;
	

	list.PushBack(3);
	list.PushBack(4);
	list.PushBack(5);

	list.PushFront(1);

	list.Insert(4,6);

	list.Remove(6);


	list.Size();
	int n = NULL;

	printf("%d", n);
	list.Clear();

	getchar();
	return 0;
}