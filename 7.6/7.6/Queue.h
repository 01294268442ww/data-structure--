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
// 队尾入队列 
void QueuePush(Queue* pq, QDataType x);
// 队头出队列 
void QueuePop(Queue* pq);
// 获取队列头部元素 
QDataType QueueFront(Queue* pq);
// 获取队列队尾元素 
QDataType QueueBack(Queue* pq);
// 获取队列中有效元素个数 
int QueueSize(Queue* pq);
// 检测队列是否为空
bool QueueEmpty(Queue* pq);
// 销毁队列 
void QueueDestroy(Queue* pq);

