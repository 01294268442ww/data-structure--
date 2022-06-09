#include<stdio.h>
#include<stdlib.h>

//bool isUnivalTree(struct TreeNode* root) {
//    if (root == NULL)
//    {
//        return true;
//    }
//
//    if (root->left && root->left->val != root->val)
//    {
//        return false;
//    }
//
//    if (root->right && root->right->val != root->val)
//    {
//        return false;
//    }
//
//    return isUnivalTree(root->left) && isUnivalTree(root->right);
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
//    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
//
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
//    return isSameTree(p->left, q->right) && isSameTree(p->right, q->left);
//
//}
//
//bool isSymmetric(struct TreeNode* root) {
//    if (root == NULL)
//    {
//        return true;
//    }
//
//    return isSameTree(root->left, root->right);
//}

//int TreeSize(struct TreeNode* root)
//{
//    return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
//}
//
//void Preorder(struct TreeNode* root, int* a, int* pi)
//{
//    if (root == NULL)
//    {
//        return;
//    }
//
//    a[(*pi)++] = root->val;
//    Preorder(root->left, a, pi);
//    Preorder(root->right, a, pi);
//}
//
//int* preorderTraversal(struct TreeNode* root, int* returnSize) {
//    if (root == NULL)
//    {
//        *returnSize = 0;
//        return NULL;
//    }
//
//    *returnSize = TreeSize(root);
//    int i = 0;
//    int* a = (int*)malloc((*returnSize) * sizeof(int));
//    Preorder(root, a, &i);
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
//
//int* inorderTraversal(struct TreeNode* root, int* returnSize) {
//    if (root == NULL)
//    {
//        *returnSize = 0;
//        return NULL;
//    }
//
//    *returnSize = TreeSize(root);
//    int* a = (int*)malloc((*returnSize) * sizeof(int));
//    int i = 0;
//    InOrder(root, a, &i);
//    return a;
//}

//int TreeSize(struct TreeNode* root)
//{
//    return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
//}
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
//
//int* postorderTraversal(struct TreeNode* root, int* returnSize) {
//    if (root == NULL)
//    {
//        *returnSize = 0;
//        return NULL;
//    }
//
//    *returnSize = TreeSize(root);
//    int* a = (int*)malloc((*returnSize) * sizeof(int));
//    int i = 0;
//    PostOrder(root, a, &i);
//    return a;
////}

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
//}
int main()
{

}