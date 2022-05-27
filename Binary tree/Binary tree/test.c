//test.c
#include"Binary tree.h"

void testTree()
{
	BTDataType* a = "ABD##E#H##CF##G##";
	int len = strlen(a);
	int i = 0;
	BTNode* tree = BinaryTreeCreate(a, len, &i);

	printf("PrevOrder");
	BinaryTreePrevOrder(tree);
	printf("\n");

	printf("InOrder");
	BinaryTreeInOrder(tree);
	printf("\n");

	printf("PostOrder");
	BinaryTreePostOrder(tree);
	printf("\n");

	printf("LeafSize: %d\n", BinaryTreeLeafSize(tree));
	printf("LeavelKsize: %d\n", BinaryTreeLevelKSize(tree, 3));
	printf("TreeSize: %d\n", BinaryTreeSize(tree));

	BTNode*tmp=BinaryTreeFind(tree, 4);
	printf("TreeFind: %p\n", tmp);
	BinaryTreeLevelOrder(tree);
	printf("Complete: %d\n", BinaryTreeComplete(tree));
	BinaryTreeDestory(tree);
	tree = NULL;
}
int main()
{
	testTree();
	return 0;
}