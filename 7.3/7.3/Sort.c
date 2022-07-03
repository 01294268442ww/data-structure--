#include"Sort.h"


void ArrayPrint(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void Swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}


//简答堆，排升序
void AdJustDown(int* a, int size, int parent)
{
	int child = parent * 2 + 1;
	while (child < size)
	{
		if (child + 1 < size && a[child + 1] > a[child])
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

void ShellSort(int* a, int n)
{
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

void SelectSort(int* a, int n)
{
	int begin = 0;
	int end = n - 1;

	while (begin < end)
	{
		int maxi = begin;
		int mini = begin;

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

		Swap(&a[end], &a[maxi]);
		begin++;
		end--;
	}
}


void HeapSort(int* a, int n)
{
	//建堆
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdJustDown(a, n, i);
	}

	//将堆顶的元素与数组最后一个元素交换
	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[0], &a[end]);
		AdJustDown(a, end, 0);
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
	int midi = (begin + end) / 2;
	if (a[begin] < a[midi])
	{
		if (a[begin] > a[end])
		{
			return begin;
		}
		else if (a[midi] < a[end])
		{
			return midi;
		}
		else
		{
			return end;
		}
	}
	else   //a[begin] >= a[midi]
	{
		if (a[begin] < a[end])
		{
			return begin;
		}
		else if (a[midi] > a[end])
		{
			return midi;
		}
		else
		{
			return end;
		}
	}
}

//Hoare
int PartSort1(int* a, int begin, int end)
{
	int left = begin;
	int right = end;
	int keyi = begin;

	int midi = GetMidIndex(a, begin, end);
	Swap(&a[midi], &a[keyi]);

	while (left < right)
	{
		while (left < right && a[right] >= a[keyi])
		{
			right--;
		}

		while (left < right && a[left] <= a[keyi])
		{
			left++;
		}
		Swap(&a[left], &a[right]);
	}

	Swap(&a[left], &a[keyi]);
	keyi = left;
	return keyi;
}

int PartSort2(int* a, int begin, int end)
{
	int midi = GetMidIndex(a, begin, end);
	Swap(&a[begin], &a[midi]);

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
	Swap(&a[midi], &a[keyi]);

	while (cur <= end)
	{
		if (a[cur] < a[keyi] && ++prev != cur)
			Swap(&a[prev], &a[cur]);
		cur++;
	}

	Swap(&a[prev], &a[keyi]);
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
		InsertSort(a+begin,end-begin+1);
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

void _MergeSort(int* a, int begin, int end, int* tmp)
{
	if (begin >= end)
	{
		return;
	}

	int mid = (begin + end) / 2;

	//划分区间
	_MergeSort(a, begin, mid, tmp);
	_MergeSort(a, mid + 1, end, tmp);

	//让每个区间有序
	int begin1 = begin, end1 = mid;
	int begin2 = mid + 1, end2 = end;
	int i = begin1;

	while (begin1 <= end1 && begin2 <= end2)
	{
		if (a[begin1] < a[begin2])
		{
			tmp[i++] = a[begin1++];
		}
		else
		{
			tmp[i++] = a[begin2++];
		}
	}
	while (begin1 <= end1)
	{
		tmp[i++] = a[begin1++];
	}

	while (begin2 <= end2)
	{
		tmp[i++] = a[begin2++];
	}

	memcpy(a + begin, tmp + begin, (end - begin + 1) * sizeof(int));
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
			int begin1 = i, end1 = i + gap - 1;
			int begin2 = i + gap, end2 = i + 2 * gap - 1;

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
}

//void MergeSortNonR(int* a, int n)
//{
//	int* tmp = (int*)malloc(sizeof(int)*n);
//	if (tmp == NULL)
//	{
//		printf("malloc fail\n");
//		exit(-1);
//	}
//
//	int gap = 1;
//	while (gap < n)
//	{
//		for (int i = 0; i < n; i += 2 * gap)
//		{
//			// [i,i+gap-1][i+gap, i+2*gap-1]
//			int begin1 = i, end1 = i + gap - 1;
//			int begin2 = i + gap, end2 = i + 2 * gap - 1;
//
//			// 越界-修正边界
//			if (end1 >= n)
//			{
//				end1 = n - 1;
//				// [begin2, end2]修正为不存在区间
//				begin2 = n;
//				end2 = n - 1;
//			}
//			else if (begin2 >= n)
//			{
//				// [begin2, end2]修正为不存在区间
//				begin2 = n;
//				end2 = n - 1;
//			}
//			else if(end2 >= n)
//			{
//				end2 = n - 1;
//			}
//
//			printf("[%d,%d] [%d, %d]--", begin1, end1, begin2, end2);
//
//			int j = begin1;
//			while (begin1 <= end1 && begin2 <= end2)
//			{
//				if (a[begin1] < a[begin2])
//				{
//					tmp[j++] = a[begin1++];
//				}
//				else
//				{
//					tmp[j++] = a[begin2++];
//				}
//			}
//
//			while (begin1 <= end1)
//			{
//				tmp[j++] = a[begin1++];
//			}
//
//			while (begin2 <= end2)
//			{
//				tmp[j++] = a[begin2++];
//			}
//		}
//		memcpy(a, tmp, sizeof(int) * n);
//
//		gap *= 2;
//	}
//
//	free(tmp);
//}

void CountSort(int* a, int n)
{
	int max = a[0];
	int min = a[0];

	for (int i = 0; i < n; i++)
	{
		if (a[i] < a[min])
		{
			min = i;
		}
		if (a[i] > a[max])
		{
			max = i;
		}
	}

	//统计次数的数组
	int range = max - min + 1;
	int* count = (int*)malloc(sizeof(int) * range);
	if (range == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}

	memset(count, 0, sizeof(int) * range);

	//统计次数
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
}


void Init(Queue* pq[Radix])
{
	for (int i = 0; i < Radix; i++)
	{
		QueueInit(&Q[i]);
	}
}

void Destroy(Queue* pq[Radix])
{
	for (int i = 0; i < Radix; i++)
	{
		QueueDestroy(&Q[i]);
	}
}

int GetK(int value, int k)
{
	int ret = 0;
	while (k >= 0)
	{
		ret = value % 10;
		value /= 10;
		k--;
	}
	return ret;
}

void Distribute(int* a, int left, int right, int k)
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
		//分发数据
		Distribute(a, begin, end, i);

		//回收数据
		Collect(a);
	}
}