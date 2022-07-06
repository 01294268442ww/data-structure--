#include"BinaryTree.h"

BTNode* BuyBTNode(BTDataType x)
{
	BTNode* newnode = (BTNode*)malloc(sizeof(BTNode));
	if (newnode == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	newnode->data = x;
	newnode->left = NULL;
	newnode->right = NULL;
	return newnode;
}

BTNode* BinaryTreeCreate(BTDataType* a, int n, int* pi)
{
	if (a[*pi] == '#')
	{
		(*pi)++;
		return NULL;
	}

	BTNode* root = BuyBTNode(a[(*pi)++]);
	root->left = BinaryTreeCreate(a, n, pi);
	root->right = BinaryTreeCreate(a, n, pi);
	return root;
}

void BinaryTreeDestory(BTNode* root)
{
	if (root == NULL)
	{
		return;
	}

	BinaryTreeDestory(root->left);
	BinaryTreeDestory(root->right);
	free(root);
}

int BinaryTreeSize(BTNode* root)
{
	return root == NULL ? 0 : BinaryTreeSize(root->left) + BinaryTreeSize(root->right) + 1;
}

int BinaryTreeLeafSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}

	if (root->left == NULL && root->right == NULL)
	{
		return 1;
	}

	return BinaryTreeLeafSize(root->left) + BinaryTreeLeafSize(root->right);
}

int BinaryTreeLevelKSize(BTNode* root, int k)
{
	assert(k >= 1);
	if (root == NULL)
	{
		return 0;
	}

	if (k == 1)
	{
		return 1;
	}
	return BinaryTreeLevelKSize(root->left, k - 1) + BinaryTreeLevelKSize(root->right, k - 1);
}

BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
{
	if (root == NULL)
	{
		return NULL;
	}

	if (root->data == x)
	{
		return root;
	}

	BTNode* retlf = BinaryTreeFind(root->left, x);
	if (retlf)
	{
		return retlf;
	}

	BTNode*retri = BinaryTreeFind(root->right, x);
	if (retri)
	{
		return retri;
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

	printf("%c ", root->data);

	BinaryTreePrevOrder(root->left);
	BinaryTreePrevOrder(root->right);
}

void BinaryTreeInOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("# ");
		return;
	}

	BinaryTreeInOrder(root->left);
	printf("%c ", root->data);
	BinaryTreeInOrder(root->right);
}

void BinaryTreePostOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("# ");
		return;
	}

	BinaryTreePostOrder(root->left);
	BinaryTreePostOrder(root->right);

	printf("%c ", root->data);
}

int TreeDepth(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}

	int leftDepth = TreeDepth(root->left);
	int rightDepth = TreeDepth(root->right);
	return leftDepth > rightDepth ? leftDepth + 1 : rightDepth + 1;
}

void BinaryTreeLevelOrder(BTNode* root)
{
	Queue Q;
	QueueInit(&Q);
	if (root)
	{
		QueuePush(&Q, root);
	}
	while (!QueueEmpty(&Q))
	{
		BTNode* front = QueueFront(&Q);
		QueuePop(&Q);
		printf("%c ", front->data);

		if (front->left)
		{
			QueuePush(&Q, front->left);
		}

		if (front->right)
		{
			QueuePush(&Q, front->right);
		}
	}
	printf("\n");
	QueueDestroy(&Q);
}

bool BinaryTreeComplete(BTNode* root)
{
	Queue Q;
	QueueInit(&Q);
	if (root)
	{
		QueuePush(&Q, root);
	}

	while (!QueueEmpty(&Q))
	{
		BTNode* front = QueueFront(&Q);
		QueuePop(&Q);
		if (front)
		{
			QueuePush(&Q, front->left);
			QueuePush(&Q, front->right);
		}
		else
		{
			break;
		}
	}
	while (!QueueEmpty(&Q))
	{
		BTNode* front = QueueFront(&Q);
		QueuePop(&Q);
		if (front)
		{
			QueueDestroy(&Q);
			return false;
		}
	}
	QueueDestroy(&Q);
	return true;
}