#include<stdio.h>

//struct ListNode* removeElements(struct ListNode* head, int val) {
//    struct ListNode* cur = head;
//    struct ListNode* prev = NULL;
//    while (cur)
//    {
//        struct ListNode* next = cur->next;
//        if (cur->val == val)
//        {
//            if (prev == NULL)
//            {
//                head = cur->next;
//                free(cur);
//                cur = next;
//            }
//            else
//            {
//                prev->next = next;
//                free(cur);
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

//struct ListNode* reverseList(struct ListNode* head) {
//    if (head == NULL)
//    {
//        return head;
//    }
//
//    struct ListNode* newhead = NULL;
//    struct ListNode* cur = head;
//    while (cur)
//    {
//        struct ListNode* next = cur->next;
//        cur->next = newhead;
//        newhead = cur;
//        cur = next;
//    }
//    return newhead;
//}

//struct ListNode* middleNode(struct ListNode* head) {
//    struct ListNode* fast = head;
//    struct ListNode* slow = head;
//
//    while (fast && fast->next)
//    {
//        fast = fast->next->next;
//        slow = slow->next;
//    }
//    return slow;
//}

//struct ListNode* FindKthToTail(struct ListNode* pListHead, int k) {
//    struct ListNode* fast = pListHead;
//    while (k--)
//    {
//        if (fast == NULL)
//        {
//            return NULL;
//        }
//        fast = fast->next;
//    }
//    struct ListNode* slow = pListHead;
//    while (fast)
//    {
//        fast = fast->next;
//        slow = slow->next;
//    }
//    return slow;
//}

//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
//    if (list1 == NULL)
//    {
//        return list2;
//    }
//    if (list2 == NULL)
//    {
//        return list1;
//    }
//
//    struct ListNode* n1 = list1;
//    struct ListNode* n2 = list2;
//    struct ListNode* phead = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* tail = phead;
//
//    while (n1 && n2)
//    {
//        if (n1->val < n2->val)
//        {
//            tail->next = n1;
//            tail = tail->next;
//            n1 = n1->next;
//        }
//        else
//        {
//            tail->next = n2;
//            tail = tail->next;
//            n2 = n2->next;
//        }
//    }
//    if (n1)
//    {
//        tail->next = n1;
//    }
//    if (n2)
//    {
//        tail->next = n2;
////    }
//
//    struct ListNode* ret = phead->next;
//    free(phead);
//    phead = NULL;
//    return ret;
//
//}

//class Partition {
//public:
//    ListNode* partition(ListNode* pHead, int x) {
//        if (pHead == NULL)
//        {
//            return NULL;
//        }
//
//        struct ListNode* Less = (struct ListNode*)malloc(sizeof(struct ListNode));
//        struct ListNode* Biger = (struct ListNode*)malloc(sizeof(struct ListNode));
//        struct ListNode* LessTail = Less;
//        struct ListNode* BigerTail = Biger;
//        struct ListNode* cur = pHead;
//        while (cur)
//        {
//            if (cur->val < x)
//            {
//                LessTail->next = cur;
//                LessTail = LessTail->next;
//            }
//            else
//            {
//                BigerTail->next = cur;
//                BigerTail = BigerTail->next;
//            }
//            cur = cur->next;
//        }
//        BigerTail->next = NULL;
//        LessTail->next = Biger->next;
//        struct ListNode* ret = Less->next;
//        free(Less);
//        free(Biger);
//        Less = Biger = NULL;
//        return ret;
//    }
//};

/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};*/
/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};*/
//class PalindromeList {
//public:
//    bool chkPalindrome(ListNode* A) {
//        ListNode* mid = intermediatenode(A);
//        ListNode* newhead = change((mid));
//        ListNode* cur = A;
//        while (newhead)
//        {
//            if (cur->val != newhead->val)
//            {
//                return false;
//            }
//            newhead = newhead->next;
//            cur = cur->next;
//        }
//
//        return true;
//
//    }
//    //寻找中间节点
//    ListNode* intermediatenode(ListNode* B)
//    {
//        ListNode* fast = B;
//        ListNode* slow = B;
//        while (fast && fast->next)
//        {
//            fast = fast->next->next;
//            slow = slow->next;
//        }
//        return slow;
//    }
//
//    //翻转链表
//    ListNode* change(ListNode* C)
//    {
//        ListNode* newhead = NULL;
//        ListNode* cur = C;
//        while (cur)
//        {
//            ListNode* next = cur->next;
//            cur->next = newhead;
//            newhead = cur;
//            cur = next;
//        }
//        return newhead;
//
//    }
//
//};

//struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB) {
//    struct ListNode* n1 = headA;
//    struct ListNode* n2 = headB;
//    int len1 = 0;
//    int len2 = 0;
//    while (n1)
//    {
//        n1 = n1->next;
//        len1++;
//    }
//    while (n2)
//    {
//        n2 = n2->next;
//        len2++;
//    }
//    struct ListNode* Less = headA;
//    struct ListNode* Long = headB;
//    if (len1 > len2)
//    {
//        Less = headB;
//        Long = headA;
//    }
//    int sub = abs(len1 - len2);
//    while (sub--)
//    {
//        Long = Long->next;
//    }
//    while (Long && Less)
//    {
//        if (Less == Long)
//        {
//            return Less;
//        }
//        Long = Long->next;
//        Less = Less->next;
//    }
//    return NULL;
//}

//bool hasCycle(struct ListNode* head) {
//    if (head == NULL)
//    {
//        return NULL;
//    }
//    struct ListNode* fast = head->next;
//    struct ListNode* slow = head;
//
//    while (fast && fast->next)
//    {
//        if (fast == slow)
//        {
//            return true;
//        }
//        fast = fast->next->next;
//        slow = slow->next;
//    }
//
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
//
//    while (fast && fast->next)
//    {
//        fast = fast->next->next;
//        slow = slow->next;
//
//        if (fast == slow)
//        {
//            struct ListNode* meet = fast;
//            struct ListNode* cur = head;
//            while (meet != cur)
//            {
//                meet = meet->next;
//                cur = cur->next;
//            }
//            return meet;
//        }
//
//    }
//    return NULL;
//}

/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     struct Node *next;
 *     struct Node *random;
 * };
 */

//struct Node* copyRandomList(struct Node* head) {
//    if (head == NULL)
//    {
//        return head;
//    }
//    struct Node* cur = head;
//    //链接节点
//    while (cur)
//    {
//        struct Node* copy = (struct Node*)malloc(sizeof(struct Node));
//        struct Node* next = cur->next;
//        copy->val = cur->val;
//        cur->next = copy;
//        copy->next = next;
//        cur = next;
//    }
//    //处理random
//    cur = head;
//    while (cur)
//    {
//        struct Node* copy = cur->next;
//        struct Node* next = copy->next;
//        if (cur->random == NULL)
//        {
//            copy->random = NULL;
//
//        }
//        else
//        {
//            copy->random = cur->random->next;
//        }
//
//        cur = next;
//    }
//
//    //尾插形成新链
//    cur = head;
//    struct Node* newHead = (struct Node*)malloc(sizeof(struct Node));
//    struct Node* tail = newHead;
//    while (cur)
//    {
//        struct Node* copy = cur->next;
//        struct Node* next = copy->next;
//        tail->next = copy;
//        tail = copy;
//        cur = next;
//    }
//    struct Node* ret = newHead->next;
//    free(newHead);
//    return ret;
//
//}


//typedef char STDataType;
//
//typedef struct Stack
//{
//    STDataType* a;
//    int top;
//    int capacity;
//}ST;
//
//void StackInit(ST* ps);
//void StackDestory(ST* ps);
//void StackPush(ST* ps, STDataType x);
//void StackPop(ST* ps);
//STDataType StackTop(ST* ps);
//bool StackEmpty(ST* ps);
//int StackSize(ST* ps);
//
//
//
//void StackInit(ST* ps)
//{
//    assert(ps);
//
//    ps->a = NULL;
//    ps->capacity = 0;
//    ps->top = 0;
//}
//
//void StackDestory(ST* ps)
//{
//    assert(ps);
//
//    free(ps->a);
//    ps->capacity = 0;
//    ps->top = 0;
//}
//
//
//
//void StackPush(ST* ps, STDataType x)
//{
//    assert(ps);
//    if (ps->top == ps->capacity)
//    {
//        int newCapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
//        STDataType* tmp = (STDataType*)realloc(ps->a, sizeof(STDataType) * newCapacity);
//        if (tmp == NULL)
//        {
//            printf("realloc fail\n");
//            exit(-1);
//        }
//
//        ps->a = tmp;
//        ps->capacity = newCapacity;
//    }
//
//    ps->a[ps->top] = x;
//    ps->top++;
//}
//void StackPop(ST* ps)
//{
//    assert(ps);
//    assert(!StackEmpty(ps));
//
//    ps->top--;
//}
//
//STDataType StackTop(ST* ps)
//{
//    assert(ps);
//    assert(!StackEmpty(ps));
//
//    return ps->a[ps->top - 1];
//}
//
//bool StackEmpty(ST* ps)
//{
//    assert(ps);
//
//    return ps->top == 0;
//}
//
//int StackSize(ST* ps)
//{
//    assert(ps);
//
//    return ps->top;
//}
//
//bool isValid(char* s) {
//    if (s == NULL)
//    {
//        return true;
//    }
//
//    ST st;
//    StackInit(&st);
//    while (*s)
//    {
//        if ((*s == '(') || (*s == '{') || (*s == '['))
//        {
//            StackPush(&st, *s);
//            s++;
//        }
//        else
//        {
//            if (StackEmpty(&st))
//            {
//                StackDestory(&st);
//                return false;
//            }
//            char top = StackTop(&st);
//            if ((top == '(' && *s != ')') || (top == '{' && *s != '}') || (top == '[' && *s != ']'))
//            {
//                StackDestory(&st);
//                return false;
//            }
//            else
//            {
//                s++;
//                StackPop(&st);
//            }
//
//        }
//    }
//    if (StackSize(&st) > 0)
//    {
//        StackDestory(&st);
//        return false;
//    }
//    StackDestory(&st);
//    return true;
//}

//typedef int QDataType;
//
//typedef struct QueueNode
//{
//	struct QueueNode* next;
//	QDataType data;
//}QNode;
//
//typedef struct Queue
//{
//	QNode* head;
//	QNode* tail;
//}Queue;
//
//void QueueInit(Queue* pq);
//void QueueDestory(Queue* pq);
//void QueuePush(Queue* pq, QDataType x);
//void QueuePop(Queue* pq);
//QDataType QueueFront(Queue* pq);
//QDataType QueueBack(Queue* pq);
//bool QueueEmpty(Queue* pq);
//int QueueSize(Queue* pq);
//
//
//void QueueInit(Queue* pq)
//{
//	assert(pq);
//	pq->head = pq->tail = NULL;
//}
//
//void QueueDestory(Queue* pq)
//{
//	assert(pq);
//
//	QNode* cur = pq->head;
//	while (cur)
//	{
//		QNode* next = cur->next;
//		free(cur);
//		cur = next;
//	}
//	pq->head = pq->tail = NULL;
//}
//
//void QueuePush(Queue* pq, QDataType x)
//{
//	assert(pq);
//
//	QNode* newNode = (QNode*)malloc(sizeof(QNode));
//	if (newNode == NULL)
//	{
//		printf("malloc fail");
//		exit(-1);
//	}
//	newNode->data = x;
//	newNode->next = NULL;
//
//	if (pq->tail == NULL)
//	{
//		pq->head = pq->tail = newNode;
//	}
//	else
//	{
//		pq->tail->next = newNode;
//		pq->tail = newNode;
//	}
//}
//
//void QueuePop(Queue* pq)
//{
//	assert(pq);
//	assert(!QueueEmpty(pq));
//	if (pq->head->next == NULL)
//	{
//		free(pq->head);
//		pq->head = pq->tail = NULL;
//	}
//	else
//	{
//		QNode* next = pq->head->next;
//		free(pq->head);
//		pq->head = next;
//	}
//}
//
//QDataType QueueFront(Queue* pq)
//{
//	assert(pq);
//	assert(!QueueEmpty(pq));
//
//	return pq->head->data;
//}
//
//QDataType QueueBack(Queue* pq)
//{
//	assert(pq);
//	assert(!QueueEmpty(pq));
//
//	return pq->tail->data;
//}
//
//bool QueueEmpty(Queue* pq)
//{
//	assert(pq);
//
//	return pq->head == NULL;
//}
//
//int QueueSize(Queue* pq)
//{
//	assert(pq);
//	int size = 0;
//
//	QNode* cur = pq->head;
//	while (cur)
//	{
//		size++;
//		cur = cur->next;
//	}
//	return size;
//}
//
//
//typedef struct {
//	Queue q1;
//	Queue q2;
//} MyStack;
//
//
//MyStack* myStackCreate() {
//	MyStack* obj = (MyStack*)malloc(sizeof(MyStack));
//	QueueInit(&obj->q1);
//	QueueInit(&obj->q2);
//	return obj;
//}
//
//void myStackPush(MyStack* obj, int x) {
//	if (!QueueEmpty(&obj->q1))
//	{
//		QueuePush(&obj->q1, x);
//	}
//	else
//	{
//		QueuePush(&obj->q2, x);
//	}
//}
//
//int myStackPop(MyStack* obj) {
//	Queue* Empty = &obj->q1;
//	Queue* NoEmpty = &obj->q2;
//	if (QueueEmpty(&obj->q2))
//	{
//		NoEmpty = &obj->q1;
//		Empty = &obj->q2;
//	}
//	while (QueueSize(NoEmpty) > 1)
//	{
//		QueuePush(Empty, QueueFront(NoEmpty));
//		QueuePop(NoEmpty);
//	}
//	int front = QueueFront(NoEmpty);
//	QueuePop(NoEmpty);
//	return front;
//}
//
//int myStackTop(MyStack* obj) {
//	if (!QueueEmpty(&obj->q1))
//	{
//		return QueueBack(&obj->q1);
//	}
//	else
//	{
//		return QueueBack(&obj->q2);
//	}
//}
//
//bool myStackEmpty(MyStack* obj) {
//	return QueueEmpty(&obj->q1) && QueueEmpty(&obj->q2);
//}
//
//void myStackFree(MyStack* obj) {
//	QueueDestory(&obj->q1);
//	QueueDestory(&obj->q2);
//	free(obj);
//}

//
//typedef int STDataType;
//
//typedef struct Stack
//{
//    STDataType* a;
//    int top;
//    int capacity;
//}ST;
//
//void StackInit(ST* ps);
//void StackDestory(ST* ps);
//void StackPush(ST* ps, STDataType x);
//void StackPop(ST* ps);
//STDataType StackTop(ST* ps);
//bool StackEmpty(ST* ps);
//int StackSize(ST* ps);
//
//
//void StackInit(ST* ps)
//{
//    assert(ps);
//
//    ps->a = NULL;
//    ps->capacity = 0;
//    ps->top = 0;
//}
//
//void StackDestory(ST* ps)
//{
//    assert(ps);
//
//    free(ps->a);
//    ps->capacity = 0;
//    ps->top = 0;
//}
//
//
//
//void StackPush(ST* ps, STDataType x)
//{
//    assert(ps);
//    if (ps->top == ps->capacity)
//    {
//        int newCapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
//        STDataType* tmp = (STDataType*)realloc(ps->a, sizeof(STDataType) * newCapacity);
//        if (tmp == NULL)
//        {
//            printf("realloc fail\n");
//            exit(-1);
//        }
//
//        ps->a = tmp;
//        ps->capacity = newCapacity;
//    }
//
//    ps->a[ps->top] = x;
//    ps->top++;
//}
//void StackPop(ST* ps)
//{
//    assert(ps);
//    assert(!StackEmpty(ps));
//
//    ps->top--;
//}
//
//STDataType StackTop(ST* ps)
//{
//    assert(ps);
//    assert(!StackEmpty(ps));
//
//    return ps->a[ps->top - 1];
//}
//
//bool StackEmpty(ST* ps)
//{
//    assert(ps);
//
//    return ps->top == 0;
//}
//
//int StackSize(ST* ps)
//{
//    assert(ps);
//
//    return ps->top;
//}
//
//
//
//typedef struct {
//    ST PushQueue;
//    ST PopQueue;
//} MyQueue;
//
//
//MyQueue* myQueueCreate() {
//    MyQueue* obj = (MyQueue*)malloc(sizeof(MyQueue));
//    StackInit(&obj->PushQueue);
//    StackInit(&obj->PopQueue);
//    return obj;
//}
//
//void myQueuePush(MyQueue* obj, int x) {
//    StackPush(&obj->PushQueue, x);
//
//}
//
//int myQueuePop(MyQueue* obj) {
//    if (StackEmpty(&obj->PopQueue))
//    {
//        while (!StackEmpty(&obj->PushQueue))
//        {
//            StackPush(&obj->PopQueue, StackTop(&obj->PushQueue));
//            StackPop(&obj->PushQueue);
//        }
//    }
//
//    int top = StackTop(&obj->PopQueue);
//    StackPop(&obj->PopQueue);
//    return top;
//}
//
//int myQueuePeek(MyQueue* obj) {
//    if (StackEmpty(&obj->PopQueue))
//    {
//        while (!StackEmpty(&obj->PushQueue))
//        {
//            StackPush(&obj->PopQueue, StackTop(&obj->PushQueue));
//            StackPop(&obj->PushQueue);
//        }
//    }
//
//    return StackTop(&obj->PopQueue);
//}
//
//bool myQueueEmpty(MyQueue* obj) {
//    return StackEmpty(&obj->PushQueue) && StackEmpty(&obj->PopQueue);
//}
//
//void myQueueFree(MyQueue* obj) {
//    StackDestory(&obj->PushQueue);
//    StackDestory(&obj->PopQueue);
//    free(obj);
//}
//
//
//typedef struct {
//    int* a;
//    int k;
//    int head;
//    int tail;
//} MyCircularQueue;
//
//
//MyCircularQueue* myCircularQueueCreate(int k) {
//    MyCircularQueue* obj = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
//    obj->a = (int*)malloc(sizeof(int) * (k + 1));
//    obj->head = obj->tail = 0;
//    obj->k = k;
//    return obj;
//}
//bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
//    return obj->head == obj->tail;
//}
//
//bool myCircularQueueIsFull(MyCircularQueue* obj) {
//    int next = obj->tail + 1;
//    if (next == obj->k + 1)
//    {
//        next = 0;
//    }
//    return next == obj->head;
//}
//
//bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
//    if (myCircularQueueIsFull(obj))
//    {
//        return false;
//    }
//    obj->a[obj->tail] = value;
//    obj->tail++;
//    if (obj->tail == obj->k + 1)
//    {
//        obj->tail = 0;
//    }
//    return true;
//}
//
//bool myCircularQueueDeQueue(MyCircularQueue* obj) {
//    if (myCircularQueueIsEmpty(obj))
//    {
//        return false;
//    }
//    obj->head++;
//
//    if (obj->head == obj->k + 1)
//    {
//        obj->head = 0;
//    }
//    return true;
//}
//
//int myCircularQueueFront(MyCircularQueue* obj) {
//    if (myCircularQueueIsEmpty(obj))
//    {
//        return -1;
//    }
//    return obj->a[obj->head];
//}
//
//int myCircularQueueRear(MyCircularQueue* obj) {
//    if (myCircularQueueIsEmpty(obj))
//    {
//        return -1;
//    }
//
//    int tailprev = obj->tail - 1;
//    if (tailprev == -1)
//    {
//        tailprev = obj->k;
//    }
//    return obj->a[tailprev];
//}
//
//void myCircularQueueFree(MyCircularQueue* obj) {
//    free(obj->a);
//    obj->head = obj->tail = obj->k = 0;
//    free(obj);
//}


