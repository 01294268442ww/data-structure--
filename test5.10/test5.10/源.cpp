#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>

void ListPushFront(LTNode* phead, LTDataType x)
{
	assert(phead);

	LTNode* newNode = BuyLTNode(x);
	LTNode* next = phead->next;

	phead->next = newNode;
	newNode->next = next;
	newNode->prev = phead;
	next->prev = newNode;



}
