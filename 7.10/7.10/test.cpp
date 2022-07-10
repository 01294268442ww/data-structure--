//#include<iostream>
//using namespace std;

//void swap(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//void swap(int& x, int& y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//
//int main()
//{
//	int a = 20;
//	int& b = a;
//	int c = 200;
//	/*printf("%p\n", &a);
//	printf("%p\n", &b);*/
//
//	//b = c;
//	printf("%d\n", a);
//	printf("%d\n", c);
//
//	swap(&a, &c);
//
//	printf("%d\n", a);
//	printf("%d\n", c);
//
//	swap(a, c);
//
//	printf("%d\n", a);
//	printf("%d\n", c);
//	return 0;
//}
//
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int& Add(int a, int b)
//{
//	int c = a + b;
//	return c;
//}
//
//int& Count()
////{
////	static int n = 0;
////	n++;
////	return n;
////}
////
////int main()
////{
////	//int ret = Add(1, 2);
////	/*int a = 20;
////	int b = 30;
////	printf("%d\n", Max(a, b));*/
////
////	int& ret = Count();
////	printf("%d\n", ret);
////	printf("%d\n", ret);
////
////
////	return 0;
////}
//
////
////void swap(int* x, int* y)
////{
////	int tmp = *x;
////	*x = *y;
////	*y = tmp;
////}
////
////void swap(int& x, int& y)
////{
////	int tmp = x;
////	x = y;
////	y = tmp;
////}
////
////int main()
////{
////	int a = 20;
////	int b = 30;
////	swap(&a, &b);
////	swap(a, b);
////	return 0;
////}
//
//void func(char para[100])
//{
//	void* p = malloc(100);
//	printf("%d, %d\n", sizeof(para), sizeof(p));
//}
//
//int main()
//{
//	/*char a = 101;
//	int sum = 200;
//	a += 27; sum += a;
//	printf("%d\n", sum);*/
//
//	/*int value = 1024;
//	char condition = *((char*)(&value));
//	if (condition) value += 1; condition = *((char*)(&value));
//	if (condition) value += 1; condition = *((char*)(&value));
//	printf("%d %d", value, condition);*/
//	char para[100];
//	func(para);
//	return 0;
//}

//
//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//    string str;
//    getline(cin, str);
//    int sum = 0;
//    for (int i = 0; i < str.length(); i++)
//    {
//        if (str[i] == '"')
//        {
//            str[i] = 0;
//            while (i < str.length() && str[i] != '"')
//            {
//                i++;
//            }
//            str[i] = 0;
//        }
//
//        if (str[i] == ' ')
//        {
//            str[i] = 0;
//            sum++;
//        }
//    }
//    cout << sum + 1 << endl;
//
//    for (int i = 0; i < str.length(); i++)
//    {
//        if (str[i] != 0)
//        {
//            cout << str[i];
//        }
//
//        if (i+1<str.length()&&str[i] == 0 && str[i + 1] != 0)
//        {
//            cout << endl;
//        }
//    }
//    return 0;
//}

//
//#include <iostream>
//#include <string>
//using namespace std;
//
//bool IsAutomorphicNumber(int n) {
//    int square = n * n;
//    while (n) {
//        if (square % 10 != n % 10) {
//            return false;
//        }
//        n /= 10;
//        square /= 10;
//    }
//    return true;
//}
//
//int main() {
//    int n = 0;
//    cin >> n;
//    int count = 0;
//    for (int i = 0; i <= n; i++) {
//        if (IsAutomorphicNumber(i)) {
//            count++;
//        }
//    }
//    cout << count << endl;
//    return 0;
//}
//
//#include<iostream>
//using namespace std;
//bool IsPrimeNum(int n) {
//    for (int i = 2; i < n; i++) {
//        if (n % i == 0)
//            return false;
//    }
//    return true;
//}
//int main() {
//    int n = 0, count = 0;
//    cin >> n;
//    for (int i = 2; i < n; i++) {
//        if (IsPrimeNum(i))
//            count++;
//    }
//    cout << count << endl;
//    return 0;
//}