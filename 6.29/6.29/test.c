#include"Queue.h"


//typedef int QDataType;
//
//typedef struct QNode
//{
//	struct QNode* next;
//	QDataType data;
//}QNode;
//
//typedef struct Queue
//{
//	QNode* head;
//	QNode* tail;
//}Queue;
//
//
//void QueueInit(Queue* pq)
//{
//	assert(pq);
//
//	pq->head = pq->tail = NULL;
//}
//
//void QueueDestroy(Queue* pq)
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
//
//	QNode* cur = pq->head;
//	int size = 0;
//	while (cur)
//	{
//		size++;
//		cur = cur->next;
//	}
//	return size;
//}
//
//void QueuePush(Queue* pq, QDataType x)
//{
//	assert(pq);
//
//	QNode* newnode = (QNode*)malloc(sizeof(QNode));
//	if (newnode == NULL)
//	{
//		printf("malloc fail\n");
//		exit(-1);
//	}
//	newnode->data = x;
//	newnode->next = NULL;
//
//	if (pq->head == NULL)
//	{
//		pq->head = pq->tail = newnode;
//	}
//	else
//	{
//		pq->tail->next = newnode;
//		pq->tail = newnode;
//	}
//}
//
//void QueuePop(Queue* pq)
//{
//	assert(pq);
//	assert(!QueueEmpty(pq));
//
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
//	Queue* empty = &obj->q1;
//	Queue* nonEmpty = &obj->q2;
//	if (!QueueEmpty(&obj->q1))
//	{
//		empty = &obj->q2;
//		nonEmpty = &obj->q1;
//	}
//	while (QueueSize(nonEmpty) > 1)
//	{
//		QueuePush(empty, QueueFront(nonEmpty));
//		QueuePop(nonEmpty);
//	}
//	int top = QueueFront(nonEmpty);
//	QueuePop(nonEmpty);
//	return top;
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
//	QueueDestroy(&obj->q1);
//	QueueDestroy(&obj->q2);
//	free(obj);
//}
//

//
//void test()
//{
//	Queue q;
//	QueueInit(&q);
//	QueuePush(&q, 1);
//
//}
//
//int main()
//{
//	test();
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//    int A = 0; int B1 = 0; int B2 = 0;
//    int C = 0; int D = 0;
//    int sum1 = 0; int sum2 = 0;
//    int sum3 = 0; int sum4 = 0;
//    scanf("%d %d %d %d", &sum1, &sum2, &sum3, &sum4);
//    A = (sum1 + sum3) / 2;
//    B1 = (sum2 + sum4) / 2;
//    B2 = (sum3 - sum1) / 2;
//    C = (sum4 - sum2) / 2;
//    if (B1 != B2)
//    {
//        printf("No\n");
//        return 0;
//    }
//    else if (A - B1 != sum1 || A + B1 != sum3)
//    {
//        printf("No\n");
//        return 0;
//    }
//    else if (B1 - C != sum2 || B1 + C != sum4)
//    {
//        printf("No\n");
//        return 0;
//    }
//    printf("%d %d %d\n", A, B1, C);
//    return 0;
//}



//#include<stdio.h>
//int main()
//{
//    int M = 0;
//    int N = 0;
//    char array[33];
//    int i = 0;
//    scanf_s("%d%d", &M, &N);
//    if (N < 9)
//    {
//        while (M)
//        {
//            int mod = M % N;
//            M = M / N;
//            array[i] = (char)mod;
//            i++;
//        }
//        for (int j = i; j >= 0; j--)
//        {
//            printf("%c", array[j]);
//        }
//    }
//    else
//    {
//        while (M)
//        {
//            int mod = M % N;
//            if (mod > 9)
//            {
//                array[i] = (char)(mod - 10) + 'A';
//                i++;
//            }
//            else
//            {
//                array[i] = (char)mod;
//                i++;
//            }
//            M = M / N;
//        }
//        for (int j = i; j >= 0; j--)
//        {
//            printf("%c", array[j]);
//        }
//    }
//    return 0;
//}

#include<stdio.h>
int main()
{
    int M = 0;
    int N = 0;
    char array[33];
    int i = 0;
    scanf_s("%d%d", &M, &N);
    int m = M;
        if (N < 9)
        {
            if (M != 0)
            {
                while (M)
                {
                    int mod = M % N;
                    M = M / N;
                    array[i] = mod + '0';
                    i++;
                }
                for (int j = i - 1; j >= 0; j--)
                {
                    printf("%c", array[j]);
                }
            }
            else
            {
                printf("0");
            }
        }
        else
        {
            if (M != 0)
            {
                while (M)
                {
                    int mod = M % N;
                    if (mod > 9)
                    {
                        array[i] = (mod - 10) + 'A';
                        i++;
                    }
                    else
                    {
                        array[i] = mod + '0';
                        i++;
                    }
                    M = M / N;
                }
                for (int j = i - 1; j >= 0; j--)
                {
                    printf("%c", array[j]);
                }
            }
            else
            {
                printf("0");
            }

        }
    return 0;
}

