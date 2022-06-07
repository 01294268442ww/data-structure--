#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

typedef int SlTDataType;

typedef struct ListNode
{
	SlTDataType val;
	struct ListNode* next;
}ListNode;

void ListNodePrint(ListNode* plist);

void ListNodePushBack(ListNode** pplist, SlTDataType x);

void ListNodePushFront(ListNode** pplist, SlTDataType x);

ListNode* BuyListNode(SlTDataType x);

void ListNodePopBack(ListNode** pplist);

void ListNodePopFront(ListNode** pplist);

ListNode* ListFind(ListNode* plist, SlTDataType x);

void ListInsertAfter(ListNode* pos, SlTDataType x);

void ListNodeDestroy(ListNode* plist);

