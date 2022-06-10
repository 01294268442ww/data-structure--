#include<stdio.h>
#include<assert.h>

void Swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

void AdjustDown(int* a, int n, int parent)
{
	int child = parent * 2 + 1;
	while (child < n)
	{
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
	assert(a);

	//建堆,建大堆排升序
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(a, n, i);
	}

	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[0], &a[end]);
		AdjustDown(a, end, 0);
		end--;
	}

}
void ArrayPrint(int* a, int n)
{
	assert(a);
	assert(n > 0);
	for (int i = 0; i < n; i++)
	{
		printf("%d  ", a[i]);
	}
	printf("\n");
}

void TestHeapSort()
{
	int a[] = { 10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(a) / sizeof(a[0]);
	HeapSort(a, sz);
	ArrayPrint(a, sz);
}

void SelectSort(int* a, int n)
{
	assert(a);
	assert(n > 0);

	int begin = 0;
	int end = n - 1;
	while (begin < end)
	{
		int mini = begin;
		int maxi = begin;

		//单趟
		for (int i = begin+1; i <= end; i++)
		{
			if (a[i] < a[mini])
			{
				mini = i;
			}

			if (a[i] > a[maxi])
			{
				maxi = i;
			}
		}
		Swap(&a[begin], &a[mini]);

		if (begin == maxi)
		{
			maxi = mini;
		}

		Swap(&a[end], &a[maxi]);
		begin++;
		end--;
	}
	
}

void TestSelectSort()
{
	int a[] = { 10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(a) / sizeof(a[0]);
	SelectSort(a, sz);
	ArrayPrint(a, sz);
}

void BubbleSort(int* a, int n)
{
	assert(a);
	assert(n > 0);

	
	for (int i = 0; i < n - 1; i++)
	{
		int exchange = 0;
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				Swap(&a[j], &a[j + 1]);
				exchange = 1;
			}
		}
		if (exchange == 0)
		{
			break;
		}
	}
}

void QuickSort(int* a, int begin, int end)
{
	assert(a);

	//开始大于结束  说明区间不存在
	//等于 说明只有一个元素，不用操作
	if (begin >= end)
	{
		return;
	}
	int left = begin;
	int right = end;
	int keyi = left;
	while (left < right)
	{
		//右边先走找比key小的
		while (left < right && a[right] >= a[keyi])
		{
			right--;
		}
		Swap(&a[left], &a[right]);
	}

	Swap(&a[keyi], &a[left]);
	keyi = left;

	QuickSort(a, begin, keyi - 1);
	QuickSort(a, keyi + 1, end);
}

void TestQuickSort()
{
	int a[] = { 10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(a) / sizeof(a[0]);
	QuickSort(a, 0,sz-1);
	ArrayPrint(a, sz);
}

int main()
{
	//TestHeapSort();

	//TestSelectSort();

	TestQuickSort();

	return 0;
}