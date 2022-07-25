//#include<iostream>
//using namespace std;
//
//class A
//{
//public:
//	A(int a)
//	{
//		_a = a;
//		cout << "A(int a)->" << _a << endl;
//	}
//
//	A(A& aa)
//	{
//		
//	}
//	~A()
//	{
//		cout << "~A()->" << _a << endl;
//	}
//private:
//	int _a;
//};
//
//
//A aa3(3);
//
//void test()
//{
//	static A aa0(0);
//	A aa1(1);
//	A aa2(2);
//	static A aa4(4);
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//
//int i = 1;
//int sum = 0;
//
//class Sum
//{
//public:
//	Sum()
//	{
//		sum += i;
//		i++;
//	}
//};
//class Solution {
//public:
//	int Sum_Solution(int n) {
//		Sum a[n];
//		return sum;
//	}
//};
//
//#include <iostream>
//using namespace std;
//int main()
//{
//    int year, mon, day;
//    int data[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//    while (cin >> year >> mon >> day)
//    {
//        int sum;
//        for (int i = 0; i < mon - 1; i++)
//        {
//            sum = sum + data[i];
//        }
//        if ((year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) && mon > 2)
//            sum = sum + 1 + day;
//        else
//            sum = sum + day;
//
//        cout << sum << endl;
//    }
//    return 0;
//}

//
//#include<iostream>
//#include<cmath>
//using namespace std;
//
//bool IsPrime(int year)
//{
//    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
//}
//
//int main()
//{
//    int data[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//    int year1 = 0, mon1 = 0, day1 = 0, gap1 = 0;
//    int year2 = 0, mon2 = 0, day2 = 0, gap2 = 0;
//    cin >> year1 >> mon1 >> day1;
//    cin >> year2 >> mon2 >> day2;
//    if (year1 > year2)
//    {
//        int tmp = year1;
//        year1 = tmp;
//        tmp = mon1;
//        mon1 = mon2;
//        mon2 = tmp;
//        tmp = day1;
//        day1 = day2;
//        day2 = tmp;
//    }
//    for (int i = 1; i < mon1 - 1; i++)
//    {
//        gap1 += data[i];
//    }
//    for (int j = 1; j < mon2 - 1; j++)
//    {
//        gap2 += data[j];
//    }
//    if (year1 < year2)
//    { 
//        int gap = (year1 - year2) - 1;
//        for (int i = mon1; i <= 12; i++)
//        {
//            gap1 += data[i];
//        }
//        if (mon1 > 2 && ((year1 % 400 == 0) || (year1 % 4 == 0 && year1 % 100 != 0)))
//        {
//            gap1++;
//        }
//
//        while (gap--)
//        {
//            gap1 += 365;
//            if ((year1 % 400 == 0) || (year1 % 4 == 0 && year1 % 100 != 0))
//            {
//                gap1++;
//            }
//        }
//    }
//    cout << abs(gap1 - gap2) << endl;
//}



#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int data[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int time1 = 0, year1 = 0, mon1 = 0, day1 = 0, gap1 = 0;
    int time2 = 0, year2 = 0, mon2 = 0, day2 = 0, gap2 = 0;
    while (cin >> time1 >> time2)
    {
        if (time1 > time2)
        {
            int tmp = time1;
            time1 = time2;
            time2 = tmp;
        }

        year1 = time1 / 10000;
        mon1 = time1 % 10000 / 100;
        day1 = time1 % 100;
        year2 = time2 / 10000;
        mon2 = time2 % 10000 / 100;
        day2 = time2 % 100;

        for (int i = 1; i < mon1 - 1; i++)
        {
            gap1 += data[i];
        }
        gap1 += day1;
        for (int j = 1; j < mon2 - 1; j++)
        {
            gap2 += data[j];
        }
        gap2 += day2;

        if (year1 < year2)
        {
            for (int i = mon1; i <= 12; i++)
            {
                gap1 += data[i];
            }
            if (mon1 > 2 && ((year1 % 400 == 0) || (year1 % 4 == 0 && year1 % 100 != 0)))
            {
                gap1++;
            }

            for (int i = year1 + 1; i < year2; i++)
            {
                gap1 += 365;
                if ((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0))
                {
                    gap1++;
                }
           }
        }
        cout << abs(gap1 - gap2) + 1<< endl;
    }
   
    return 0;
}