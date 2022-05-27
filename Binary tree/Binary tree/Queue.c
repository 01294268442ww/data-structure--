//Queue.c
#include"Queue.h"

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
