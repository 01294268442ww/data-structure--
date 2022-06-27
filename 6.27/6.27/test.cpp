#include<iostream>
using namespace std;



//class Partition {
//public:
//    ListNode* partition(ListNode* pHead, int x) {
//        if (pHead == NULL)
//        {
//            return NULL;
//        }
//
//        ListNode* greaterHead = (ListNode*)malloc(sizeof(ListNode));
//        ListNode* greaterTail = greaterHead;
//
//        ListNode* lessHead = (ListNode*)malloc(sizeof(ListNode));
//        ListNode* lessTail = lessHead;
//
//        ListNode* cur = pHead;
//        while (cur)
//        {
//            ListNode* next = cur->next;
//            if (cur->val < x)
//            {
//                lessTail->next = cur;
//                lessTail = cur;
//                cur = next;
//            }
//            else
//            {
//                greaterTail->next = cur;
//                greaterTail = cur;
//                cur = next;
//            }
//        }
//        lessTail->next = greaterHead->next;
//        greaterTail->next = NULL;
//        ListNode* ret = lessHead->next;
//        free(lessHead);
//        return ret;
//    }
//};

//struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB) {
//    if (headA == NULL || headB == NULL)
//    {
//        return NULL;
//    }
//
//    struct ListNode* n1 = headA;
//    struct ListNode* n2 = headB;
//
//    int len1 = 0;
//    int len2 = 0;
//    while (n1)
//    {
//        n1 = n1->next;
//        len1++;
//    }
//
//    while (n2)
//    {
//        n2 = n2->next;
//        len2++;
//    }
//
//    struct ListNode* less = headA;
//    struct ListNode* great = headB;
//    if (len1 > len2)
//    {
//        less = headB;
//        great = headA;
//    }
//    int gap = abs(len1 - len2);
//    while (gap--)
//    {
//        great = great->next;
//
//    }
//
//    while (great && less)
//    {
//        if (great == less)
//        {
//            return great;
//        }
//        great = great->next;
//        less = less->next;
//    }
//    return NULL;
//}

//bool hasCycle(struct ListNode* head) {
//    if (head == NULL)
//    {
//        return false;
//    }
//
//    struct ListNode* fast = head;
//    struct ListNode* slow = head;
//    while (fast && fast->next)
//    {
//        fast = fast->next->next;
//        slow = slow->next;
//        if (fast == slow)
//        {
//            return true;
//        }
//
//    }
//    return false;
//}

//struct ListNode* detectCycle(struct ListNode* head) {
//    if (head == NULL)
//    {
//        return NULL;
//    }
//
//    struct ListNode* fast = head;
//    struct ListNode* slow = head;
//    while (fast && fast->next)
//    {
//        fast = fast->next->next;
//        slow = slow->next;
//        if (fast == slow)
//        {
//            struct ListNode* meet = fast;
//            struct ListNode* cur = head;
//            while (cur != meet)
//            {
//                cur = cur->next;
//                meet = meet->next;
//            }
//            return meet;
//        }
//    }
//    return NULL;
//}

//struct Node* copyRandomList(struct Node* head) {
//    if (head == NULL)
//    {
//        return NULL;
//    }
//
//    //复制节点
//    struct Node* cur = head;
//    while (cur)
//    {
//        struct Node* copy = (struct Node*)malloc(sizeof(struct Node));
//        struct Node* next = cur->next;
//        copy->val = cur->val;
//        cur->next = copy;
//        copy->next = next;
//        cur = next;
//    }
//
//    //处理random
//    cur = head;
//    while (cur)
//    {
//        struct Node* copy = cur->next;
//        struct Node* next = copy->next;
//        if (cur->random == NULL)
//        {
//            copy->random = NULL;
//        }
//        else
//        {
//            copy->random = cur->random->next;
//        }
//        cur = next;
//    }
//    //解链
//    struct Node* copyHead = (struct Node*)malloc(sizeof(struct Node));
//    struct Node* copyTail = copyHead;
//    cur = head;
//    while (cur)
//    {
//        struct Node* copy = cur->next;
//        struct Node* next = copy->next;
//        copyTail->next = copy;
//        copyTail = copy;
//        cur = next;
//    }
//    struct Node* ret = copyHead->next;
//    free(copyHead);
//    return ret;
//}

//#include<stdio.h>
//#include<string.h>
//void ReverseArray(char* a, int begin, int end)
//{
//    while (begin < end)
//    {
//        char tmp = a[begin];
//        a[begin] = a[end];
//        a[end] = tmp;
//        begin++;
//        end--;
//    }
//}
//
//int main()
//{
//    char a[100];
//    gets_s(a);
//    int len = strlen(a);
//    //整体倒置
//    ReverseArray(a, 0, len - 1);
//    //将每个单词倒置
//    int count = 0;
//    for (int i = 0; i < len; i++)
//    {
//        if (a[i] == ' ')
//        {
//            ReverseArray(a, i - count, i-1);
//            count = 0;
//        }
//        else
//        {
//             count++;
//        }
//       
//    }
//    printf("%s", a);
//    return 0;
//}

#include<stdio.h>
#include<string.h>
void reverse(char* left, char* right) {
    while (left < right) {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}
int main1() {
    char arr[100] = { 0 };
    gets_s(arr);

    int len = strlen(arr);
    char* left = arr;
    char* right = arr + len - 1;
    reverse(left, right);

    char* start = arr;
    char* end = arr;
    while (*end != '\0') {
        while (*end != ' ' && *end != '\0') {
            end++;
        }
        reverse(start, end - 1);
        start = end + 1;
        if (*end != '\0') {
            end++;
        }
    }
    printf("%s\n", arr);

    return 0;
}

//#include<stdio.h>
//int main() {
//    int n = 0;
//    scanf_s("%d", &n);
//    int* a = (int*)malloc(sizeof(int) * (n + 1));
//    int i = 0;
//    int count = 0;
//    while (i < n) {
//        //非递减
//        if (a[i] < a[i + 1]) {
//            while (i < n && a[i] <= a[i + 1]) {
//                i++;
//            }
//            count++;
//            i++;
//        }
//        else if (a[i] == a[i + 1]) {
//            i++;
//        }//非递增
//        else {
//            while (i < n && a[i] >= a[i + 1]) {
//                i++;
//            }
//            count++;
//            i++;
//        }
//    }
//    printf("%d\n", count);
//    return 0;
//}


#include<stdio.h>
int main() 
{
    int n = 0;
    scanf("%d", &n);
    int* a = (int*)malloc(sizeof(int) * (n + 1));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int i = 0;
    int count = 0;
    while (i < n) 
    {
        //非递减
        if (a[i] < a[i + 1]) 
        {
            while (i < n && a[i] <= a[i + 1]) 
            {
                i++;
            }
            count++;
            i++;
        }
        else if (a[i] == a[i + 1]) 
        {
            i++;
        }//非递增
        else {
            while (i < n && a[i] >= a[i + 1]) 
            {
                i++;
            }
            count++;
            i++;
        }
    }
    printf("%d\n", count);
    return 0;
}

