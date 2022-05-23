#include"Binary tree.h"

void testTree()
{
	BTNode* root = CreatBinaryTree();
	BinaryTreePrevOrder(root);
	printf("\n");
	BinaryTreeInOrder(root);
	printf("\n");
	BinaryTreePostOrder(root);
	printf("\n");

	BinaryTreeLeafSize(root);

	BinaryTreeLevelKSize(root, 2);
	//≤„–Ú±È¿˙
	//BinaryTreeLevelOrder(root);

	BinaryTreeDestory(root);
}
int main()
{
	testTree();
	return 0;
}