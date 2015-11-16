template <class TYPE>
class ListNode
{
	ListNode<TYPE*>* next;
	ListNode<TYPE*>* previous;

	TYPE
};
template <class TYPE>
class MyLinkedList
{
	ListNode<TYPE*>* start;



	MyLinkedList();
	~MyLinkedList();

	void PushBack(ListNode<TYPE>);
	int Size();
	bool Empty();
	void Clear();

};

