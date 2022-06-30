//typedef int STDataType;
//
//typedef struct Stack
//{
//	STDataType* a;
//	int top;
//	int capacity;
//}ST;
//
//void StackInit(ST* ps);
//void StackDestroy(ST* ps);
//void StackPush(ST* ps, STDataType x);
//void StackPop(ST* ps);
//STDataType StackTop(ST* ps);
//bool StackEmpty(ST* ps);
//int StackSize(ST* ps);
//
//
//void StackInit(ST* ps)
//{
//	assert(ps);
//
//	ps->a = NULL;
//	ps->capacity = 0;
//	ps->top = 0;
//}
//
//void StackDestroy(ST* ps)
//{
//	assert(ps);
//
//	free(ps->a);
//	ps->capacity = 0;
//	ps->top = 0;
//}
//
//void StackPush(ST* ps, STDataType x)
//{
//	assert(ps);
//
//	if (ps->capacity == ps->top)
//	{
//		int NewCapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
//		STDataType* tmp = (STDataType*)realloc(ps->a, sizeof(STDataType) * NewCapacity);
//		if (tmp == NULL)
//		{
//			printf("realloc fail\n");
//			exit(-1);
//		}
//		ps->a = tmp;
//		ps->capacity = NewCapacity;
//	}
//
//	ps->a[ps->top] = x;
//	ps->top++;
//}
//
//bool StackEmpty(ST* ps)
//{
//	assert(ps);
//
//	return ps->top == 0;
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
//STDataType StackTop(ST* ps)
//{
//	assert(ps);
//
//	return ps->a[ps->top - 1];
//}
//
//int StackSize(ST* ps)
//{
//	assert(ps);
//
//	return ps->top;
//}
//
//typedef struct {
//	ST pushst;
//	ST popst;
//} MyQueue;
//
//
//MyQueue* myQueueCreate() {
//	MyQueue* obj = (MyQueue*)malloc(sizeof(MyQueue));
//	StackInit(&obj->pushst);
//	StackInit(&obj->popst);
//	return obj;
//}
//
//void myQueuePush(MyQueue* obj, int x) {
//	StackPush(&obj->pushst, x);
//}
//
//int myQueuePop(MyQueue* obj) {
//	if (StackEmpty(&obj->popst))
//	{
//		while (!StackEmpty(&obj->pushst))
//		{
//			StackPush(&obj->popst, StackTop(&obj->pushst));
//			StackPop(&obj->pushst);
//		}
//	}
//	int top = StackTop(&obj->popst);
//	StackPop(&obj->popst);
//	return top;
//
//}
//
//int myQueuePeek(MyQueue* obj) {
//	if (StackEmpty(&obj->popst))
//	{
//		while (!StackEmpty(&obj->pushst))
//		{
//			StackPush(&obj->popst, StackTop(&obj->pushst));
//			StackPop(&obj->pushst);
//		}
//	}
//	int top = StackTop(&obj->popst);
//	return top;
//}
//
//bool myQueueEmpty(MyQueue* obj) {
//	return StackEmpty(&obj->pushst) && StackEmpty(&obj->popst);
//}
//
//void myQueueFree(MyQueue* obj) {
//	StackDestroy(&obj->pushst);
//	StackDestroy(&obj->popst);
//	free(obj);
//}
//
//typedef struct {
//    int k;
//    int* a;
//    int head;
//    int tail;
//} MyCircularQueue;
//
//
//MyCircularQueue* myCircularQueueCreate(int k) {
//    MyCircularQueue* obj = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
//    obj->k = k;
//    obj->head = 0;
//    obj->tail = 0;
//    obj->a = (int*)malloc(sizeof(int) * (k + 1));
//
//    return obj;
//}
//
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
//    int prev = obj->tail - 1;
//    if (prev == -1)
//    {
//        prev = obj->k;
//    }
//    return obj->a[prev];
//}
//
//void myCircularQueueFree(MyCircularQueue* obj) {
//    free(obj->a);
//    obj->a = NULL;
//    obj->k = 0;
//    obj->head = 0;
//    obj->tail = 0;
//    free(obj);
//}
//


#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool IsCircle(char a[], int n)
{
    int begin = 0;
    int end = n - 1;
    while (begin < end)
    {
        if (a[begin] != a[end])
        {
            return false;
        }
        begin++;
        end--;
    }
    return true;
}

int Insert(char* a, char* b, int i,int lenA, int lenB)
{
    char c[500];
    int m = 0;
    for (int j = i; j < lenA; j++)
    {
        c[m++] = a[j];
    }
    for (int j = 0; j < lenB; j++)
    {
        a[i++] = b[j];
    }
    for (int j = 0; j < m; j++)
    {
        a[i++] = c[j];
    }
    return i;
}

int main()
{
    char a[500];
    char b[101];
    int count = 0;
    gets_s(a, 500);
    gets_s(b, 101);
    int lenA = strlen(a);
    int lenB = strlen(b);
    for (int i = 0; i < lenA+1; i++)
    {
        char c[500];
        memcpy(c, a, lenA+1);
        int len = Insert(c, b, i, lenA, lenB);
        if (IsCircle(c, len))
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
