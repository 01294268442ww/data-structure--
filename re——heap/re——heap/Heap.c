#include"Heap.h"

void HeapInit(Heap* php)
{
	assert(php);

	php->a = NULL;
	php->capacity = php->size = 0;

}

void HeapDestory(Heap* php)
{
	assert(php);

	free(php->a);
	php->a = NULL;
	php->capacity = php->size = 0;
}

void Swap(HPDataType* x, HPDataType* y)
{
	HPDataType* tmp = *x;
	*x = *y;
	*y = tmp;
}

//小堆
void adjustUp(HPDataType* a, int child)
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

void HeapPush(Heap* php, HPDataType x)
{
	assert(php);

	if (php->capacity == php->size)
	{
		int newCapacity = php->capacity == 0 ? 4 : php->capacity * 2;
		HPDataType* tmp = (HPDataType*)realloc(php->a, sizeof(HPDataType) * newCapacity);
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		php->a = tmp;
		php->capacity = newCapacity;
	}

	php->a[php->size] = x;
	php->size++;

	adjustUp(php->a, php->size - 1);
}


//小堆
void adjustDown(HPDataType* a, int n, int parent)
{
	assert(a);

	int child = parent * 2 + 1;
	while (child < n)
	{
		//寻找左右孩子中较小的一个
		if (child + 1 < n && a[child + 1] < a[child])
		{
			child++;
		}

		if (a[child] < a[parent])
		{
			Swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

void HeapPop(Heap* php)
{
	assert(php);
	assert(!HeapEmpty(php));

	Swap(&php->a[0], &php->a[php->size - 1]);

	php->size--;

	adjustDown(php->a, php->size, 0);

}

HPDataType HeapTop(Heap* php)
{
	assert(php);
	assert(!HeapEmpty(php));

	return php->a[0];
}

bool HeapEmpty(Heap* php)
{
	assert(php);

	return php->capacity == 0;
}

int HeapSize(Heap* php)
{
	assert(php);

	return php->size;
}

void HeapPrint(Heap* php)
{
	assert(php);

	for (int i = 0; i < php->size; i++)
	{
		printf("%d ", php->a[i]);
	}
	printf("\n");
}