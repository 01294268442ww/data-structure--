#include"Heap.h"

void Swap(HPDataType* x, HPDataType* y)
{
	HPDataType tmp = *x;
	*x = *y;
	*y = tmp;
}

void HeapCreate(Heap* hp, HPDataType* a, int n)
{
	assert(hp);
	assert(a);

	hp->a = (HPDataType*)malloc(sizeof(HPDataType) * n);
	hp->capacity = n;
	hp->size =n;

	//拷贝数据
	for (int i = 0; i < n; i++)
	{
		hp->a[i] = a[i];
	}

	//建堆,建小堆
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(hp->a, i, n);
	}
}

void AdjustDown(HPDataType* a, int parent, int n)
{
	assert(a);
	
	int child = parent * 2 + 1;
	while (parent < n)
	{
		if (child + 1 < n && a[child + 1] < a[child])
		{
			child++;
		}

		if (a[child] < a[parent])
		{
			Swap(&a[parent], &a[child]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

void AdjustUp(HPDataType* a, int child)
{
	assert(a);

	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (a[child] < a[parent])
		{
			Swap(&a[child], &a[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}

void HeapDestory(Heap* hp)
{
	assert(hp);

	free(hp->a);
	hp->capacity = hp->size = 0;
}


void HeapPush(Heap* hp, HPDataType x)
{
	assert(hp);

	if (hp->capacity == hp->size)
	{
		int newCapacity = hp->capacity == 0 ? 4 : hp->capacity * 2;
		HPDataType* tmp = (HPDataType*)realloc(hp->a,sizeof(HPDataType)*newCapacity);
		if (tmp == NULL)
		{
			printf("realloc fail");
			exit(-1);
		}
		hp->a = tmp;
		hp->capacity = newCapacity;
	}

	hp->a[hp->size] = x;
	hp->size++;
	AdjustUp(hp->a, hp->size - 1);
}



void HeapPop(Heap* hp)
{
	assert(hp);

	Swap(&hp->a[0], &hp->a[hp->size - 1]);
	hp->size--;

	AdjustDown(hp->a, 0, hp->size);
}

HPDataType HeapTop(Heap* hp)
{
	assert(hp);

	return hp->a[0];
}

int HeapSize(Heap* hp)
{
	return hp->size;
}

bool HeapEmpty(Heap* hp)
{
	assert(hp);

	return hp->size == 0;
}

void HeapPrint(Heap* hp)
{
	assert(hp);

	for (int i = 0; i < hp->size; i++)
	{
		printf("%d ", hp->a[i]);
	}

	printf("\n");
}