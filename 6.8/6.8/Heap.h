#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int HPDataType;

typedef struct Heap
{
	HPDataType* a;
	int size;
	int capacity;
}Heap;


// �ѵĹ���
void HeapCreate(Heap* hp, HPDataType* a, int n);
// �ѵ�����
void HeapDestory(Heap* hp);
// �ѵĲ���
void HeapPush(Heap* hp, HPDataType x);
// �ѵ�ɾ��
void HeapPop(Heap* hp);
// ȡ�Ѷ�������
HPDataType HeapTop(Heap* hp);
// �ѵ����ݸ���
int HeapSize(Heap* hp);
// �ѵ��п�
bool HeapEmpty(Heap* hp);

void AdjustDown(HPDataType* a, int parent, int n);

void AdjustUp(HPDataType* a, int child);

void  HeapPrint(Heap* hp);

void Swap(HPDataType* x, HPDataType* y);
// TopK���⣺�ҳ�N�����������/��С��ǰK�����⡣
// ���磺δ��������ǰ10�����ɣ�������ͨ��ѧ������ҫ����ǰ10�ĺ��ţ�ȫ������ǰ10����ס��ȵ����ⶼ��Topk���⣬
// ��Ҫע�⣺
// ������ǰK��������K������С��
// ����С��ǰK��������K�����Ĵ��


