#include<stdio.h>

void InsertSort(int* a, int n)
{
	for (int i = 0; i < n-1; i++)
	{
		int end=i;
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
		a[end+1] = tmp;
	}
}

void Print(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void TestInserSort()
{
	int a[] = { 10,9,8,7,6,5,4,3,2,1 };
	int len = sizeof(a) / sizeof(a[0]);
	InsertSort(a, len);
	Print(a, len);
}

void ShellSort(int* a, int n)
{
	int gap = n;
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
	int a[] = { 10,9,8,7,6,5,4,3,2,1 };
	int len = sizeof(a) / sizeof(a[0]);
	ShellSort(a, len);
	Print(a, len);
}

int main()
{
	//TestInserSort();
	TestShellSort();
	return 0;
}