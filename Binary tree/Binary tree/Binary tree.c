#include"Binary tree.h"

BTNode* BuyBTNode(BTDataType x)
{
	BTNode* newNode = (BTNode*)malloc(sizeof(BTNode));
	newNode->_data = x;
	newNode->_left = NULL;
	newNode->_right = NULL;
	return newNode;
}


BTNode* CreatBinaryTree()
{
	BTNode* node1 = BuyBTNode(1);
	BTNode* node2 = BuyBTNode(2);
	BTNode* node3 = BuyBTNode(3);
	BTNode* node4 = BuyBTNode(4);
	BTNode* node5 = BuyBTNode(5);
	BTNode* node6 = BuyBTNode(6);

	node1->_left = node2;
	node1->_right = node4;
	node2->_left = node3;
	node4->_left = node5;
	node4->_right = node6;

	return node1;
}

void BinaryTreeDestory(BTNode** root)
{
	if (*root == NULL)
	{
		return;
	}
	BinaryTreeDestory(&(*root)->_left);
	BinaryTreeDestory(&(*root)->_right);
	free(*root);
}

int BinaryTreeSize(BTNode* root)
{

	return root == NULL ? 0 : BinaryTreeSize(root->_left) + BinaryTreeSize(root->_right) + 1;
}

int BinaryTreeLeafSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}

	if (root->_left == NULL && root->_right == NULL)
	{
		return 1;
	}

	return BinaryTreeLeafSize(root->_left) + BinaryTreeLeafSize(root->_right);
}

int BinaryTreeLevelKSize(BTNode* root, int k)
{
	if (root == NULL)
	{
		return 0;
	}

	if (k == 1)
	{
		return 1;
	}

	return BinaryTreeLevelKSize(root->_left, k - 1) + BinaryTreeLevelKSize(root->_right, k - 1) + 1;
}

BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
{
	if (root == NULL)
	{
		return NULL;
	}

	if (root->_data == x)
	{
		return root;
	}

	BTNode* ret1 = BinaryTreeFind(root->_left, x);
	if (ret1)
	{
		return ret1;
	}

	BTNode* ret2 = BinaryTreeFind(root->_right, x);
	if (ret2)
	{
		return ret2;
	}

	return NULL;
}

void BinaryTreePrevOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("# ");
		return;
	}
	printf("%d ", root->_data);
	BinaryTreePrevOrder(root->_left);
	BinaryTreePrevOrder(root->_right);
}

void BinaryTreeInOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("# ");
		return;
	}
	BinaryTreePrevOrder(root->_left);
	printf("%d ", root->_data);
	BinaryTreePrevOrder(root->_right);
}

void BinaryTreePostOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("# ");
		return;
	}
	BinaryTreePrevOrder(root->_left);
	BinaryTreePrevOrder(root->_right);
	printf("%d ", root->_data);
}

void BinaryTreeLevelOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("# ");
		return;
	}

	

	
}

bool BinaryTreeComplete(BTNode* root)
{
	
}