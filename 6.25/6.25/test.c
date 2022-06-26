#include<stdio.h>
#include"Stack.h"
void Swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

void InsertSort(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
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
	if (begin < mid)
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
	else   //begin >= mid
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

//hoare版本  加入三数取中，和小区间优化
int PartSort1(int* a, int begin, int end)
{
	int left = begin;
	int right = end;
	int keyi = left;

	int mini = GetMidIndex(a, begin, end);
	Swap(&a[mini], &a[keyi]);

	while (left < right)
	{
		//右边先走找小
		while (left < right && a[right] >= a[keyi])
		{
			right--;
		}
		//左边走找大
		while (left < right && a[left] <= a[keyi])
		{
			left++;
		}
		//交换
		Swap(&a[left], &a[right]);
	}

	Swap(&a[keyi], &a[left]);
	keyi = left;
	return keyi;
}


//挖坑法
int PartSort2(int* a, int begin, int end)
{
	
	int key = a[begin];
	int piti = begin;

	int mini = GetMidIndex(a, begin, end);
	Swap(&a[mini], &a[piti]);

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


//前后指针法
int PartSort3(int* a, int begin, int end)
{
	int prev = begin;
	int cur = begin + 1;
	int keyi = begin;

	int mini = GetMidIndex(a, begin, end);
	Swap(&a[mini], &a[keyi]);

	while (cur <= end)
	{
		if (a[cur] < a[keyi] && ++prev != cur)
			Swap(&a[prev], &a[cur]);
		cur++;
	}
	Swap(&a[keyi], &a[prev]);
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
		InsertSort(a+begin, end - begin + 1);
	}
}

void ArrayPrint(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
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
	int a[] = { 2,4,4,87,1,1,4,1,7,4,56,0,9,8,7,5,4,2,11,112 };
	int sz = sizeof(a) / sizeof(a[0]);
	QuickSortNonR(a, 0, sz - 1);
	ArrayPrint(a, sz);
}

int main()
{
	Test();
}
