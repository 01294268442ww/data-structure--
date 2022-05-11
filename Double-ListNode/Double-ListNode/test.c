#define _CRT_SECURE_NO_WARNINGS
#include"ListNode.h"

void test1()
{
	ListNode* L = ListCreate();
	ListPushBack(L, 1);
	ListPushBack(L, 2);
	ListPushBack(L, 3);
	ListPushBack(L, 4);
	ListPushBack(L, 5); 

	ListInsert(L, 1);

	ListPushFront(L, 100);


	ListPopBack(L);
	ListPopBack(L);
	ListPopBack(L);

	ListPopFront(L);

	ListPrint(L);

	ListNode*Find=ListFind(L, 100);
	if (Find == NULL)
	{
		printf("ÎŞ·¨ÕÒµ½\n");
	}
	else
	{
		printf("%d %p %p\n", Find->_data, Find->_next, Find->_prev);
	}

	ListDestory(L);
}


int main()
{
	test1();
	return 0;
}