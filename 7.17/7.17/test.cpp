#include<iostream>
using namespace std;
//
//class Date
//{
//public:
//	
//	Date()
//	{
//		_year = 1;
//		_month = 1;
//		_day = 1;
//	}
//
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	/*Date(int year = 0, int month = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = 0;
//	}*/
//
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	/*Date* ptr = nullptr;
//	ptr->Print();*/
//	Date d1;
//	d1.Print();
//	Date d2(1970, 1, 1);
//	d2.Print();
//	return 0;
//}
//
//
//class Date
//{
//public:
//	// 1.无参构造函数
//	Date()
//	{
//
//	}
//	// 2.带参构造函数
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//void TestDate()
//{
//	Date d1; // 调用无参构造函数
//	Date d2(2015, 1, 1); // 调用带参的构造函数
//	// 注意：如果通过无参构造函数创建对象时，对象后面不用跟括号，否则就成了函数声明
//	// 以下代码的函数：声明了d3函数，该函数无参，返回一个日期类型的对象
//	// warning C4930: “Date d3(void)”: 未调用原型函数(是否是有意用变量定义的?)
//	Date d3();
//}
//
//int main()
//{
//	TestDate();
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int n = 0;
//    while (cin >> n)
//    {
//        if (n == 0)
//            break;
//
//        int sumEmpty = 0;
//        int hasEmpty = n;
//        
//        while (hasEmpty)
//        {
//
//        }
//        sumEmpty += hasEmpty / 3;
//        hasEmpty = (hasEmpty / 3) + (hasEmpty % 3);
//
//        sumEmpty += (hasEmpty * 2) / 3;
//        hasEmpty = (hasEmpty * 2) / 3 + (hasEmpty % 3) - hasEmpty;
//    
//        cout << sumEmpty << endl;
//    }
//}
//
//#include<iostream>
//using namespace std;
//
//
//int calcNumber(int n)
//{
//    int sum = 0;
//    while (n > 1)
//    {
//        int res = n / 3;
//        int left = n % 3;
//
//        sum += res;
//        n = left + res;
//        if (n == 2)
//        {
//            sum++;
//            break;
//        }
//    }
//    return sum;
//}
//
//int main()
//{
//    int n, res;
//    while (cin >> n)
//    {
//        if (n == 0)
//            break;
//        res = calcNumber(n);
//        cout << res << endl;
//    }
//    return 0;
//}


#include<iostream>
#include<string>
#include<vector>
using namespace std;

string getComSubstr(string& str1, string& str2)
{
    //寻求最短字符串  
    if (str1.size()  > str2.size())
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
    while (cin  >> str1 >> str2)
    {
        string substr = getComSubstr(str1, str2);
        cout << substr << endl;
    }
    return 0;
}
