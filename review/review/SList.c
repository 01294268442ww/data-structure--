#include"SList.h"




//创建新节点
ListNode* BuyListNode(SlTDataType x)
{
	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
	if (newNode == NULL)
	{
		perror("BuyListNode::malloc");
		exit(-1);
	}

	newNode->val = x;
	newNode->next = NULL;
	return newNode;
}



//打印链表
void ListNodePrint(ListNode* plist)
{
	assert(plist);

	ListNode* cur = plist;
	while (cur != NULL)
	{
		printf("%d ", cur->val);
		cur = cur->next;
	}

	printf("\n");
}


//查找节点
ListNode* ListFind(ListNode* plist, SlTDataType x)
{
	assert(plist);

	ListNode* cur = plist;

	while (cur != NULL)
	{
		if (cur->val == x)
		{
			return cur;
		}
		cur = cur->next;
	}

	return NULL;
}


//尾插
void ListNodePushBack(ListNode** pplist, SlTDataType x)
{
	ListNode* newNode = BuyListNode(x);

	if (*pplist == NULL)
	{
		*pplist = newNode;
	}
	else
	{
		ListNode* tail = *pplist;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		tail->next = newNode;
	}
}



//头插
void ListNodePushFront(ListNode** pplist, SlTDataType x)
{
	ListNode* newNode = BuyListNode(x);
	newNode->next = *pplist;
	*pplist = newNode;
}


//尾删
void ListNodePopBack(ListNode** pplist)
{
	//没有节点
	//一个节点
	//多个节点

	if (*pplist == NULL)
	{
		return;
	}
	else if ((*pplist)->next == NULL)
	{
		free(*pplist);
		*pplist = NULL;
	}
	else
	{
		ListNode* tail = *pplist;
		ListNode* prev = NULL;
		while (tail != NULL)
		{
			prev = tail;
			tail = tail->next;

		}
		free(tail);
		tail = NULL;
		prev->next = NULL;

	}
}



//头删
void ListNodePopFront(ListNode** pplist)
{
	if (*pplist == NULL)
	{
		return;
	}
	else
	{
		ListNode* next = (*pplist)->next;
		free(*pplist);

		*pplist = next;
	}
}



//任意位置插入
void ListInsertAfter(ListNode* pos, SlTDataType x)
{
	assert(pos);

	ListNode* newNode = BuyListNode(x);

	newNode->next = pos->next;
	pos->next = newNode;
}



//链表销毁
void ListNodeDestroy(ListNode* plist)
{
	assert(plist);

	ListNode* cur = plist;
	while (cur)
	{
		ListNode* temp = cur;
		cur = cur->next;
		free(temp);
	}
}