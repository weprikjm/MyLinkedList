#include <iostream>
#include "MyLinkedList.h"

int main(int argc, char** argv)
{
	MyLinkedList<int> list;
	

	list.PushBack(3);
	list.PushBack(4);
	list.PushBack(5);

	list.Size();

	list.Clear();

	getchar();
	return 0;
}