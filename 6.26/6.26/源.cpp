//#include<iostream>
//using namespace std;
//int main()
//{
//    int n = 0;
//    int sum = 0;
//    int* a = (int*)malloc(sizeof(int) * n);
//    scanf_s("%d", &n);
//    for (int i = 0; i < 3 * n; i++)
//    {
//        scanf_s("%d", &a[i]);
//    }
//    for (int i = n; i < 2 * n; i++)
//    {
//        sum += a[i];
//    }
//    printf("%d", sum);
//    return 0;
//}

//int GetMidIndex(int* a, int begin, int end)
//{
//    int mid = begin + 1;
//    if (a[begin] > a[end])
//    {
//        if (a[begin] < a[mid])
//        {
//            return begin;
//        }
//        else
//        {
//            if (a[end] > a[mid])
//            {
//                return end;
//            }
//            else
//            {
//                return mid;
//            }
//        }
//    }
//    else
//    {
//        if (a[begin] > a[mid])
//        {
//            return begin;
//        }
//        else
//        {
//            if (a[begin] > a[end])
//            {
//                return begin;
//            }
//            else
//            {
//                return end;
//            }
//        }
//    }
//}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
    char a[1000];
    char b[1000];
    int m = 0;
    fgets(a, 1000, stdin);
    fgets(b, 1000, stdin);
    int lenA = strlen(a);
    int lenB = strlen(b);
    for (int i = 0; i < lenA; i++) {
        for (int j = 0; j < lenB; j++) {
            if (a[i] == b[j]) {
                a[i] = '~';
                m++;
            }
        }
    }
    int len = lenA - m;
    char* ret = (char*)malloc(sizeof(char) * (len + 1));
    for (int i = 0, j = 0; i < lenA; i++, j++)
    {
        if (a[i] != '~')
        {
            ret[j] = a[i];
        }
    }
    ret[len] = '0';
    printf("%s", ret);
    return 0;
}