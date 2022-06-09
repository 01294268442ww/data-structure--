
#include<stdio.h>
#include<assert.h>

void SelectSort(int* a, int n)
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
void ArrayPrint(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void testSelectSort()
{
	int a[] = {10,9,8,7,6,5,4,3,2,1};
	int sz = sizeof(a) / sizeof(a[0]);
	SelectSort(a, sz);
	ArrayPrint(a, sz);
}

void testShellSort()
{
	int a[] = { 10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(a) / sizeof(a[0]);
	ShellSort(a, sz);
	ArrayPrint(a, sz);
}


int main()
{
	//testSelectSort();

	testShellSort();

	return 0;
}