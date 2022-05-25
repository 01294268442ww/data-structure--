#include<stdio.h>
#include<stdbool.h>

//
//bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
//    if (p == NULL && q == NULL)
//    {
//        return true;
//    }
//
//    if (p == NULL || q == NULL)
//    {
//        return false;
//    }
//
//    if (p->val != q->val)
//    {
//        return false;
//    }
//
//    return isSameTree(p->left, q->left)
//        && isSameTree(p->right, q->right);
//}
//
//bool isSubtree(struct TreeNode* root, struct TreeNode* subRoot) {
//    if (root == NULL && subRoot == NULL)
//    {
//        return true;
//    }
//
//    if (root == NULL || subRoot == NULL)
//    {
//        return false;
//    }
//
//    if (root->val == subRoot->val)
//    {
//        if (isSameTree(root, subRoot))
//        {
//            return true;
//        }
//    }
//
//    return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
//
//}

//bool issameTree(struct TreeNode* p, struct TreeNode* q)
//{
//    if (p == NULL && q == NULL)
//    {
//        return true;
//    }
//
//    if (p == NULL || q == NULL)
//    {
//        return false;
//    }
//
//    if (p->val != q->val)
//    {
//        return false;
//    }
//
//    return issameTree(p->left, q->right)
//        && issameTree(p->right, q->left);
//}
//
//bool isSymmetric(struct TreeNode* root) {
//    if (root == NULL)
//    {
//        return true;
//    }
//
//    return issameTree(root->left, root->right);
//}

//bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
//    if (p == NULL && q == NULL)
//    {
//        return true;
//    }
//
//    if (p == NULL || q == NULL)
//    {
//        return false;
//    }
//
//    if (p->val != q->val)
//    {
//        return false;
//    }
//
//    return isSameTree(p->left, q->left)
//        && isSameTree(p->right, q->right);
//}

//bool PrevOrdercompare(struct TreeNode* root, int val)
//{
//    if (root == NULL)
//    {
//        return true;
//    }
//
//    if (root->val != val)
//    {
//        return false;
//    }
//
//    return PrevOrdercompare(root->left, val) &&
//        PrevOrdercompare(root->right, val);
//}
//
//bool isUnivalTree(struct TreeNode* root) {
//    if (root == NULL)
//    {
//        return true;
//    }
//    return PrevOrdercompare(root, root->val);
//}

//bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
//    if (p == NULL && q == NULL)
//    {
//        return true;
//    }
//
//    if (p == NULL || q == NULL)
//    {
//        return false;
//    }
//
//    if (p->val != q->val)
//    {
//        return false;
//    }
//
//    return isSameTree(p->left, q->left)
//        && isSameTree(p->right, q->right);
//}
//
//bool isSubtree(struct TreeNode* root, struct TreeNode* subRoot) {
//    if (root == NULL && subRoot == NULL)
//    {
//        return true;
//    }
//
//    if (root == NULL || subRoot == NULL)
//    {
//        return false;
//    }
//
//    if (root->val == subRoot->val)
//    {
//        if (isSameTree(root, subRoot))
//        {
//            return true;
//        }
//    }
//
//    return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
//
//}

//int TreeSize(struct TreeNode* root)
//{
//    return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
//}
//
//void PostOrder(struct TreeNode* root, int* a, int* pi)
//{
//    if (root == NULL)
//    {
//        return;
//    }
//
//    PostOrder(root->left, a, pi);
//    PostOrder(root->right, a, pi);
//    a[(*pi)++] = root->val;
//}
//int* postorderTraversal(struct TreeNode* root, int* returnSize) {
//    *returnSize = TreeSize(root);
//    int* a = (int*)malloc(*returnSize * sizeof(int));
//    int i = 0;
//    PostOrder(root, a, &i);
//    return a;
//}

//int TreeSize(struct TreeNode* root)
//{
//    return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
//}
//
//void InOrder(struct TreeNode* root, int* a, int* pi)
//{
//    if (root == NULL)
//    {
//        return;
//    }
//
//    InOrder(root->left, a, pi);
//    a[(*pi)++] = root->val;
//    InOrder(root->right, a, pi);
//}
//int* inorderTraversal(struct TreeNode* root, int* returnSize) {
//    *returnSize = TreeSize(root);
//    int* a = (int*)malloc(*returnSize * sizeof(int));
//    int i = 0;
//    InOrder(root, a, &i);
//    return a;
//}

//int TreeSize(struct TreeNode* root)
//{
//    return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
//}
//
//void prevorder(struct TreeNode* root, int* a, int* pi)
//{
//    if (root == NULL)
//    {
//        return;
//    }
//
//    a[(*pi)++] = root->val;
//    prevorder(root->left, a, pi);
//    prevorder(root->right, a, pi);
//}
//
//int* preorderTraversal(struct TreeNode* root, int* returnSize) {
//    *returnSize = TreeSize(root);
//    int* a = (int*)malloc(*returnSize * sizeof(int));
//    int i = 0;
//    prevorder(root, a, &i);
//    return a;
//
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//#include<stdbool.h>
//typedef char BTDataType;
//
//typedef struct BinaryTreeNode
//{
//	BTDataType _data;
//	struct BinaryTreeNode* _left;
//	struct BinaryTreeNode* _right;
//}BTNode;
//
//BTNode* BuyBTNode(BTDataType x)
//{
//	BTNode* newNode = (BTNode*)malloc(sizeof(BTNode));
//	newNode->_data = x;
//	newNode->_left = NULL;
//	newNode->_right = NULL;
//	return newNode;
//}
//BTNode* BinaryTreeCreate(BTDataType* a, int* pi)
//{
//	if (a[*pi] == '#')
//	{
//		(*pi)++;
//		return NULL;
//	}
//	BTNode* root = BuyBTNode(a[(*pi)++]);
//	root->_left = BinaryTreeCreate(a, pi);
//	root->_right = BinaryTreeCreate(a, pi);
//	return root;
//}
//void BinaryTreeInOrder(BTNode* root)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//	BinaryTreeInOrder(root->_left);
//	printf("%c ", root->_data);
//	BinaryTreeInOrder(root->_right);
//}
//
//int main()
//{
//	char str[100] = { 0 };
//	scanf("%s", &str);
//	int i = 0;
//	BTNode* root = BinaryTreeCreate(str, &i);
//	BinaryTreeInOrder(root);
//	return 0;
//}