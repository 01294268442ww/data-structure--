#include"Stack.h"
#include"Queue.h"
#include"Heap.h"

void testStack()
{
	ST s;
	StackInit(&s);
	StackPush(&s, 1);
	StackPush(&s, 2);
	StackPush(&s, 3);
	StackPush(&s, 4);
	StackPush(&s, 5);

	while (!StackEmpty(&s))
	{
		printf("%d ", StackTop(&s));
		StackPop(&s);
	}

	StackDestory(&s);
}

void testQueue()
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueuePush(&q, 4);
	QueuePush(&q, 5);
	printf("%d \n", QueueSize(&q));
	
	while (!QueueEmpty(&q))
	{
		printf("%d ", QueueBack(&q));
		QueuePop(&q);
	}
	QueueDestory(&q);

}

void testHeap()
{
	Heap hp;
	HPDataType arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int len = sizeof(arr) / sizeof(arr[0]);

	HeapCreate(&hp, arr, len);

	HeapPrint(&hp);

	printf("%d \n", HeapSize(&hp));
	HeapPop(&hp);
	HeapPop(&hp);
	HeapPop(&hp);
	HeapPrint(&hp);

	HeapPush(&hp, 3);
	HeapPush(&hp, 11);

	HeapPrint(&hp);
	HeapDestory(&hp);
}

void PrintTopK(int* a, int n, int k)
{

	HPDataType* MinHeap = (HPDataType*)malloc(sizeof(HPDataType) * k);
	//将a中前k个元素导入
	for (int i = 0; i < k; i++)
	{
		MinHeap[i] = a[i];
	}
	
	//以前k个元素建堆
	for (int i = (k - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(MinHeap, i, k);
	}

	//剩下的n-k个元素和堆顶比较
	for (int i = k; i < n; i++)
	{
		if (a[i] > MinHeap[0])
		{
			MinHeap[0] = a[i];
			AdjustDown(MinHeap, 0, k);
		}
	}

	for (int i = 0; i < k; i++)
	{
		printf("%d ", MinHeap[i]);
	}
	printf("\n");

}

void TestTopk()
{
	int n = 10000;
	int* a = (int*)malloc(sizeof(int) * n);
	srand(time(0));
	//随机生成10000个数存入数组，保证元素都小于1000000
	for (size_t i = 0; i < n; ++i)
	{
		a[i] = rand() % 1000000;
	}
	//确定10个最大的数
	a[5] = 1000000 + 1;
	a[1231] = 1000000 + 2;
	a[531] = 1000000 + 3;
	a[5121] = 1000000 + 4;
	a[115] = 1000000 + 5;
	a[2335] = 1000000 + 6;
	a[9999] = 1000000 + 7;
	a[76] = 1000000 + 8;
	a[423] = 1000000 + 9;
	a[3144] = 1000000 + 10;

	PrintTopK(a, n, 10);
}

int main()
{
	//testStack();

	//testQueue();

	//testHeap();

	TestTopk();

	return 0;
}