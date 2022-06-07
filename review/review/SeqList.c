#include"SeqList.h"

void SeqListInit(SeqList* pq)
{
	assert(pq);
	pq->a = NULL;
	pq->capacity = pq->size = 0;
}

void SeqListDestory(SeqList* pq)
{
	assert(pq);
	free(pq->a);
	pq->capacity = pq->size = 0;
}

void CheckCapacity(SeqList* pq)
{
	assert(pq);
	if (pq->capacity == pq->size)
	{
		int newCapacity = pq->capacity == 0 ? 4 : pq->capacity * 2;
		SeqDataType* tmp = (SeqDataType*)realloc(pq->a, newCapacity * sizeof(SeqDataType));
		if (tmp == NULL)
		{
			printf("realloc fail");
			exit(-1);
		}
		pq->a = tmp;
		pq->capacity = newCapacity;
	}
}

void SeqListPushBack(SeqList* pq, SeqDataType x)
{
	assert(pq);
	SeqListInsert(pq, pq->size, x);
}

void SeqListPushFront(SeqList* pq, SeqDataType x)
{
	assert(pq);
	SeqListInsert(pq, 0, x);
}

void SeqListPopBack(SeqList* pq)
{
	assert(pq);
	SeqListErase(pq, pq->size - 1);
}

void SeqListPopFront(SeqList* pq)
{
	assert(pq);
	SeqListErase(pq, 0);
}

void SeqListInsert(SeqList* pq, int pos, SeqDataType x)
{
	assert(pq);
	assert(pos >= 0 && pos <= pq->size);
	CheckCapacity(pq);
	int end = pq->size - 1;
	while (end >= pos)
	{
		pq->a[end + 1] = pq->a[end];
		end--;
	}
	pq->a[pos] = x;
	pq->size++;
}

void SeqListErase(SeqList* pq, int pos)
{
	assert(pq);
	assert(pos >= 0 && pos < pq->size);
	int begin = pos;
	while (begin < pq->size-1)
	{
		pq->a[begin] = pq->a[begin + 1];
		begin++;
	}
	pq->size--;
}

void SeqPrint(SeqList* pq)
{
	assert(pq);
	for (int i = 0; i < pq->size; i++)
	{
		printf("%d ", pq->a[i]);
	}
}
