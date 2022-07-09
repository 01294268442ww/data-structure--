//#include <iostream>
//
//
//namespace C
//{
//	int scanf_s = 10;
//}
//
//int main()
//{
//	scanf_s("%d", &C::scanf_s);
//}
//
//
////#include<stdio.h>
////
////int main()
////{
////	int scanf_s = 10;
////	int strlen = 10;
////	scanf_s("%d", &scanf);
////	return 0;
////}

#include<iostream>
using namespace std;
//using std::cin;
//using std::cout;
//using std::endl;

void func(int n = 0)
{
	cout << n << endl;
}
//
//int Add(int x, int y)
//{
//	return x + y;
//}

double Add(double x, double y)
{
	return x + y;
}

void f(int a, int b, int c = 1)
{

}

void f(int a, int b)
{

}

int Add(int x, int y)
{
	return x + y;
}

long Add(long x, long y)
{
	return x + y;
}

int main()
{
	int n = 20;
	//cin >> n;
	//cout << n << endl;
	//func();
	//func(n);
	//func(120);
	cout << Add(1, 2) << endl;
	cout << Add(1.1, 2.2) << endl;
	//f(1, 2);
	f(1, 2, 3);
	cout << Add(1, 2) << endl;
	cout << Add(2L, 9L) << endl;
	return 0;
}