#include"Sort.h"

void Swap(int* x, int* y)
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

void ShellSort(int* a, int n)
{
	int gap = n - 1;
	while (gap > 1)
	{
		gap /= 3 + 1;
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

void SelectSort(int* a, int n)
{
	int begin = 0, end = n - 1;
	while (begin < end)
	{
		int maxi = begin, mini = begin;
		for (int i = begin + 1; i <= end; i++)
		{
			if (a[maxi] < a[i])
			{
				maxi = i;
			}

			if (a[mini] > a[i])
			{
				mini = i;
			}
		}
		Swap(&a[mini], &a[begin]);

		if (maxi == begin)
		{
			maxi = mini;
		}
		Swap(&a[maxi], &a[end]);
		begin++;
		end--;
	}
}

//排升序,建大堆
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
	//建堆
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(a, n, i);
	}

	//交换堆顶与最后的元素
	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[0], &a[end]);
		AdjustDown(a, end, 0);
		end--;
	}
}

void BubbleSort(int* a, int n)
{
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

int GetMidIndex(int* a, int begin, int end)
{
	int mid = (begin + end) / 2;

	if (a[begin] < a[mid])
	{
		if (a[begin] > a[end])
		{
			return begin;
		}
		else if (a[a[mid] < a[end]])
		{
			return mid;
		}
		else
		{
			return end;
		}
	}
	else// a[begin] > a[mid]
	{
		if (a[begin] < a[end])
		{
			return begin;
		}
		else if (a[mid] < a[end])
		{
			return mid;
		}
		else
		{
			return end;
		}
	}
}

int PartSort1(int* a, int begin, int end)
{
	int keyi = begin;
	int midi = GetMidIndex(a, begin, end);
	Swap(&a[midi], &a[keyi]);

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
		Swap(&a[begin], &a[end]);
	}
	Swap(&a[begin], &a[keyi]);
	keyi = begin;

	return keyi;
}

int PartSort2(int* a, int begin, int end)
{
	int midi = GetMidIndex(a, begin, end);
	Swap(&a[midi], &a[begin]);

	int key = a[begin];
	int piti = begin;
	
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

	while (cur <= end)
	{
		if (a[cur] < a[keyi] && ++prev != cur)
		{
			Swap(&a[prev], &a[cur]);
		}
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
			StackPush(&st, end);
			StackPush(&st, keyi + 1);
		}

		if (left < keyi - 1)
		{
			StackPush(&st, keyi - 1);
			StackPush(&st, begin);
		}
	}
	StackDestroy(&st);
}

void _MergeSort(int* a, int begin, int end, int* tmp)
{
	if (begin >= end)
	{
		return;
	}
	int mid = (begin + end) / 2;
	_MergeSort(a, begin, mid, tmp);
	_MergeSort(a, mid + 1, end, tmp);

	int begin1 = begin, end1 = mid;
	int begin2 = mid + 1, end2 = end;
	int j = begin1;
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (a[begin1] < a[begin2])
		{
			tmp[j++] = a[begin1++];
		}
		else
		{
			tmp[j++] = a[begin2++];
		}
	}
	while (begin1 <= end1)
	{
		tmp[j++] = a[begin1++];
	}

	while (begin2 <= end2)
	{
		tmp[j++] = a[begin2++];
	}
	memcpy(a + begin, tmp + begin, sizeof(int) * (end - begin + 1));
}

void MergeSort(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);
	if (tmp == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}

	_MergeSort(a, 0, n - 1, tmp);

	free(tmp);
	tmp = NULL;
}

void MergeSortNonR(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);
	if (tmp == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}

	int gap = 1;
	
	while (gap < n)
	{
		for (int i = 0; i < n; i += 2 * gap)
		{
			//推算小区间
			int begin1 = i, end1 = i + gap - 1;
			int begin2 = i + gap, end2 = i + gap * 2 - 1;
			//修正区间
			
			if (end1 >= n)
			{
				end1 = n - 1;
				begin2 = n;
				end2 = n - 1;
			}
			else if (begin2 >= n)
			{
				begin2 = n;
				end2 = n - 1;
			}
			else if (end2 >= n)
			{
				end2 = n - 1;
			}
			int j = begin1;
			while (begin1 <= end1 && begin2 <= end2)
			{
				if (a[begin1] < a[begin2])
				{
					tmp[j++] = a[begin1++];
				}
				else
				{
					tmp[j++] = a[begin2++];
				}
			}
			while (begin1 <= end1)
			{
				tmp[j++] = a[begin1++];
			}
			while (begin2 <= end2)
			{
				tmp[j++] = a[begin2++];
			}
		}
		memcpy(a, tmp, sizeof(int) * n);
		gap *= 2;
	}
	free(tmp);
	tmp = NULL;
}

void CountSort(int* a, int n)
{
	int max = a[0], min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
		if (a[i] < min)
		{
			min = a[i];
		}
	}

	int range = max - min + 1;
	int* count = (int*)malloc(sizeof(int) * range);
	if (count == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}

	memset(count, 0, sizeof(int) * range);

	for (int i = 0; i < n; i++)
	{
		count[a[i] - min]++;
	}
	int j = 0;
	for (int i = 0; i < range; i++)
	{
		while (count[i]--)
		{
			a[j++] = i + min;
		}
	}
	free(count);
	count = NULL;
}

void Init(Queue* Q[Radix])
{
	for (int i = 0; i < Radix; i++)
	{
		QueueInit(&Q[i]);
	}
}

void Destroy(Queue* Q[Radix])
{
	for (int i = 0; i < Radix; i++)
	{
		QueueDestroy(&Q[i]);
	}
}

int GetK(int val, int k)
{
	int ret = 0;
	while (k >= 0)
	{
		ret = val % 10;
		val /= 10;
		k--;
	}
	return ret;
}

void Destribute(int* a, int left, int right, int k)
{
	for (int i = left; i < right; i++)
	{
		int key = GetK(a[i], k);
		QueuePush(&Q[key], a[i]);
	}
}

void Collect(int* a)
{
	int j = 0;
	for (int i = 0; i < Radix; i++)
	{
		while (!QueueEmpty(&Q[i]))
		{
			a[j++] = QueueFront(&Q[i]);
			QueuePop(&Q[i]);
		}
	}
}

void RadixSort(int* a, int begin, int end)
{
	for (int i = 0; i < K; i++)
	{
		Destribute(a, begin, end, i);

		Collect(a);
	}
}