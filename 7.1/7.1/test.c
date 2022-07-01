#include"Heap.h"

void testHeap()
{
	HP hp;
	HeapInit(&hp);
	int a[] = { 100,60,70,50,32,65 };
	int sz = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < sz; i++)
	{
		HeapPush(&hp, a[i]);
	}

	HeapPop(&hp);

	HeapPrint(&hp);
	HeapDestroy(&hp);
}

void HeapSort(int* a, int n)
{
	//½¨¶Ñ
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDwon(a, n, i);
	}

	//ÅÅÐò
	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[0], &a[end]);
		AdjustDwon(a, end, 0);
		end--;
	}
}

void ArrayPrint1(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void testHeapSort()
{
	int a[] = { 1,2,9,4,2,6,8,4,4,2 };
	int sz = sizeof(a) / sizeof(a[0]);
	HeapSort(a, sz);
	ArrayPrint1(a, sz);
}

int main()
{
	//testHeap();
	testHeapSort();
	return 0;
}