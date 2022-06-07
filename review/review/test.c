#include"SeqList.h"
#include"SList.h"
#include"DoubleList.h"


void testSeqList()
{
	SeqList *s = BuyListNode(0);
	SeqListPushBack(s, 1);
	SeqListPushBack(s, 2);
	SeqListPushBack(s, 3);
	SeqListPushBack(s, 4);
	SeqPrint(s);
	printf("\n");

	SeqListPopBack(s);
	SeqListPopBack(s);
	SeqListPopFront(s);
	SeqPrint(s);
	printf("\n");

	SeqListDestory(s);
}

void testSList()
{
	
	ListNode* p1 = BuyListNode(1);
	ListNodePushBack(&p1, 1);
	ListNodePushBack(&p1, 2);
	ListNodePushBack(&p1, 3);
	ListNodePushBack(&p1, 4);
	ListNodePushBack(&p1, 5);
	ListNodePushBack(&p1, 6);

	ListNodePrint(p1);
	printf("\n");

	ListNodePopFront(&p1);
	ListNodePopFront(&p1);
	ListNodePopFront(&p1);
	ListNodePopFront(&p1);

	ListNodePrint(p1);
	printf("\n");

	ListNodeDestroy(p1);
}


int main()
{
	//testSeqList();
	testSList();


	return 0;
}