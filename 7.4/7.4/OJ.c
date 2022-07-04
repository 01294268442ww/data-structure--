#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
////
////bool _isUnvalTree(struct TreeNode* root, int val)
////{
////    if (root == NULL)
////    {
////        return true;
////    }
////
////    if (root->val != val)
////    {
////        return false;
////    }
////
////    return _isUnvalTree(root->left, val) && _isUnvalTree(root->right, val);
////}
////
////bool isUnivalTree(struct TreeNode* root) {
////    if (root == NULL)
////    {
////        return true;
////    }
////    return  _isUnvalTree(root, root->val);
////}
//
////
////bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
////    if (p == NULL && q == NULL)
////    {
////        return true;
////    }
////
////    if (p == NULL || q == NULL)
////    {
////        return false;
////    }
////
////    if (p->val != q->val)
////    {
////        return false;
////    }
////
////    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
////}
//
////bool isSameTree(struct TreeNode* p, struct TreeNode* q)
////{
////    if (p == NULL && q == NULL)
////    {
////        return true;
////    }
////
////    if (p == NULL || q == NULL)
////    {
////        return false;
////    }
////
////    if (p->val != q->val)
////    {
////        return false;
////    }
////
////    return isSameTree(p->left, q->right) && isSameTree(p->right, q->left);
////}
////
////bool isSymmetric(struct TreeNode* root) {
////    if (root == NULL)
////    {
////        return true;
////    }
////    return isSameTree(root->left, root->right);
////}
//
///**
// * Definition for a binary tree node.
// * struct TreeNode {
// *     int val;
// *     struct TreeNode *left;
// *     struct TreeNode *right;
// * };
// */
// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     struct TreeNode *left;
//  *     struct TreeNode *right;
//  * };
//  */
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
//    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
//
//}
//
//bool isSubtree(struct TreeNode* root, struct TreeNode* subRoot) {
//
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
//
//}/**
// * Definition for a binary tree node.
// * struct TreeNode {
// *     int val;
// *     struct TreeNode *left;
// *     struct TreeNode *right;
// * };
// */
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
//    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
//
//}
//
//bool isSubtree(struct TreeNode* root, struct TreeNode* subRoot) {
//
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
//
//}/**
// * Definition for a binary tree node.
// * struct TreeNode {
// *     int val;
// *     struct TreeNode *left;
// *     struct TreeNode *right;
// * };
// */
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
//    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
//
//}
//
//bool isSubtree(struct TreeNode* root, struct TreeNode* subRoot) {
//
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
//
//}/**
// * Definition for a binary tree node.
// * struct TreeNode {
// *     int val;
// *     struct TreeNode *left;
// *     struct TreeNode *right;
// * };
// */
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
//    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
//
//}
//
//bool isSubtree(struct TreeNode* root, struct TreeNode* subRoot) {
//
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
//
//}/**
// * Definition for a binary tree node.
// * struct TreeNode {
// *     int val;
// *     struct TreeNode *left;
// *     struct TreeNode *right;
// * };
// */
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
//    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
//
//}
//
//bool isSubtree(struct TreeNode* root, struct TreeNode* subRoot) {
//
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
//
//}/**
// * Definition for a binary tree node.
// * struct TreeNode {
// *     int val;
// *     struct TreeNode *left;
// *     struct TreeNode *right;
// * };
// */
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
//    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
//
//}
//
//bool isSubtree(struct TreeNode* root, struct TreeNode* subRoot) {
//
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
//
//}/**
// * Definition for a binary tree node.
// * struct TreeNode {
// *     int val;
// *     struct TreeNode *left;
// *     struct TreeNode *right;
// * };
// */
//
//bool isSameTree(struct TreeNode* p, struct TreeNode* q){
//    if(p == NULL && q==NULL)
//    {
//        return true;
//    }
//
//    if(p == NULL || q==NULL)
//    {
//        return false;
//    }
//    
//    if(p->val != q->val)
//    {
//        return false;
//    }
//
//    return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
//
//}
//
//bool isSubtree(struct TreeNode* root, struct TreeNode* subRoot){
//    
//     if(root == NULL && subRoot == NULL)
//    {
//        return true;
//    }
//
//    if(root == NULL || subRoot == NULL)
//    {
//        return false;
//    }
//
//    if(root->val == subRoot->val)
//    {
//        if(isSameTree(root,subRoot))
//        {
//            return true;
//        }
//    }
//
//    return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
//
//
//}

//
//int TreeSize(struct TreeNode* root)
//{
//    return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
//}
//
//void PrevOrder(struct TreeNode* root, int* a, int* pi)
//{
//    if (root == NULL)
//    {
//        return;
//    }
//    a[(*pi)++] = root->val;
//    PrevOrder(root->left, a, pi);
//    PrevOrder(root->right, a, pi);
//}
//
//int* preorderTraversal(struct TreeNode* root, int* returnSize) {
//    *returnSize = TreeSize(root);
//    int* a = (int*)malloc(*returnSize * sizeof(int));
//    int i = 0;
//    PrevOrder(root, a, &i);
//    return a;
//}

//
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
//    InOrder(root->left, a, pi);
//    a[(*pi)++] = root->val;
//    InOrder(root->right, a, pi);
//}
//
//int* inorderTraversal(struct TreeNode* root, int* returnSize) {
//    *returnSize = TreeSize(root);
//    int* a = (int*)malloc(*returnSize * sizeof(int));
//    int i = 0;
//    InOrder(root, a, &i);
//    return a;
//}

//
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
//    PostOrder(root->left, a, pi);
//    PostOrder(root->right, a, pi);
//    a[(*pi)++] = root->val;
//}
//
//int* postorderTraversal(struct TreeNode* root, int* returnSize) {
//    *returnSize = TreeSize(root);
//    int* a = (int*)malloc(*returnSize * sizeof(int));
//    int i = 0;
//    PostOrder(root, a, &i);
//    return a;
//}
//
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
//
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//void ShellSort(int* a, int n)
//{
//    int gap = n - 1;
//    while (gap > 0)
//    {
//        gap /= 3 + 1;
//        for (int i = 0; i < n - gap; i++)
//        {
//            int end = i;
//            int tmp = a[end + gap];
//            while (end >= 0)
//            {
//                if (tmp < a[end])
//                {
//                    a[end + gap] = a[end];
//                    end -= gap;
//                }
//            }
//            a[end + gap] = tmp;
//        }
//    }
//}
//
//void ShellSort(string* a, int n)
//{
//    int gap = n - 1;
//    while (gap > 0)
//    {
//        gap /= 3 + 1;
//        for (int i = 0; i < n - gap; i++)
//        {
//            int end = i;
//            string tmp = a[end + gap];
//            while (end >= 0)
//            {
//                if (tmp < a[end])
//                {
//                    a[end + gap] = a[end];
//                    end -= gap;
//                }
//            }
//            a[end + gap] = tmp;
//        }
//    }
//}
//
//int main()
//{
//    int n = 0;
//    cin >> n;
//    string* s = new string[n];
//    string* s1 = new string[n];
//    for (int i = 0; i < n; i++)
//    {
//        cin >> s[i];
//        s1[i] = s[i];
//    }
//    int* a = (int*)malloc(sizeof(int) * n);
//    int* b = (int*)malloc(sizeof(int) * n);
//    for (int i = 0; i < n; i++)
//    {
//        a[i] = s[i].length();
//        b[i] = s[i].length();
//    }
//    ShellSort(a, n);
//    bool length = true;
//    for (int i = 0; i < n; i++)
//    {
//        if (a[i] != b[i])
//        {
//            length = false;
//            break;
//        }
//    }
//
//    bool lex = true;
//    ShellSort(s1, n);
//    for (int i = 0; i < n; i++)
//    {
//        if (s1[i] != s[i])
//        {
//            lex = false;
//            break;
//        }
//    }
//    if (lex && length)
//    {
//        cout << "both" << endl;
//    }
//    if (!lex && !length)
//    {
//        cout << "none" << endl;
//    }
//    if (lex && !length)
//    {
//        cout << "lexicographically" << endl;
//    }
//    if (!lex && length)
//    {
//        cout << "lengths" << endl;
//    }
//    return 0;
//}

