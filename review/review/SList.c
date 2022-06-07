#include"SList.h"




//�����½ڵ�
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



//��ӡ����
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


//���ҽڵ�
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


//β��
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



//ͷ��
void ListNodePushFront(ListNode** pplist, SlTDataType x)
{
	ListNode* newNode = BuyListNode(x);
	newNode->next = *pplist;
	*pplist = newNode;
}


//βɾ
void ListNodePopBack(ListNode** pplist)
{
	//û�нڵ�
	//һ���ڵ�
	//����ڵ�

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



//ͷɾ
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



//����λ�ò���
void ListInsertAfter(ListNode* pos, SlTDataType x)
{
	assert(pos);

	ListNode* newNode = BuyListNode(x);

	newNode->next = pos->next;
	pos->next = newNode;
}



//��������
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