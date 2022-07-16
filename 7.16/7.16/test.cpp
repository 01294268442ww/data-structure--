//#define ADD(x, y) ((x)+(y))

//
//#include<stdio.h>
//#include<assert.h>
//#include<stdlib.h>
//#include<stdbool.h>
//
//// ��ͷ+˫��+ѭ��������ɾ���ʵ��
//typedef int LTDataType;
//typedef struct ListNode
//{
//	LTDataType _data;
//	struct ListNode* _next;
//	struct ListNode* _prev;
//}ListNode;
//
//
////�ж�����Ϊ��
//bool ListEmpty(ListNode* phead);
////�����½ڵ�
//ListNode* BuyListNode(LTDataType x);
//// �������������ͷ���.
//ListNode* ListCreate();
//// ˫����������
//void ListDestory(ListNode* pHead);
//// ˫�������ӡ
//void ListPrint(ListNode* pHead);
//// ˫������β��
//void ListPushBack(ListNode* pHead, LTDataType x);
//// ˫������βɾ
//void ListPopBack(ListNode* pHead);
//// ˫������ͷ��
//void ListPushFront(ListNode* pHead, LTDataType x);
//// ˫������ͷɾ
//void ListPopFront(ListNode* pHead);
//// ˫���������
//ListNode* ListFind(ListNode* pHead, LTDataType x);
//// ˫��������pos��ǰ����в���
//void ListInsert(ListNode* pos, LTDataType x);
//// ˫������ɾ��posλ�õĽڵ�
//void ListErase(ListNode* pos);
//
////ListNode.c
//
//
//ListNode* ListCreate()
//{
//	ListNode* phead = BuyListNode(-1);
//	phead->_next = phead;
//	phead->_prev = phead;
//
//	return phead;
//}
//
//ListNode* BuyListNode(LTDataType x)
//{
//	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
//
//	if (newNode == NULL)
//	{
//		perror("BuyListNode    malloc");
//		exit(-1);
//	}
//
//	newNode->_data = x;
//	newNode->_next = NULL;
//	newNode->_prev = NULL;
//
//	return newNode;
//}
//
//bool ListEmpty(ListNode* phead)
//{
//	assert(phead);
//
//	return phead->_next == phead;
//}
//
//void ListPrint(ListNode* pHead)
//{
//	assert(pHead);
//	assert(!ListEmpty(pHead));
//
//	ListNode* cur = pHead->_next;
//	while (cur != pHead)
//	{
//		printf("%d  ", cur->_data);
//		cur = cur->_next;
//	}
//
//}
//
//void ListInsert(ListNode* pos, LTDataType x)
//{
//	assert(pos);
//
//	ListNode* prev = pos->_prev;
//	ListNode* newNode = BuyListNode(x);
//
//	prev->_next = newNode;
//	newNode->_prev = prev;
//	newNode->_next = pos;
//	pos->_prev = newNode;
//
//}
////β��
//void ListPushBack(ListNode* pHead, LTDataType x)
//{
//	assert(pHead);
//
//	ListInsert(pHead, x);
//}
//
////ͷ��
//void ListPushFront(ListNode* pHead, LTDataType x)
//{
//	assert(pHead);
//
//	ListInsert(pHead->_next, x);
//}
//
//void ListErase(ListNode* pos)
//{
//	assert(pos);
//	assert(!ListEmpty(pos));
//
//	ListNode* prev = pos->_prev;
//	ListNode* next = pos->_next;
//
//	free(pos);
//
//	prev->_next = next;
//	next->_prev = prev;
//
//}
////βɾ
//void ListPopBack(ListNode* pHead)
//{
//	assert(pHead);
//
//	ListErase(pHead->_prev);
//}
//
////ͷɾ
//void ListPopFront(ListNode* pHead)
//{
//	assert(pHead);
//
//	ListErase(pHead->_next);
//}
//
//
//ListNode* ListFind(ListNode* pHead, LTDataType x)
//{
//	assert(pHead);
//
//	ListNode* cur = pHead->_next;
//
//	while (cur != pHead)
//	{
//		if (cur->_data == x)
//		{
//			return cur;
//		}
//		cur = cur->_next;
//	}
//	return NULL;
//}
//
//
//void ListDestory(ListNode* pHead)
//{
//	assert(pHead);
//
//	ListNode* cur = pHead->_next;
//
//	while (cur != pHead)
//	{
//
//		ListNode* next = cur->_next;
//		free(cur);
//		cur = NULL;
//		cur = next;
//	}
//}
//
//int main()
//{
//	ListNode* L = ListCreate();
//	int m = 0, n = 0;
//	scanf_s("%d %d", &n, &m);
//	for (int i = 1; i <= n; i++)
//	{
//		ListPushBack(L, i);
//	}
//	int count = 1;
//	while (n > 0)
//	{
//		count++;
//		if (count == m)
//		{
//			ListNode* Find = ListFind(L, m);
//			count = 1;
//			ListErase(Find);
//		}
//		n--;
//	}
//	ListPrint(L);
//	ListDestory(L);
//	return 0;
//}
//



//
//typedef int LTDataType;
//typedef struct ListNode
//{
//	LTDataType _data;
//	struct ListNode* _next;
//}ListNode;
//
//ListNode* BuyListNode(LTDataType x)
//{
//	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
//	if (newNode == NULL)
//	{
//		printf("malloc fail\n");
//		exit(-1);
//	}
//	newNode->_data = x;
//	newNode->_next = NULL;
//
//	return newNode;
//}
//
//ListNode* ListInit()
//{
//	ListNode* newnode = BuyListNode(-1);
//	newnode->_next = newnode;
//
//	return newnode;
//}
//
//bool ListEmpty(ListNode* phead)
//{
//	assert(phead);
//
//	return phead->_next != phead;
//}
//
//void ListPrint(ListNode * phead)
//{
//	assert(phead);
//	ListNode* cur = phead->_next;
//	while (cur != phead)
//	{
//		printf("%d ", cur->_data);
//		cur = cur->_next;
//	}
//}
//
//
////β��
//void ListPushBack(ListNode * pHead, LTDataType x)
//{
//	assert(pHead);
//	ListNode* newnode = BuyListNode(x);
//	ListNode* cur = pHead->_next;
//	while (cur->_next != pHead)
//	{
//		cur = cur->_next;
//	}
//	cur->_next = newnode;
//	newnode->_next = pHead;
//}
//
////ɾ��posλ�õ�ֵ
//void ListErase(ListNode * phead, ListNode * pos)
//{
//	assert(pos);
//	assert(!ListEmpty(phead));
//	ListNode* prev = phead->_next;
//	while (prev->_next != pos)
//	{
//		prev = prev->_next;
//	}
//	prev->_next = pos->_next;
//	free(pos);
//}
//
//ListNode* ListFind(ListNode * pHead, LTDataType x)
//{
//	assert(pHead);
//	assert(!ListEmpty(pHead));
//
//	ListNode* cur = pHead->_next;
//	while (cur!=pHead)
//	{
//		if (cur->_data == x)
//		{
//			return cur;
//		}
//	}
//	return NULL;
//}
//
//
//void ListDestory(ListNode * pHead)
//{
//	assert(pHead);
//
//	ListNode* cur = pHead->_next;
//	while (cur != pHead)
//	{
//		ListNode* next = cur->_next;
//		free(cur);
//		cur = next;
//	}
//}
//
//int main()
//{
//	int m = 0, n = 0;
//	scanf_s("%d %d", &n, &m);
//	ListNode* L = ListInit();
//	for (int i = 1; i <= n; i++)
//	{
//		ListPushBack(L, i);
//	}
//	int count = 1;
//	ListNode* prev = NULL;
//	ListNode* cur = L->_next;
//	while (cur->_next != L)
//	{
//		cur = cur->_next;
//	}
//	prev
//	while (n > 1)
//	{
//
//	}
//}
//

//
//#include<stdio.h>
//#include<assert.h>
//#include<stdlib.h>
//#include<stdbool.h>
//
//typedef int LTDataType;
//typedef struct ListNode
//{
//	LTDataType _data;
//	struct ListNode* _next;
//}ListNode;
//
//ListNode* BuyListNode(LTDataType x)
//{
//	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
//	if (newNode == NULL)
//	{
//		printf("malloc fail\n");
//		exit(-1);
//	}
//	newNode->_data = x;
//	newNode->_next = NULL;
//
//	return newNode;
//}
//
//ListNode* Joseph(ListNode* head,int n, int m)
//{
//	int count = 1;
//	ListNode* cur = head;
//	ListNode* prev = NULL;
//	while (cur->_next != head)
//	{
//		cur = cur->_next;
//	}
//	prev = cur;
//	cur = head;
//	while (cur->_next != cur)
//	{
//		if (count == m)
//		{
//			count = 1;
//			prev->_next = cur->_next;
//			free(cur);
//			continue;
//		}
//		cur = cur->_next;
//		prev = cur;
//		count++;
//	}
//	return cur;
//}
//


//
//#include<stdio.h>
//#include<assert.h>
//#include<stdlib.h>
//
//typedef int SlTDataType;
//
//typedef struct ListNode
//{
//	SlTDataType val;
//	struct ListNode* next;
//}ListNode;
//
//
////�����½ڵ�
//ListNode* BuyListNode(SlTDataType x)
//{
//	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
//	if (newNode == NULL)
//	{
//		perror("BuyListNode::malloc");
//		exit(-1);
//	}
//
//	newNode->val = x;
//	newNode->next = NULL;
//	return newNode;
//}
//
//
//
////��ӡ����
//void ListNodePrint(ListNode* plist)
//{
//	assert(plist);
//
//	ListNode* cur = plist;
//	while (cur != NULL)
//	{
//		printf("%d ", cur->val);
//		cur = cur->next;
//	}
//
//	printf("\n");
//}
//
//
////���ҽڵ�
//ListNode* ListFind(ListNode* plist, SlTDataType x)
//{
//	assert(plist);
//
//	ListNode* cur = plist;
//
//	while (cur != NULL)
//	{
//		if (cur->val == x)
//		{
//			return cur;
//		}
//		cur = cur->next;
//	}
//
//	return NULL;
//}
//
//
////β��
//void ListNodePushBack(ListNode** pplist, SlTDataType x)
//{
//	ListNode* newNode = BuyListNode(x);
//
//	if (*pplist == NULL)
//	{
//		*pplist = newNode;
//	}
//	else
//	{
//		ListNode* tail = *pplist;
//		while (tail->next != NULL)
//		{
//			tail = tail->next;
//		}
//
//		tail->next = newNode;
//	}
//}
//
//
//
////ͷ��
//void ListNodePushFront(ListNode** pplist, SlTDataType x)
//{
//	ListNode* newNode = BuyListNode(x);
//	newNode->next = *pplist;
//	*pplist = newNode;
//}
//
//
////βɾ
//void ListNodePopBack(ListNode** pplist)
//{
//	//û�нڵ�
//	//һ���ڵ�
//	//����ڵ�
//
//	if (*pplist == NULL)
//	{
//		return;
//	}
//	else if ((*pplist)->next == NULL)
//	{
//		free(*pplist);
//		*pplist = NULL;
//	}
//	else
//	{
//		ListNode* tail = *pplist;
//		ListNode* prev = NULL;
//		while (tail != NULL)
//		{
//			prev = tail;
//			tail = tail->next;
//
//		}
//		free(tail);
//		tail = NULL;
//		prev->next = NULL;
//
//	}
//}
//
//
//
////ͷɾ
//void ListNodePopFront(ListNode** pplist)
//{
//	if (*pplist == NULL)
//	{
//		return;
//	}
//	else
//	{
//		ListNode* next = (*pplist)->next;
//		free(*pplist);
//
//		*pplist = next;
//	}
//}
//
//
//
////����λ�ò���
//void ListInsertAfter(ListNode* pos, SlTDataType x)
//{
//	assert(pos);
//
//	ListNode* newNode = BuyListNode(x);
//
//	newNode->next = pos->next;
//	pos->next = newNode;
//}
//
//
//
////��������
//void ListNodeDestroy(ListNode* plist)
//{
//	assert(plist);
//
//	ListNode* cur = plist;
//	while (cur)
//	{
//		ListNode* temp = cur;
//		cur = cur->next;
//		free(temp);
//	}
//}
//
//ListNode* Joseph(ListNode* head,int n, int m)
//{
//	int count = 1;
//	ListNode* cur = head;
//	ListNode* prev = NULL;
//	while (cur->next != head)
//	{
//		cur = cur->next;
//	}
//	prev = cur;
//	cur = head;
//	while (cur->next != cur)
//	{
//		if (count == m)
//		{
//			count = 1;
//			prev->next = cur->next;
//			free(cur);
//			continue;
//		}
//		cur = cur->next;
//		prev = cur;
//		count++;
//	}
//	return cur;
//}
//
//
//void FindTail(ListNode** pplist)
//{
//	ListNode* tail = *pplist;
//	ListNode* prev = NULL;
//	while (tail != NULL)
//	{
//		prev = tail;
//		tail = tail->next;
//
//	}
//}
//
//int main()
//{
//	int m = 0, n = 0;
//	scanf_s("%d %d", &n, &m);
//	ListNode* head = NULL;
//	for (int i = 1; i <= n; i++)
//	{
//		ListNodePushBack(&head, i);
//	}
//
//	ListNode* ret = Joseph(head, n, m);
//	printf("%d", ret->val);
//	return 0;
//}


////ListNode.h
//#include<stdio.h>
//#include<assert.h>
//#include<stdlib.h>
//#include<stdbool.h>
//
//// ��ͷ+˫��+ѭ��������ɾ���ʵ��
//typedef int LTDataType;
//typedef struct ListNode
//{
//	LTDataType _data;
//	struct ListNode* _next;
//	struct ListNode* _prev;
//}ListNode;
//ListNode* BuyListNode(LTDataType x)
//{
//	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
//
//	if (newNode == NULL)
//	{
//		perror("BuyListNode    malloc");
//		exit(-1);
//	}
//
//	newNode->_data = x;
//	newNode->_next = NULL;
//	newNode->_prev = NULL;
//
//	return newNode;
//}
//
//ListNode* ListCreate()
//{
//	ListNode* phead = BuyListNode(-1);
//	phead->_next = phead;
//	phead->_prev = phead;
//
//	return phead;
//}
//
//
//
//bool ListEmpty(ListNode* phead)
//{
//	assert(phead);
//
//	return phead->_next == phead;
//}
//
//void ListPrint(ListNode* pHead)
//{
//	assert(pHead);
//	assert(!ListEmpty(pHead));
//
//	ListNode* cur = pHead->_next;
//	while (cur != pHead)
//	{
//		printf("%d  ", cur->_data);
//		cur = cur->_next;
//	}
//
//}
//
//void ListInsert(ListNode* pos, LTDataType x)
//{
//	assert(pos);
//
//	ListNode* prev = pos->_prev;
//	ListNode* newNode = BuyListNode(x);
//
//	prev->_next = newNode;
//	newNode->_prev = prev;
//	newNode->_next = pos;
//	pos->_prev = newNode;
//
//}
////β��
//void ListPushBack(ListNode* pHead, LTDataType x)
//{
//	assert(pHead);
//
//	ListInsert(pHead, x);
//}
//
////ͷ��
//void ListPushFront(ListNode* pHead, LTDataType x)
//{
//	assert(pHead);
//
//	ListInsert(pHead->_next, x);
//}
//
//void ListErase(ListNode* pos)
//{
//	assert(pos);
//	assert(!ListEmpty(pos));
//
//	ListNode* prev = pos->_prev;
//	ListNode* next = pos->_next;
//
//	free(pos);
//
//	prev->_next = next;
//	next->_prev = prev;
//
//}
////βɾ
//void ListPopBack(ListNode* pHead)
//{
//	assert(pHead);
//
//	ListErase(pHead->_prev);
//}
//
////ͷɾ
//void ListPopFront(ListNode* pHead)
//{
//	assert(pHead);
//
//	ListErase(pHead->_next);
//}
//
//
//ListNode* ListFind(ListNode* pHead, LTDataType x)
//{
//	assert(pHead);
//
//	ListNode* cur = pHead->_next;
//
//	while (cur != pHead)
//	{
//		if (cur->_data == x)
//		{
//			return cur;
//		}
//
//		cur = cur->_next;
//	}
//	return NULL;
//}
//
//
//void ListDestory(ListNode* pHead)
//{
//	assert(pHead);
//
//	ListNode* cur = pHead->_next;
//
//	while (cur != pHead)
//	{
//
//		ListNode* next = cur->_next;
//		free(cur);
//		cur = NULL;
//		cur = next;
//	}
//}
//
////ListNode.c
//
// 
//ListNode* ListCreate()
//{
//	ListNode* phead = BuyListNode(-1);
//	phead->_next = phead;
//	phead->_prev = phead;
// 
//	return phead;
//}
// 
//ListNode* BuyListNode(LTDataType x)
//{
//	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
// 
//	if (newNode == NULL)
//	{
//		perror("BuyListNode    malloc");
//		exit(-1);
//	}
// 
//	newNode->_data = x;
//	newNode->_next = NULL;
//	newNode->_prev = NULL;
// 
//	return newNode;
//}
// 
//bool ListEmpty(ListNode* phead)
//{
//	assert(phead);
// 
//	return phead->_next == phead;
//}
// 
//void ListPrint(ListNode* pHead)
//{
//	assert(pHead);
//	assert(!ListEmpty(pHead));
// 
//	ListNode* cur = pHead->_next;
//	while (cur != pHead)
//	{
//		printf("%d  ", cur->_data);
//		cur = cur->_next;
//	}
// 
//}
// 
//void ListInsert(ListNode* pos, LTDataType x)
//{
//	assert(pos);
// 
//	ListNode* prev = pos->_prev;
//	ListNode* newNode = BuyListNode(x);
// 
//	prev->_next = newNode;
//	newNode->_prev = prev;
//	newNode->_next = pos;
//	pos->_prev = newNode;
// 
//}
////β��
//void ListPushBack(ListNode* pHead, LTDataType x)
//{
//	assert(pHead);
// 
//	ListInsert(pHead, x);
//}
// 
////ͷ��
//void ListPushFront(ListNode* pHead, LTDataType x)
//{
//	assert(pHead);
// 
//	ListInsert(pHead->_next, x);
//}
// 
//void ListErase(ListNode* pos)
//{
//	assert(pos);
//	assert(!ListEmpty(pos));
// 
//	ListNode* prev = pos->_prev;
//	ListNode* next = pos->_next;
// 
//	free(pos);
// 
//	prev->_next = next;
//	next->_prev = prev;
// 
//}
////βɾ
//void ListPopBack(ListNode* pHead)
//{
//	assert(pHead);
// 
//	ListErase(pHead->_prev);
//}
// 
////ͷɾ
//void ListPopFront(ListNode* pHead)
//{
//	assert(pHead);
// 
//	ListErase(pHead->_next);
//}
// 
// 
//ListNode* ListFind(ListNode* pHead, LTDataType x)
//{
//	assert(pHead);
// 
//	ListNode* cur = pHead->_next;
// 
//	while (cur!=pHead)
//	{
//		if (cur->_data == x)
//		{
//			return cur;
//		}
// 
//		cur = cur->_next;
//	}
//	return NULL;
//}
// 
// 
//void ListDestory(ListNode* pHead)
//{
//	assert(pHead);
// 
//	ListNode* cur = pHead->_next;
// 
//	while (cur != pHead)
//	{
// 
//		ListNode* next = cur->_next;
//		free(cur);
//		cur = NULL;
//		cur = next;
//	}
//}

//
//#include<stdio.h>
//#include<assert.h>
//#include<stdlib.h>
//#include<stdbool.h>
//
//// ��ͷ+˫��+ѭ��������ɾ���ʵ��
//typedef int LTDataType;
//typedef struct ListNode
//{
//	LTDataType _data;
//	struct ListNode* _next;
//	struct ListNode* _prev;
//}ListNode;
//
//
//ListNode* BuyListNode(LTDataType x)
//{
//	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
//
//	if (newNode == NULL)
//	{
//		perror("BuyListNode    malloc");
//		exit(-1);
//	}
//
//	newNode->_data = x;
//	newNode->_next = NULL;
//	newNode->_prev = NULL;
//
//	return newNode;
//}
//
//ListNode* ListCreate()
//{
//	ListNode* phead = BuyListNode(-1);
//	phead->_next = phead;
//	phead->_prev = phead;
//
//	return phead;
//}
//
//
//
//bool ListEmpty(ListNode* phead)
//{
//	assert(phead);
//
//	return phead->_next == phead;
//}
//
//void ListPrint(ListNode* pHead)
//{
//	assert(pHead);
//	assert(!ListEmpty(pHead));
//
//	ListNode* cur = pHead->_next;
//	while (cur != pHead)
//	{
//		printf("%d  ", cur->_data);
//		cur = cur->_next;
//	}
//
//}
//
//void ListInsert(ListNode* pos, LTDataType x)
//{
//	assert(pos);
//
//	ListNode* prev = pos->_prev;
//	ListNode* newNode = BuyListNode(x);
//
//	prev->_next = newNode;
//	newNode->_prev = prev;
//	newNode->_next = pos;
//	pos->_prev = newNode;
//
//}
////β��
//void ListPushBack(ListNode* pHead, LTDataType x)
//{
//	assert(pHead);
//
//	ListInsert(pHead, x);
//}
//
////ͷ��
//void ListPushFront(ListNode* pHead, LTDataType x)
//{
//	assert(pHead);
//
//	ListInsert(pHead->_next, x);
//}
//
//void ListErase(ListNode* pos)
//{
//	assert(pos);
//	assert(!ListEmpty(pos));
//
//	ListNode* prev = pos->_prev;
//	ListNode* next = pos->_next;
//
//	free(pos);
//
//	prev->_next = next;
//	next->_prev = prev;
//
//}
////βɾ
//void ListPopBack(ListNode* pHead)
//{
//	assert(pHead);
//
//	ListErase(pHead->_prev);
//}
//
////ͷɾ
//void ListPopFront(ListNode* pHead)
//{
//	assert(pHead);
//
//	ListErase(pHead->_next);
//}
//
//
//ListNode* ListFind(ListNode* pHead, LTDataType x)
//{
//	assert(pHead);
//
//	ListNode* cur = pHead->_next;
//
//	while (cur != pHead)
//	{
//		if (cur->_data == x)
//		{
//			return cur;
//		}
//
//		cur = cur->_next;
//	}
//	return NULL;
//}
//
//
//void ListDestory(ListNode* pHead)
//{
//	assert(pHead);
//
//	ListNode* cur = pHead->_next;
//
//	while (cur != pHead)
//	{
//
//		ListNode* next = cur->_next;
//		free(cur);
//		cur = NULL;
//		cur = next;
//	}
//}
//
//ListNode* Joseph(ListNode* head,int n, int m)
//{
//	int count = 1;
//	ListNode* cur = head->_next;
//	ListNode* prev = cur->_prev;
//	while (cur->_next != cur)
//	{
//		if (count == m)
//		{
//			count = 1;
//			prev->_next = cur->_next;
//			free(cur);
//			continue;
//		}
//		cur = cur->_next;
//		prev = cur;
//		count++;
//	}
//	return cur;
//}
//
//int main()
//{
//	int n = 0, m = 0;
//	scanf_s("%d %d", &n, &m);
//	ListNode* L = ListCreate();
//	for (int i = 1; i <= n; i++)
//	{
//		ListPushBack(L, i);
//	}
//
//	ListNode* ret = Joseph(L, n, m);
//	printf("%d", ret->_data);
//	return 0;
//}

//
//#include<stdio.h>
//#include<string.h>
//
//void fun(const char* fname,const char* st)
//{
//	FILE* myf;
//	int i;
//	myf = fopen(fname, "w");
//	for (i = 0; i < strlen(st); i++) fputc(st[i], myf);
//	fclose(myf);
//} 
//int main()
//{
//	fun("test.txt", "new world");
//	fun("test.txt", "hello,");
//	return 0;
//}
//
//int trailingZeroes(int n) {
//    int ans = 0;
//    while (n >= 5)
//    {
//        n /= 5;
//        ans += n;
//    }
//    return ans;
//}

//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    double n = 0;
//    cin >> n;
//    double remander = n - (int)n;
//    if (remander >= 0.5)
//    {
//        cout << (int)n + 1 << endl;
//    }
//    else
//    {
//        cout << (int)n << endl;
//    }
//    return 0;
//}

//
//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int main()
//{
//    string str;
//    cin >> str;
//    int hash[256] = { 0 };
//    int count = 0;
//    for (int i = 0; i < str.length(); i++)
//    {
//        hash[str[i]]++;
//        count = max(count, hash[str[i]]);
//    }
//
//    while (count)
//    {
//        for (int i = 0; i < 256; i++)
//        {
//            if (hash[i] == count)
//                cout << (char)i;
//        }
//        count--;
//    }
//    return 0;
//}
//
//#include <iostream>
//#include <vector>
//#include <iomanip>
//using namespace std;
//
//int main()
//{
//    int n = 0, m = 0, count_P = 0, count_N = 0;
//    double sum = 0;
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> m;
//        if (m > 0)
//        {
//            sum += m;
//            count_P++;
//        }
//        if (m < 0)
//        {
//            count_N++;
//        }
//    }
//    cout << count_N << " ";
//    double average = sum / count_P;
//    if (count_P == 0)
//        printf("0.0");
//    else
//        printf("%.1lf", average);
//    return 0;
//}


