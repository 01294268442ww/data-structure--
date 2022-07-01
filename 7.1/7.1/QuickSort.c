#include"Stack.h"

void ArrayPrint(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void Swap1(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

void InsertSort(int* a, int n)
{
	for (int i = 0; i < n-1; i++)
	{
		int end = i;
		int tmp = a[end + 1];
		while (end >= 0)
		{
			if (tmp < a[end])
			{
				a[end + 1] = a[end];
				end--;
			}
			else
			{
				break;
			}
		}
		a[end + 1] = tmp;

	}
}

int GetMidIndex(int* a, int begin, int end)
{
	int mid = (begin + end) / 2;
	if (a[begin] < a[mid])
	{
		if (a[mid] < a[end])
		{
			return mid;
		}
		else if (a[begin] < a[end])
		{
			return end;
		}
		else
		{
			return begin;
		}
	}
	else
	{
		if (a[mid] > a[end])
		{
			return mid;
		}
		else if (a[begin] < a[end])
		{
			return begin;
		}
		else
		{
			return end;
		}
	}
}

//Hoare   优化 版本
int PartSort1(int* a, int begin, int end)
{
	int keyi = begin;
	int midi = GetMidIndex(a, begin, end);
	Swap1(&a[keyi], &a[midi]);

	while (begin < end)
	{
		while (begin < end && a[end] >= a[keyi])
		{
			end--;
		}
		while (begin < end && a[begin] <= a[keyi])
		{
			begin++;
		}
		Swap1(&a[begin], &a[end]);
	}
	Swap1(&a[begin], &a[keyi]);
	keyi = begin;
	return keyi;
}

//挖坑法及优化

int PartSort2(int* a, int begin, int end)
{
	int midi = GetMidIndex(a, begin, end);
	Swap(&a[midi], &a[begin]);

	int piti = begin;
	int key = a[begin];

	while (begin < end)
	{
		while (begin < end && a[end] >= key)
		{
			end--;
		}

		a[piti] = a[end];
		piti = end;

		while (begin < end && a[begin] <= key)
		{
			begin++;
		}

		a[piti] = a[begin];
		piti = begin;
	}

	a[piti] = key;
	return piti;
}

int PartSort3(int* a, int begin, int end)
{
	int prev = begin;
	int cur = begin + 1;
	int keyi = begin;

	int midi = GetMidIndex(a, begin, end);
	Swap1(&a[midi], &a[keyi]);

	while (cur <= end)
	{
		if (a[cur] < a[keyi] && ++prev != cur)
			Swap1(&a[prev], &a[cur]);
		cur++;
	}
	Swap1(&a[prev], &a[keyi]);
	keyi = prev;

	return keyi;
}


void QuickSort(int* a, int begin, int end)
{
	if (begin >= end)
	{
		return;
	}
	if (end - begin > 10)
	{
		int keyi = PartSort3(a, begin, end);

		QuickSort(a, begin, keyi - 1);
		QuickSort(a, keyi + 1, end);
	}
	else
	{
		InsertSort(a + begin, end - begin + 1);
	}
}




void QuickSortNonR(int* a, int begin, int end)
{
	ST st;
	StackInit(&st);
	StackPush(&st, end);
	StackPush(&st, begin);

	while (!StackEmpty(&st))
	{
		int left = StackTop(&st);
		StackPop(&st);

		int right = StackTop(&st);
		StackPop(&st);

		int keyi = PartSort3(a, left, right);

		if (keyi + 1 < right)
		{
			StackPush(&st, right);
			StackPush(&st, keyi + 1);
		}

		if (left < keyi - 1)
		{
			StackPush(&st, keyi - 1);
			StackPush(&st, left);
		}
	}
	StackDestroy(&st);
}

void Test()
{
	int a[] = { 1,2,9,4,2,6,8,4,4,2 };
	int sz = sizeof(a) / sizeof(a[0]);
	//QuickSort(a, 0, sz - 1);
	QuickSortNonR(a, 0, sz - 1);
	ArrayPrint(a, sz);
}

int main1()
{
	Test();
	return 0;
}