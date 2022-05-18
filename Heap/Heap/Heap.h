#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int HPDataType;

typedef struct Heap
{
	HPDataType* a;
	int capacity;
	int size;
}Heap;

void HeapInit(Heap* php);
void HeapDestroy(Heap* php);
void HeapPush(Heap* php, HPDataType x);
void HeapPop(Heap* php);
HPDataType HeapTop(Heap* php);
bool HeapEmpty(Heap* php);
int HeapSize(Heap* php);
