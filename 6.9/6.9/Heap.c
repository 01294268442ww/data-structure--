#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

//typedef int HPDataType;
//
//void Swap(HPDataType* x, HPDataType* y)
//{
//	HPDataType tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//void AdjustDown(HPDataType* a, int parent, int n)
//{
//	assert(a);
//
//	int child = parent * 2 + 1;
//	while (child < n)
//	{
//		if (child + 1 < n && a[child + 1] < a[child])
//		{
//			child++;
//		}
//
//		if (a[child] < a[parent])
//		{
//			Swap(&a[parent], &a[child]);
//			parent = child;
//			child = parent * 2 + 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//}
//
//void HeapSort(int*a,int n)
//{
//	//建堆
//	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
//	{
//		AdjustDown(a, i, n);
//	}
//
//	//排降序
//
//	int end = n - 1;
//	while (end > 0)
//	{
//		Swap(&a[0], &a[end]);
//		AdjustDown(a, 0, end);
//		end--;
//	}
//}
//
//void testHeapSort()
//{
//	int a[] = { 65,37,49,27,19,28,25,15 };
//	int sz = sizeof(a) / sizeof(a[0]);
//
//	HeapSort(a, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", a[i]);
//	}
//
//}


void Swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

//升序
void adjustDown(int* a, int n, int parent)
{
	assert(a);

	int child = parent * 2 + 1;
	while (child < n)
	{
		//寻找左右孩子中较大的一个
		if (child + 1 < n && a[child + 1] > a[child])
		{
			child++;
		}

		if (a[child] > a[parent])
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

void HeapSort(int* a, int n)
{

	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		adjustDown(a, n, i);
	}

	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[0], &a[end]);
		adjustDown(a, end, 0);
		end--;
	}

}
void testHeapSort()
{
	int a[] = { 16,72,31,23,94,53 };
	int n = sizeof(a) / sizeof(a[0]);

	HeapSort(a, n);


	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}

int main()
{
	testHeapSort();

	return 0;
}

