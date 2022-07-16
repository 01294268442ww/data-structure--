#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<string.h>

void fun(const char* fname, const char* st)
{
	FILE* myf;
	int i;
	myf = fopen(fname, "w");
	for (i = 0; i < strlen(st); i++) fputc(st[i], myf);
	fclose(myf);
}
int main()
{
	fun("test.txt", "new world");
	fun("test.txt", "hello,");
	return 0;
}
