#include"List.h"

LTNode* BuyListNode(LTDataType x)
{
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	if (newnode == NULL)
	{
		printf("malloc  fail\n");
		exit(-1);
	}
	newnode->next = NULL;
	newnode->prev = NULL;
	newnode->data = x;
}


LTNode* ListInit()
{
	LTNode* phead = BuyListNode(-1);
	phead->next = phead;
	phead->prev = phead;

	return phead;
}


void ListPrint(LTNode* phead)
{
	assert(phead);

	LTNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d -> ", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

void ListPushBack(LTNode* phead, LTDataType x)
{
	assert(phead);

	LTNode* newnode = BuyListNode(x);
	LTNode* tail = phead->prev;

	tail->next = newnode;
	newnode->prev = tail;

	newnode->next = phead;
	phead->prev = newnode;
}

void ListPushFront(LTNode* phead, LTDataType x)
{
	assert(phead);

	LTNode* newnode = BuyListNode(x);
	LTNode* next = phead->next;

	phead->next = newnode;
	newnode->prev = phead;

	newnode->next = next;
	next->prev = newnode;

}

bool ListEmpty(LTNode* phead)
{
	assert(phead);

	return phead->next == phead;
}

void ListPopBack(LTNode* phead)
{
	assert(phead);
	assert(!ListEmpty(phead));

	LTNode* tail = phead->prev;
	LTNode* tailprev = tail->prev;
	free(tail);

	tailprev->next = phead;
	phead->prev = tailprev;
}

void ListPopFront(LTNode* phead)
{
	assert(phead);
	assert(!ListEmpty(phead));

	LTNode* first = phead->next;
	LTNode* second = first->next;

	free(first);
	second->prev = phead;
	phead->next = second;
}

//在pos之前插入
void ListInsert(LTNode* pos, LTDataType x)
{
	assert(pos);

	LTNode* newnode = BuyListNode(x);
	LTNode* prev = pos->prev;
	LTNode* next = pos->next;

	free(pos);

	prev->next = next;
	next->prev = prev;
}

void ListErase(LTNode* pos)
{
	assert(pos);
	
	LTNode* prev = pos->prev;
	LTNode* next = pos->next;

	free(pos);
	prev->next = next;
	next->prev = prev;
}

void ListDestory(LTNode* phead)
{
	assert(phead);

	LTNode* cur = phead->next;
	while (cur != phead)
	{
		LTNode* next = cur->next;
		free(cur);
		cur = NULL;
		cur = next;
	}

	free(phead);
}