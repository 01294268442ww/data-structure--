#include"Heap.h"

void test01()
{
	Heap h;
	HeapInit(&h);
	HeapPush(&h, 2);
	HeapPush(&h, 8);
	HeapPush(&h, 6);
	HeapPush(&h, 4);
	HeapPush(&h, 3);
	HeapPush(&h, 1);
	HeapPush(&h, 2);
	for (int i = 0; i < 7; i++)
	{
		printf("%d ", h.a[i]);
	}
	printf("\n");
	HeapPop(&h);
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", h.a[i]);
	}
	printf("\n");
	printf("%d\n",HeapSize(&h));
	printf("\n");
	printf("%d\n", HeapTop(&h));
	HeapDestroy(&h);
}

int main()
{
	test01();
	return 0;
}