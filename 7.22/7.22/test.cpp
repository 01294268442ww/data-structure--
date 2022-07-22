#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char a[1000];
	for (int i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}
	printf("%d\n", strlen(a));
	return 0;
}