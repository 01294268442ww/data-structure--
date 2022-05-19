#include<stdio.h>


void AdjustDwon(HPDataType* a, int size, int parent)
{
	int child = parent * 2 + 1;
	while (child < size)
	{
		if (child+1<size && a[child] > a[child + 1])
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

for (int i = 0; i < size; i++)
{
	Adjustup(a, i);
}