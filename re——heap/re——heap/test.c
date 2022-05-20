#include"Heap.h"

void testHeap()
{
	Heap hp;
	HeapInit(&hp);

	HeapPush(&hp, 16);
	HeapPush(&hp, 72);
	HeapPush(&hp, 31);
	HeapPush(&hp, 23);
	HeapPush(&hp, 94);
	HeapPush(&hp, 53);

	printf("%d \n", HeapSize(&hp));

	HeapPrint(&hp);
	
	HeapDestory(&hp);
}
int main()
{
	testHeap();
	return 0;
}