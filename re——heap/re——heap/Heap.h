#pragma once

#include<stdio.h>
#include<assert.h>
#include<stdbool.h>
#include<stdlib.h>

typedef int HPDataType;
typedef struct Heap
{
	HPDataType* a;
	int size;
	int capacity;
}Heap;


void HeapPrint(Heap* php);
// �ѵĹ���
void HeapInit(Heap* php);
// �ѵ�����
void HeapDestory(Heap* php);
// �ѵĲ���
void HeapPush(Heap* php, HPDataType x);
// �ѵ�ɾ��
void HeapPop(Heap* php);
// ȡ�Ѷ�������
HPDataType HeapTop(Heap* php);
// �ѵ����ݸ���
int HeapSize(Heap* php);
// �ѵ��п�
bool HeapEmpty(Heap* php);

// TopK���⣺�ҳ�N�����������/��С��ǰK�����⡣
// ���磺δ��������ǰ10�����ɣ�������ͨ��ѧ������ҫ����ǰ10�ĺ��ţ�ȫ������ǰ10����ס��ȵ����ⶼ��Topk���⣬
// ��Ҫע�⣺
// ������ǰK��������K������С��
// ����С��ǰK��������K�����Ĵ��
void PrintTopK(int* a, int n, int k);
void TestTopk();

