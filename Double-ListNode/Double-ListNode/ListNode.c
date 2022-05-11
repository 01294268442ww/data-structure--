#define _CRT_SECURE_NO_WARNINGS
#include"ListNode.h"

ListNode* ListCreate()
{
	ListNode* phead = BuyListNode(-1);
	phead->_next = phead;
	phead->_prev = phead;

	return phead;
}

ListNode* BuyListNode(LTDataType x)
{
	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));

	if (newNode == NULL)
	{
		perror("BuyListNode    malloc");
		exit(-1);
	}

	newNode->_data = x;
	newNode->_next = NULL;
	newNode->_prev = NULL;

	return newNode;
}

bool ListEmpty(ListNode* phead)
{
	assert(phead);

	return phead->_next == phead;
}

void ListPrint(ListNode* pHead)
{
	assert(pHead);
	assert(!ListEmpty(pHead));

	ListNode* cur = pHead->_next;
	while (cur != pHead)
	{
		printf("%d  ", cur->_data);
		cur = cur->_next;
	}

}

void ListInsert(ListNode* pos, LTDataType x)
{
	assert(pos);

	ListNode* prev = pos->_prev;
	ListNode* newNode = BuyListNode(x);

	prev->_next = newNode;
	newNode->_prev = prev;
	newNode->_next = pos;
	pos->_prev = newNode;

}

void ListPushBack(ListNode* pHead, LTDataType x)
{
	assert(pHead);

	ListInsert(pHead, x);
}


void ListPushFront(ListNode* pHead, LTDataType x)
{
	assert(pHead);

	ListInsert(pHead->_next, x);
}

void ListErase(ListNode* pos)
{
	assert(pos);
	assert(!ListEmpty(pos));

	ListNode* prev = pos->_prev;
	ListNode* next = pos->_next;

	free(pos);

	prev->_next = next;
	next->_prev = prev;

}

void ListPopBack(ListNode* pHead)
{
	assert(pHead);

	ListErase(pHead->_prev);
}


void ListPopFront(ListNode* pHead)
{
	assert(pHead);

	ListErase(pHead->_next);
}


ListNode* ListFind(ListNode* pHead, LTDataType x)
{
	assert(pHead);

	ListNode* cur = pHead->_next;

	while (cur!=pHead)
	{
		if (cur->_data == x)
		{
			return cur;
		}

		cur = cur->_next;
	}
	return NULL;
}


void ListDestory(ListNode* pHead)
{
	assert(pHead);

	ListNode* cur = pHead->_next;

	while (cur != pHead)
	{

		ListNode* next = cur->_next;
		free(cur);
		cur = NULL;
		cur = next;
	}
}