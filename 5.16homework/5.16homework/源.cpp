#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>
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
// 检测队列是否为空，如果为空返回非零结果，如果非空返回0 
bool QueueEmpty(Queue* pq);
// 销毁队列 
void QueueDestroy(Queue* pq);

void QueueInit(Queue* pq)
{
	assert(pq);

	pq->head = pq->tail = NULL;
}


void QueuePush(Queue* pq, QDataType x)
{
	assert(pq);

	QNode* newNode = (QNode*)malloc(sizeof(QNode));
	if (newNode == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	newNode->data = x;
	newNode->next = NULL;

	if (pq->head == NULL)
	{
		pq->head = pq->tail = newNode;
	}
	else
	{
		pq->tail->next = newNode;
		pq->tail = newNode;
	}
}
bool QueueEmpty(Queue* pq)
{
	assert(pq);

	return pq->head == NULL;
}

void QueuePop(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));

	QNode* next = pq->head->next;
	if (next == NULL)
	{
		free(pq->head);
		pq->head = pq->tail = NULL;
	}
	else
	{
		free(pq->head);
		pq->head = next;
	}

}

QDataType QueueFront(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));

	return pq->head->data;
}

QDataType QueueBack(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));

	return pq->tail->data;
}

void QueueDestroy(Queue* pq)
{
	assert(pq);
	QNode* cur = pq->head;
	while (cur)
	{
		QNode* next = cur->next;
		free(cur);
		cur = next;
	}
}

int QueueSize(Queue* pq)
{
	assert(pq);

	QNode* cur = pq->head;
	int size = 0;
	while (cur)
	{
		cur = cur->next;
		++size;
	}
	return size;
}


typedef struct {
	Queue q1;
	Queue q2;
} MyStack;


MyStack* myStackCreate() {
	MyStack* st = (MyStack*)malloc(sizeof(MyStack));
	QueueInit(&st->q1);
	QueueInit(&st->q2);
	return st;
}
bool myStackEmpty(MyStack* obj) {
	return QueueEmpty(&obj->q1) && QueueEmpty(&obj->q2);
}
void myStackPush(MyStack* obj, int x) {
	if (!QueueEmpty(&obj->q1))
	{
		QueuePush(&obj->q1, x);
	}
	else
	{
		QueuePush(&obj->q2, x);
	}
}

int myStackPop(MyStack* obj) {
	Queue* emptyQ = &obj->q1;
	Queue* nonEmpty = &obj->q2;
	if (!QueueEmpty(&obj->q1))
	{
		emptyQ = &obj->q2;
		nonEmpty = &obj->q1;
	}

	while (QueueSize(nonEmpty) > 1)
	{
		QueuePush(emptyQ, QueueFront(nonEmpty));
		QueuePop(nonEmpty);
	}

	int ret = QueueFront(nonEmpty);
	QueuePop(nonEmpty);
	return ret;

}

int myStackTop(MyStack* obj) {
	Queue* emptyQ = &obj->q1;
	Queue* nonEmpty = &obj->q2;
	if (!QueueEmpty(&obj->q1))
	{
		emptyQ = &obj->q2;
		nonEmpty = &obj->q1;
	}

	return  QueueBack(nonEmpty);

}

typedef int STDataType;
typedef struct Stack
{
	STDataType* a;
	int top;
	int capacity;
}ST;

void StackInit(ST* ps);
void StackDestroy(ST* ps);
void StackPush(ST* ps, STDataType x);
void StackPop(ST* ps);
STDataType StackTop(ST* ps);
bool StackEmpty(ST* ps);
int StackSize(ST* ps);

void StackInit(ST* ps)
{
	assert(ps);

	ps->a = NULL;
	ps->capacity = ps->top = 0;

}

void StackDestroy(ST* ps)
{
	assert(ps);

	free(ps->a);

	ps->capacity = ps->top = 0;
	ps->a = NULL;
}


void StackPush(ST* ps, STDataType x)
{
	assert(ps);

	if (ps->capacity == ps->top)
	{
		int newCapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		STDataType* tmp = (STDataType*)realloc(ps->a, sizeof(STDataType) * newCapacity);
		if (tmp == NULL)
		{
			printf("realloc error\n");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newCapacity;
	}

	ps->a[ps->top] = x;
	ps->top++;
}

void StackPop(ST* ps)
{
	assert(ps);
	assert(!StackEmpty(ps));

	ps->top--;
}

bool StackEmpty(ST* ps)
{
	assert(ps);

	return ps->top == 0;
}

STDataType StackTop(ST* ps)
{
	assert(ps);
	assert(!StackEmpty(ps));

	return ps->a[ps->top - 1];
}

int StackSize(ST* ps)
{
	assert(ps);

	return ps->top;
}

typedef struct {
	ST popst;
	ST pushst;
} MyQueue;


MyQueue* myQueueCreate() {
	MyQueue* obj = (MyQueue*)malloc(sizeof(MyQueue));
	StackInit(&obj->popst);
	StackInit(&obj->pushst);
	return obj;
}

void myQueuePush(MyQueue* obj, int x) {
	StackPush(&obj->pushst, x);

}

int myQueuePop(MyQueue* obj) {
	if (StackEmpty(&obj->popst))
	{
		while (StackSize(&obj->pushst))
		{
			int top = StackTop(&obj->pushst);
			StackPush(&obj->popst, top);
			StackPop(&obj->pushst);
		}
	}
	int top = StackTop(&obj->popst);
	StackPop(&obj->popst);
	return top;

}

int myQueuePeek(MyQueue* obj) {
	if (StackEmpty(&obj->popst))
	{
		while (StackSize(&obj->pushst))
		{
			int top = StackTop(&obj->pushst);
			StackPush(&obj->popst, top);
			StackPop(&obj->pushst);
		}
	}
	int top = StackTop(&obj->popst);
	return top;
}

bool myQueueEmpty(MyQueue* obj) {
	return StackEmpty(&obj->popst) && StackEmpty(&obj->pushst);
}

void myQueueFree(MyQueue* obj) {
	StackDestroy(&obj->popst);
	StackDestroy(&obj->pushst);
	free(obj);
}

/**
 * Your MyQueue struct will be instantiated and called as such:
 * MyQueue* obj = myQueueCreate();
 * myQueuePush(obj, x);

 * int param_2 = myQueuePop(obj);

 * int param_3 = myQueuePeek(obj);

 * bool param_4 = myQueueEmpty(obj);

 * myQueueFree(obj);
*/
typedef struct {
	int* a;
	int k;
	int head;
	int tail;
} MyCircularQueue;


MyCircularQueue* myCircularQueueCreate(int k) {
	MyCircularQueue* obj = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
	obj->a = (int*)malloc(sizeof(int) * (k + 1));
	obj->k = k;
	obj->head = obj->tail = 0;
	return obj;
}
bool myCircularQueueIsFull(MyCircularQueue* obj) {
	int next = obj->tail + 1;
	if (next == obj->k + 1)
	{
		next = 0;
	}
	return next == obj->head;
}

bool myCircularQueueIsEmpty(MyCircularQueue* obj)
{
	return obj->head == obj->tail;
}
bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
	if (myCircularQueueIsFull(obj))
	{
		return false;
	}

	obj->a[obj->tail] = value;
	obj->tail++;
	if (obj->tail == obj->k + 1)
	{
		obj->tail = 0;
	}
	return true;
}

bool myCircularQueueDeQueue(MyCircularQueue* obj) {
	if (myCircularQueueIsEmpty(obj))
	{
		return false;
	}

	obj->head++;
	if (obj->head == obj->k + 1)
	{
		obj->head = 0;
	}
	return true;
}

int myCircularQueueFront(MyCircularQueue* obj) {
	if (myCircularQueueIsEmpty(obj))
	{
		return -1;
	}

	return obj->a[obj->head];
}

int myCircularQueueRear(MyCircularQueue* obj) {
	if (myCircularQueueIsEmpty(obj))
	{
		return -1;
	}

	int prev = obj->tail - 1;
	if (prev == -1)
	{
		prev = obj->k;
	}
	return obj->a[prev];
}

void myCircularQueueFree(MyCircularQueue* obj) {
	free(obj->a);
	free(obj);
}

/**
 * Your MyCircularQueue struct will be instantiated and called as such:
 * MyCircularQueue* obj = myCircularQueueCreate(k);
 * bool param_1 = myCircularQueueEnQueue(obj, value);

 * bool param_2 = myCircularQueueDeQueue(obj);

 * int param_3 = myCircularQueueFront(obj);

 * int param_4 = myCircularQueueRear(obj);

 * bool param_5 = myCircularQueueIsEmpty(obj);

 * bool param_6 = myCircularQueueIsFull(obj);

 * myCircularQueueFree(obj);
*/

int main()
{

}