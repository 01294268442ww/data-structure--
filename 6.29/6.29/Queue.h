#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdbool.h>
#include<stdlib.h>

typedef int QDataType;

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
void QueueDestroy(Queue* pq);

void QueuePush(Queue* pq, QDataType x);
void QueuePop(Queue* pq);

QDataType QueueFront(Queue* pq);
QDataType QueueBack(Queue* pq);

bool QueueEmpty(Queue* pq);
int QueueSize(Queue* pq);