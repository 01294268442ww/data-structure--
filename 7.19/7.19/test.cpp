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
//	int _year; // ��
//	int _month; // ��
//	int _day; // ��
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
//// 1.�������������н���ǣ� A�����뱨�� B�����б��� C����������
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
//// 1.�������������н���ǣ� A�����뱨�� B�����б��� C����������
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
    //Ѱ������ַ���  
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

               //����и����Ĺ����Ӵ������³���  
            if (MSC[i][j]  > max_size)
            {              
                max_size = MSC[i][j];
                   //��i��β����󳤶�Ϊmax, ���Ӵ�����ʼλ��Ϊi - max  
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
