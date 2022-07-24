//#include<iostream>
//using namespace std;
//
//int GetFib(int n)
//{
//    if (n == 1)
//    {
//        return 1;
//    }
//    else if (n == 2)
//    {
//        return 1;
//    }
//    int fib1 = 1, fib2 = 1, fib3 = 0;
//    int count = n - 2;
//    while (count--)
//    {
//        fib3 = fib1 + fib2;
//        fib1 = fib2;
//        fib2 = fib3;
//    }
//    return fib3;
//}
//
//
//
//int main()
//{
//    int n = 0,tmp = 0;
//    long long ret = 0;;
//    while (cin >> n)
//    {
//        for (int i = 0; i < n; i++)
//        {
//            cin >> tmp;
//            ret = GetFib(tmp + 1);
//            printf("%04ld", ret);
//        }
//    }
//    return 0;
//}

//#include <iostream>
//
//const int MAXN = 10010;
//int f[MAXN] = { 1,1,2 };
//
//int main() 
//{
//    int n;
//    for (int i = 3; i < MAXN; ++i) 
//    {
//        f[i] = (f[i - 1] + f[i - 2]) % 10000;
//    }
//    int x;
//    while (scanf_s("%d", &n) != EOF) 
//    {
//        for (int i = 0; i < n; ++i) 
//        {
//            scanf_s("%d", &x);
//            printf("%04d", f[x]);
//        }
//        printf("\n");
//    }
//    return 0;
//}


#include<iostream>
using namespace std;

int GetNums(int m)
{
    int count = 0;
    while (m)
    {
        count++;
        m /= 10;
    }
    return count;
}

int GetResult(int n)
{
    int ret = 0;
    while (n)
    {
        ret += n % 10;
        n /= 10;
    }
    return ret;
}

int solution(int n)
{
    while (GetNums(n) > 1)
    {
        n = GetResult(n);
    }
    return n;
}

int main()
{
    int n = 0;
    while (scanf_s("%d", &n) != EOF)
    {
        cout << solution(n) << endl;
    }
    return 0;
}
