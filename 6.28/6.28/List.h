#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdbool.h>
#include<stdlib.h>

typedef int LTDataType;

typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	LTDataType data;
}LTNode;


LTNode* ListInit();
void ListPrint(LTNode* phead);
void ListPushBack(LTNode* phead, LTDataType x);
void ListPushFront(LTNode* phead, LTDataType x);
bool ListEmpty(LTNode* phead);
void ListPopBack(LTNode* phead);
void ListPopFront(LTNode* phead);
void ListInsert(LTNode* pos, LTDataType x);
void ListErase(LTNode* pos);
void ListDestory(LTNode* phead);