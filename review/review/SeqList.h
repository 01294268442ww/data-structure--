#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdbool.h>
#include<stdlib.h>

typedef int SeqDataType;

typedef struct SeqList
{
	SeqDataType* a;
	int capacity;
	int size;
}SeqList;

void SeqListInit(SeqList* pq);
void SeqListDestory(SeqList* pq);
void SeqListPushBack(SeqList* pq, SeqDataType x);
void SeqListPushFront(SeqList* pq, SeqDataType x);
void SeqListPopBack(SeqList* pq);
void SeqListPopFront(SeqList* pq);
void SeqListInsert(SeqList* pq, int pos, SeqDataType x);
void SeqListErase(SeqList* pq, int pos);
void SeqPrint(SeqList* pq);

