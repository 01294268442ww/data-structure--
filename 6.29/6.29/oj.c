#include<stdio.h>
#include<stdlib.h>
//
//typedef char STDataType;
//
//typedef struct Stack
//{
//	STDataType* a;
//	int top;
//	int capacity;
//}ST;
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
//
//
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
//bool isValid(char* s) {
//	if (s == NULL)
//	{
//		return true;
//	}
//
//	ST st;
//	StackInit(&st);
//
//	while (*s)
//	{
//		if (*s == '(' || *s == '[' || *s == '{')
//		{
//			StackPush(&st, *s);
//			s++;
//		}
//		else
//		{
//			if (StackEmpty(&st))
//			{
//				StackDestroy(&st);
//				return false;
//			}
//
//			char* top = StackTop(&st);
//
//			if ((top == '(' && *s != ')')
//				|| (top == '[' && *s != ']')
//				|| (top == '{' && *s != '}'))
//			{
//				StackDestroy(&st);
//				return false;
//			}
//			else
//			{
//				StackPop(&st);
//				s++;
//			}
//		}
//	}
//	bool ret = StackEmpty(&st);
//	return ret;
//}

