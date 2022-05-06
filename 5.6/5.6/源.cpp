#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int compareFun(void* e1, void* e2)
//{
//    return *(int*)e1 - *(int*)e2;
//}
//
//struct ListNode* mergeKLists(struct ListNode** lists, int listsSize) {
//    int vat[10001] = { 0 };
//    int count = 0;
//    for (int i = 0; i < listsSize; i++)
//    {
//        struct ListNode* cur = lists[i];
//        while (cur)
//        {
//            vat[count] = cur->val;
//            cur = cur->next;
//            count++;
//        }
//    }
//
//    qsort(vat, count, sizeof(int), compareFun);
//
//    struct ListNode* newHead = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* tail = newHead;
//    for (int i = 0; i < count; i++)
//    {
//        struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
//
//        newNode->val = vat[i];
//        tail->next = newNode;
//        tail = tail->next;
//    }
//    tail->next = NULL;
//    return newHead->next;
//}
//
//struct ListNode* swapPairs(struct ListNode* head) {
//    if (head == NULL)
//    {
//        return NULL;
//    }
//    if (head->next == NULL)
//    {
//        return head;
//    }
//    struct ListNode* temp = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* dummyHead = temp;
//    dummyHead->next = head;
//    while (temp->next != NULL && temp->next->next != NULL)
//    {
//        struct ListNode* n1 = temp->next;
//        struct ListNode* n2 = temp->next->next;
//        temp->next = n2;
//        n1->next = n2->next;
//        n2->next = n1;
//        temp = n1;
//    }
//    return dummyHead->next;
//}

//struct ListNode* deleteDuplicates(struct ListNode* head) {
//    if (head == NULL)
//    {
//        return NULL;
//    }
//    struct ListNode* cur = head;
//    struct ListNode* prev = NULL;
//    while (cur->next)
//    {
//        struct ListNode* next = cur->next;
//        if (cur->val == next->val)
//        {
//            if (prev == NULL)
//            {
//                free(cur);
//                head = next;
//                cur = next;
//            }
//            else
//            {
//                free(cur);
//                prev->next = next;
//                cur = next;
//            }
//        }
//        else
//        {
//            prev = cur;
//            cur = next;
//        }
//    }
//    return head;
//}

