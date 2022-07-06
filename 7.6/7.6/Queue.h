//Queue.h
#pragma once

#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct BinaryTreeNode* QDataType;

typedef struct QNode
{
	struct QNode* next;
	QDataType data;
}QNode;

typedef struct Queue
{
	QNode* head;
	QNode* tail;
}Queue;

void QueueInit(Queue* pq);
// ��β����� 
void QueuePush(Queue* pq, QDataType x);
// ��ͷ������ 
void QueuePop(Queue* pq);
// ��ȡ����ͷ��Ԫ�� 
QDataType QueueFront(Queue* pq);
// ��ȡ���ж�βԪ�� 
QDataType QueueBack(Queue* pq);
// ��ȡ��������ЧԪ�ظ��� 
int QueueSize(Queue* pq);
// �������Ƿ�Ϊ��
bool QueueEmpty(Queue* pq);
// ���ٶ��� 
void QueueDestroy(Queue* pq);

