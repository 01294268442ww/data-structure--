#include"DoubleList.h"

LTNode* BuyListNode(LTDataType x)
{
	LTNode* newNode = (LTNode*)malloc(sizeof(LTNode));
	newNode->next = newNode = NULL;
	return newNode;
}

LTNode* ListInit()
{
	LTNode* pHead = BuyListNode(-1);
	pHead->next = pHead;
	pHead->prev = pHead;
	return pHead;
}

void ListPushBack(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* newNode = BuyListNode(x);
	LTNode* tail = phead->prev;
	tail->next = newNode;
	newNode->prev = tail;
	newNode->next = phead;
	phead->prev = newNode;
}

void ListPushFront(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* newNode = BuyListNode(x);

	LTNode* next = phead->next;
	phead->next = newNode;
	newNode->prev = phead;
	newNode->next = next;
	next->prev = newNode;
}

bool ListEmpty(LTNode* phead)
{
	return phead->next == NULL;
}

void ListPopBack(LTNode* phead)
{
	assert(phead);
	assert(!ListEmpty(phead));

	
}

void ListPopFront(LTNode* phead)
{
	assert(phead);
	assert(!ListEmpty(phead));

	

}

void ListPrint(LTNode* phead)
{
	assert(phead);
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d ", cur->val);
	}
}

void ListInsert(LTNode* pos, LTDataType x)
{
	assert(pos);
	LTNode* newNode = BuyListNode(x);

	LTNode* prev = pos->prev;
	LTNode* next = pos->next;
	
	prev->next = newNode;
	newNode->prev = prev;
	newNode->next = next;
	next->prev = newNode;
}

void ListErase(LTNode* pos)
{
	assert(pos);
	assert(!ListEmpty(pos));

	LTNode* prev = pos->prev;
	LTNode* next = pos->next;

	free(pos);

	prev->next = next;
	next->prev = prev;
}

LTNode* ListFind(LTNode* phead, LTDataType x)
{
	assert(phead);

	LTNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->val == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}