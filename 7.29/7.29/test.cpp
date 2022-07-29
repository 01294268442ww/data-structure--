#include<iostream>
using namespace std;
//struct ListNode* removeZeroSumSublists(struct ListNode* head) {
//    struct ListNode* phead = (struct ListNode*)malloc(sizeof(struct ListNode));
//    phead->next = head;
//    struct ListNode* prev = phead;
//    while (prev)
//    {
//        int sum = 0;
//        struct ListNode* cur = prev->next;
//        while (cur)
//        {
//            sum += cur->val;
//            if (sum == 0)
//            {
//                prev->next = cur->next;
//                struct ListNode* del = prev->next;
//                while (del != cur->next)
//                {
//                    struct ListNode* next = del->next;
//                    free(del);
//                    del = next;
//                }
//            }
//            cur = cur->next;
//        }
//        prev = prev->next;
//    }
//    struct ListNode* ret = phead->next;
//    free(phead);
//    return ret;
//}

//
//struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
//    struct ListNode* cur1 = l1;
//    struct ListNode* cur2 = l2;
//    int len1 = 0;
//    int len2 = 0;
//    while (cur1)
//    {
//        cur1 = cur1->next;
//        len1++;
//    }
//
//    while (cur2)
//    {
//        cur2 = cur2->next;
//        len2++;
//    }
//
//    cur1 = l1; cur2 = l2;
//    int len = len1 > len2 ? len1 + 1 : len2 + 1;
//    int* sum = (int*)malloc(sizeof(int) * len);
//    int j = 0;
//    int next = 0;
//    while (cur1 && cur2)
//    {
//        sum[j] = cur1->val + cur2->val + next;
//        next = 0;
//        if (sum[j] > 9)
//        {
//            sum[j] -= 10;
//            next = 1;
//        }
//
//        cur1 = cur1->next;
//        cur2 = cur2->next;
//        j++;
//    }
//
//    while (cur1)
//    {
//        sum[j] = cur1->val + next;
//        next = 0;
//        if (sum[j] > 9)
//        {
//            sum[j] -= 10;
//            next = 1;
//        }
//        cur1 = cur1->next;
//        j++;
//    }
//
//    while (cur2)
//    {
//        sum[j] = cur2->val + next;
//        next = 0;
//        if (sum[j] > 9)
//        {
//            sum[j] -= 10;
//            next = 1;
//        }
//        cur2 = cur2->next;
//        j++;
//    }
//    if (next)
//    {
//        sum[j++] = 1;
//    }
//    if (j < len)
//    {
//        len--;
//    }
//
//    struct ListNode* newHead = NULL;
//    for (int i = len - 1; i >= 0; i--)
//    {
//        struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
//        newNode->val = sum[i];
//        newNode->next = newHead;
//        newHead = newNode;
//    }
//    free(sum);
//    return newHead;
//}
//
//typedef char STDataType;
//typedef struct Stack
//{
//	STDataType* a;
//	int top;
//	int capacity;
//}ST;
//
//
//bool StackEmpty(ST* ps)
//{
//	assert(ps);
//
//	return ps->top == 0;
//}
//
//STDataType StackTop(ST* ps)
//{
//	assert(ps);
//	assert(!StackEmpty(ps));
//
//	return ps->a[ps->top - 1];
//}
//
//void StackDestroy(ST* ps)
//{
//	assert(ps);
//
//	free(ps->a);
//
//	ps->capacity = ps->top = 0;
//	ps->a = NULL;
//}
//
//
//void StackPush(ST* ps, STDataType x)
//{
//	assert(ps);
//
//	if (ps->capacity == ps->top)
//	{
//		int newCapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
//		STDataType* tmp = (STDataType*)realloc(ps->a, sizeof(STDataType) * newCapacity);
//		if (tmp == NULL)
//		{
//			printf("realloc error\n");
//			exit(-1);
//		}
//		ps->a = tmp;
//		ps->capacity = newCapacity;
//	}
//
//	ps->a[ps->top] = x;
//	ps->top++;
//}
//
//void StackPop(ST* ps)
//{
//	assert(ps);
//	assert(!StackEmpty(ps));
//
//	ps->top--;
//}
//
//
//int StackSize(ST* ps)
//{
//	assert(ps);
//
//	return ps->top;
//}
//
//int maxDepth(char* s) {
//	ST st;
//	StackInit(&st);
//	int maxdep = 0;
//	int curdep = 0;
//	int start = 0;
//	int len = strlen(s);
//	for (int i = 0; i < len; i++)
//	{
//		if (s[i] == '(')
//		{
//			StackPush(&st, s[i]);
//			maxdep = maxdep > StackSize(&st) ? maxdep : StackSize(&st);
//		}
//		else if (s[i] == ')')
//		{
//			StackPop(&st);
//		}
//	}
//	StackDestroy(&st);
//	return maxdep;
//}


