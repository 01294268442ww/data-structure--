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

int main()
{
	//testStack();

	//testQueue();

	testHeap();

	return 0;
}