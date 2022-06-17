#include<stdio.h>
#include<assert.h>

void InsertSort(int* a, int n)
{
	assert(a);
	assert(n > 0);
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

void ArrayPrint(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}


void testInsertSort()
{
	int a[] = { 2343,123,343,4,46,7,322,35,75463,44 };
	int sz = sizeof(a) / sizeof(a[0]);
	InsertSort(a, sz);
	ArrayPrint(a, sz);
}

void ShellSort(int* a, int n)
{
	assert(a);
	assert(n > 0);

	int gap = n - 1;
	while (gap > 1)
	{
		gap = gap / 3 + 1;
		for (int i = 0; i < n - gap; i++)
		{
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0)
			{
				if (tmp < a[end])
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = tmp;
		}
	}
	
}

void TestShellSort()
{
	int a[] = { 2343,123,343,4,46,7,322,35,75463,44 };
	int sz = sizeof(a) / sizeof(a[0]);
	ShellSort(a, sz);
	ArrayPrint(a, sz);
}

void Swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
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

		for (int i = begin + 1; i <= end; i++)
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
		Swap(&a[maxi], &a[end]);
		begin++;
		end--;
	}
}

void TestSelectSort()
{
	int a[] = { 2343,123,343,4,46,7,322,35,75463,44 };
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
		for (int j = 0; j < n - i - 1; j++)
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

void TestBubbleSort()
{
	int a[] = { 2343,123,343,4,46,7,322,35,75463,44 };
	int sz = sizeof(a) / sizeof(a[0]);
	BubbleSort(a, sz);
	ArrayPrint(a, sz);
}

void QuickSort(int* a, int begin, int end)
{
	
	if (begin >= end)
	{
		return;
	}

	int left = begin;
	int right = end;
	int keyi = left;
	while (left < right)
	{
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
	int a[] = { 2343,123,343,4,46,7,322,35,75463,44 };
	int sz = sizeof(a) / sizeof(a[0]);
	QuickSort(a, 0,sz-1);

	ArrayPrint(a, sz);
}

int main()
{
	//testInsertSort();

	//TestShellSort();
	//TestSelectSort();
	//TestBubbleSort();
	return 0;
}