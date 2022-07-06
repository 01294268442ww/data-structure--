#include"BinaryTree.h"
#include"Sort.h"
void testBinary()
{
	BTDataType* a = "ABD##E#H##CF##G##";
	int n = strlen(a);
	int i = 0;
	BTNode* root = BinaryTreeCreate(a, n, &i);

	BinaryTreePrevOrder(root);
	printf("\n");
	BinaryTreeInOrder(root);
	printf("\n");
	BinaryTreePostOrder(root);
	printf("\n");
	BinaryTreeLevelOrder(root);
	printf("%d\n", BinaryTreeComplete(root));
	printf("%d\n", TreeDepth(root));
	printf("%d\n", BinaryTreeLeafSize(root));
	BinaryTreeDestory(root);
	root = NULL;
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
	int a[] = { 2,13,2,3446,576,4,1,3,24465,2,3,5,7,85,4,2,4,0,1,2,9,4,2,6,8,4,4,2 };
	int sz = sizeof(a) / sizeof(a[0]);
	InsertSort(a, sz);
	ArrayPrint(a, sz);
}


void testShellSort()
{
	int a[] = { 2,13,2,3446,576,4,1,3,24465,2,3,5,7,85,4,2,4,0,1,2,9,4,2,6,8,4,4,2 };
	int sz = sizeof(a) / sizeof(a[0]);
	ShellSort(a, sz);
	ArrayPrint(a, sz);
}

void testSelectSort()
{
	int a[] = { 2,13,2,3446,576,4,1,3,24465,2,3,5,7,85,4,2,4,0,1,2,9,4,2,6,8,4,4,2 };
	int sz = sizeof(a) / sizeof(a[0]);
	SelectSort(a, sz);
	ArrayPrint(a, sz);
}

void testHeapSort()
{
	int a[] = { 2,13,2,3446,576,4,1,3,24465,2,3,5,7,85,4,2,4,0,1,2,9,4,2,6,8,4,4,2 };
	int sz = sizeof(a) / sizeof(a[0]);
	HeapSort(a, sz);
	ArrayPrint(a, sz);
}

void testBubbleSort()
{
	int a[] = { 2,13,2,3446,576,4,1,3,24465,2,3,5,7,85,4,2,4,0,1,2,9,4,2,6,8,4,4,2 };
	int sz = sizeof(a) / sizeof(a[0]);
	BubbleSort(a, sz);
	ArrayPrint(a, sz);
}

void testQuickSort()
{
	int a[] = { 2,13,2,3446,576,4,1,3,24465,2,3,5,7,85,4,2,4,0,1,2,9,4,2,6,8,4,4,2 };
	int sz = sizeof(a) / sizeof(a[0]);
	QuickSort(a, 0, sz - 1);
	ArrayPrint(a, sz);
}

void testQuickSortNonR()
{
	int a[] = { 2,13,2,3446,576,4,1,3,24465,2,3,5,7,85,4,2,4,0,1,2,9,4,2,6,8,4,4,2 };
	int sz = sizeof(a) / sizeof(a[0]);
	QuickSortNonR(a, 0, sz - 1);
	ArrayPrint(a, sz);
}

void testMergeSort()
{
	int a[] = { 2,13,2,3446,576,4,1,3,24465,2,3,5,7,85,4,2,4,0,1,2,9,4,2,6,8,4,4,2 };
	int sz = sizeof(a) / sizeof(a[0]);
	MergeSort(a, sz);
	ArrayPrint(a, sz);
}

void testMergeSortNonR()
{
	int a[] = { 2,13,2,3446,576,4,1,3,24465,2,3,5,7,85,4,2,4,0,1,2,9,4,2,6,8,4,4,2 };
	int sz = sizeof(a) / sizeof(a[0]);
	MergeSortNonR(a, sz);
	ArrayPrint(a, sz);
}

void testCountSort()
{
	int a[] = { 8,5,6,2,1,7,0,9,3,4 };
	int sz = sizeof(a) / sizeof(a[0]);
	CountSort(a, sz);
	ArrayPrint(a, sz);
}

void testRadixSort()
{
	Init(&Q[Radix]);
	int a[] = { 278,109,63,930,589,184,505,269,8,83 };
	int sz = sizeof(a) / sizeof(a[0]);
	RadixSort(a, 0, sz);
	ArrayPrint(a, sz);
	Destroy(&Q[Radix]);
}
int main()
{
	//testBinary();
	//testInsertSort();
	//testSelectSort();
	//testHeapSort();
	//testBubbleSort();
	//testQuickSort();
	//testQuickSortNonR();
	//testMergeSort();
	//testMergeSortNonR();
	//testCountSort();
	testRadixSort();
	return 0;
}