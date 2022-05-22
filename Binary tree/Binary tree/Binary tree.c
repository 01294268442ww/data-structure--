#include"Binary tree.h"

BTNode* BuyBTNode(BTDataType x)
{
	BTNode* newNode = (BTNode*)malloc(sizeof(BTNode));
	newNode->_data = x;
	newNode->_left = NULL;
	newNode->_right = NULL;

}


BTNode* BinaryTreeCreate(BTDataType* a, int n, int* pi)
{
	assert(pi);
	assert(a);

	// 通过前序遍历的数组"ABD ##E #H# #CF ##G ##"构建二叉树

	BTNode* n1 = BuyBTNode(pi[0]);//a
	BTNode* n2 = BuyBTNode(pi[1]);//b
	BTNode* n3 = BuyBTNode(pi[2]);//d
	BTNode* n4 = BuyBTNode(pi[3]);//#
	BTNode* n5 = BuyBTNode(pi[4]);//#
	BTNode* n6 = BuyBTNode(pi[5]);//e
	BTNode* n7 = BuyBTNode(pi[6]);//#
	BTNode* n8 = BuyBTNode(pi[7]);//#
	BTNode* n9 = BuyBTNode(pi[8]);//h
	BTNode* n10 = BuyBTNode(pi[9]);//#
	BTNode* n11 = BuyBTNode(pi[10]);//#
	BTNode* n12 = BuyBTNode(pi[11]);//c
	BTNode* n13 = BuyBTNode(pi[12]);//f
	BTNode* n14 = BuyBTNode(pi[13]);//#
	BTNode* n15 = BuyBTNode(pi[14]);//#
	BTNode* n16 = BuyBTNode(pi[15]);//g
	BTNode* n17 = BuyBTNode(pi[16]);//#
	BTNode* n18 = BuyBTNode(pi[17]);//#

	n1->_left = n2;
	n1->_right = n7;
	n2->_left = n3;
	n2->_right = n6;
	n3->_left = n4;
	n3->_right = n5;
	n6->_left = n7;
	n6->_right = n9;
	n12->_left = n13;
	n12->_right = n16;
	n13->_left = n14;
	n13->_right = n15;
	n16->_left = n17;
	n16->_right = n18;
	
}

void BinaryTreeDestory(BTNode** root)
{



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
	printf("%c ", root->_data);
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
	printf("%c ", root->_data);
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
	printf("%c ", root->_data);
}

void BinaryTreeLevelOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("# ");
		return;
	}

	printf("%c ", root->_data);
	BinaryTreePrevOrder(root->_left);
	BinaryTreePrevOrder(root->_right);
	
}