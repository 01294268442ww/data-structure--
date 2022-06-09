#include"BinaryTree.h"

void testTree()
{
	BTDataType* array = "ABD##E#H##CF##G##";
	int n = strlen(array);
	int i = 0;
	BTNode* root = BinaryTreeCreate(array, n, &i);

	BinaryTreePrevOrder(root);
	printf("\n");
	BinaryTreeInOrder(root);
	printf("\n");
	BinaryTreePostOrder(root);
	printf("\n");
	BinaryTreeLevelOrder(root);
	printf("\n");

	BinaryTreeDestory(root);
	root = NULL;
}

int main()
{
	testTree();
	return 0;
}