#include<iostream>
#include<cassert>
using namespace std;

class Parenthesis {
public:

	typedef int STDataType;
	typedef struct Stack
	{
		STDataType* a;
		int top;
		int capacity;
	}ST;


	void StackInit(ST* ps)
	{
		assert(ps);

		ps->a = NULL;
		ps->capacity = ps->top = 0;

	}

	void StackDestroy(ST* ps)
	{
		assert(ps);

		free(ps->a);

		ps->capacity = ps->top = 0;
		ps->a = NULL;
	}


	void StackPush(ST* ps, STDataType x)
	{
		assert(ps);

		if (ps->capacity == ps->top)
		{
			int newCapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
			STDataType* tmp = (STDataType*)realloc(ps->a, sizeof(STDataType) * newCapacity);
			if (tmp == NULL)
			{
				printf("realloc error\n");
				exit(-1);
			}
			ps->a = tmp;
			ps->capacity = newCapacity;
		}

		ps->a[ps->top] = x;
		ps->top++;
	}

	void StackPop(ST* ps)
	{
		assert(ps);
		assert(!StackEmpty(ps));

		ps->top--;
	}

	bool StackEmpty(ST* ps)
	{
		assert(ps);

		return ps->top == 0;
	}

	STDataType StackTop(ST* ps)
	{
		assert(ps);
		assert(!StackEmpty(ps));

		return ps->a[ps->top - 1];
	}

	int StackSize(ST* ps)
	{
		assert(ps);

		return ps->top;
	}

	bool chkParenthesis(string A, int n) {
		ST st;
		StackInit(&st);
		int j = 0;
		while (A[j])
		{
			if (A[j] == '(' || A[j] == '[' || A[j] == '{')
			{
				StackPush(&st, A[j]);
				j++;
			}
			else
			{
				if (StackEmpty(&st))
				{
					StackDestroy(&st);
					return false;
				}

				STDataType top = StackTop(&st);
				if ((top == '(' && A[j] != ')') || (top == '{' && A[j] != '}') || (top == '[' && A[j] != ']'))
				{
					StackDestroy(&st);
					return false;
				}
				else
				{
					StackPop(&st);
					j++;
				}
			}
		}
		bool ret = StackEmpty(&st);
		return ret;
	}
};

int main()
{

}