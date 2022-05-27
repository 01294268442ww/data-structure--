//Binary tree.c
#include"Binary tree.h"

BTNode* BuyBTNode(BTDataType x)
{
	BTNode* newNode = (BTNode*)malloc(sizeof(BTNode));
	newNode->_data = x;
	newNode->_left = NULL;
	newNode->_right = NULL;
	return newNode;
}


BTNode* BinaryTreeCreate(BTDataType* a, int n, int* pi)
{
	if (a[*pi] == '#')
	{
		(*pi)++;
		return NULL;
	}

	BTNode* root = BuyBTNode(a[(*pi)++]);
	root->_left = BinaryTreeCreate(a, n, pi);
	root->_right = BinaryTreeCreate(a, n, pi);
	return root;
}

void BinaryTreeDestory(BTNode* root)
{
	if (root == NULL)
	{
		return;
	}
	BinaryTreeDestory(root->_left);
	BinaryTreeDestory(root->_right);
	free(root);
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
	Queue q;
	QueueInit(&q);
	if (root != NULL)
	{
		QueuePush(&q, root);
	}
	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);
		printf("%c ", front->_data);

		if (front->_left != NULL)
		{
			QueuePush(&q, front->_left);
		}

		if (front->_right != NULL)
		{
			QueuePush(&q, front->_right);
		}
	}
	printf("\n");
	QueueDestroy(&q);
}

bool BinaryTreeComplete(BTNode* root)
{
	Queue q;
	QueueInit(&q);

	QueuePush(&q,root);
	while (!QueueEmpty(&q))
	{
		BTNode* tmp = QueueFront(&q);
		QueuePop(&q);

		if (tmp != NULL)
		{
			QueuePush(&q, tmp->_left);
			QueuePush(&q, tmp->_right);
		}
		else
		{
			break;
		}
	}

	while (!QueueEmpty(&q))
	{
		BTNode* tmp = QueueFront(&q);
		QueuePop(&q);
		if (tmp != NULL)
		{
			QueueDestroy(&q);
			return false;
		}
	}

	QueueDestroy(&q);
	return true;
}