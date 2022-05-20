#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

void Swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

//����
void adjustDown(int* a, int n, int parent)
{
	assert(a);

	int child = parent * 2 + 1;
	while (child < n)
	{
		//Ѱ�����Һ����нϴ��һ��
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

void HeapSort(int*a,int n)
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