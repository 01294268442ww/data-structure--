#include"Person.h"


//
//class Date
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year; // 年
//	int _month; // 月
//	int _day; // 日
//	int a;
//};
//
//
//
//int main()
//{
//	Date d1, d2;
//	d1.Init(2022, 1, 11);
//	d2.Init(2022, 1, 12);
//	d1.Print();
//	d2.Print();
//	return 0;
//}










//
//int main()
//{
//	/*Person p1, p2;
//	p1.showPerson();
//	p2.showPerson();*/
//	cout << sizeof(P);
//
//
//	return 0;
//}


//
//// 1.下面程序编译运行结果是？ A、编译报错 B、运行崩溃 C、正常运行
//class A {
//public:
//	void Print()
//	{
//		cout << "Print()" << endl;
//	}
//private:
//	int _a;
//};
//int main()
//{
//	A* p = nullptr;
//	p->Print();
//	return 0;
//}
//// 1.下面程序编译运行结果是？ A、编译报错 B、运行崩溃 C、正常运行
//class A
//{
//public:
//	void PrintA()
//	{
//		cout << _a << endl;
//	}
//private:
//	int _a;
//};
//int main()
//{
//	A* p = nullptr;
//	p->PrintA();
//	return 0;
//}



#include<iostream>
#include<string>
#include<vector>
using namespace std;

string getComSubstr(string& str1, string& str2)
{
    //寻求最短字符串  
    if (str1.size() > str2.size())
        swap(str1, str2);

    int len1 = str1.size();
    int len2 = str2.size();
    vector<vector<int>> MSC(len1 + 1, vector<int>(len2 + 1, 0));

    int start = 0, max_size = 0;

    for (int i = 1; i <= len1; ++i)
    {
        for (int j = 1; j <= len2; ++j)
    {
            if (str2[j - 1] == str1[i - 1])
                MSC[i][j] = MSC[i - 1][j - 1] + 1;

               //如果有更长的公共子串，更新长度  
            if (MSC[i][j]  > max_size)
            {              
                max_size = MSC[i][j];
                   //以i结尾的最大长度为max, 则子串的起始位置为i - max  
                start = i - max_size;
             }
         }
     }
    return str1.substr(start, max_size);
 }

int main()
{
    string str1, str2;
    while (cin >> str1 >> str2)
    {
        string substr = getComSubstr(str1, str2);
        cout << substr << endl;
    }
    return 0;
 }
