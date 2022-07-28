//int i = 1;
//int sum = 0;
//
//class Sum
//{
//public:
//    Sum()
//    {
//        sum += i;
//        i++;
//    }
//};
//class Solution {
//public:
//    int Sum_Solution(int n) {
//        Sum a[n];
//        return sum;
//    }
//};

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

//#include<iostream>
//using namespace std;
//
//bool ismax(int year1, int month1, int day1, int year2, int month2, int day2)
//{
//    if (year1 > year2)
//        return true;
//    else if (year1 == year2)
//    {
//        if (month1 > month2)
//            return true;
//        else if (month1 == month2)
//        {
//            if (day1 > day2)
//                return true;
//        }
//    }
//    return false;
//}
//void Swap(int& x, int& y)
//{
//    int tmp = x;
//    x = y;
//    y = tmp;
//}
//int Getmonthday(int year, int month)
//{
//    static int mday[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//    int day = mday[month];
//    if (month == 2 && (year % 4 == 0 && year % 100 != 0 || year % 400 == 0))
//        day++;
//    return day;
//}
//int main()
//{
//    int year1, month1, day1;
//    int year2, month2, day2;
//    scanf("%4d%2d%2d", &year1, &month1, &day1);
//    scanf("%4d%2d%2d", &year2, &month2, &day2);
//    int count = 1;
//    //找出较大的那个日期
//    if (!ismax(year1, month1, day1, year2, month2, day2))
//    {
//        Swap(year1, year2);
//        Swap(month1, month2);
//        Swap(day1, day2);
//    }
//    //让小的日期自增直到相等。
//    while (year1 != year2 || month1 != month2 || day1 != day2)
//    {
//        ++count;
//        ++day2;
//        if (day2 > Getmonthday(year2, month2))//获取每个月的天数
//        {
//            day2 = 1;
//            month2++;
//            if (month2 > 12)
//            {
//                month2 = 1;
//                year2++;
//            }
//        }
//    }
//    cout << count << endl;
//    return 0;
//}

//
//#include<iostream>
//using namespace std;
//
//inline int GetMonthDay(int year, int month)
//{
//    static int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//    int day = days[month];
//    if (month == 2 && (year % 4 == 0 && year % 100 != 0 || year % 400 == 0))
//        day++;
//    return day;
//}
//
//int main()
//{
//    int year = 0, n = 0;
//    cin >> year >> n;
//    int sum = 0, i = 0;
//    while (sum <= n)
//    {
//        sum += GetMonthDay(year, i++);
//    }
//    int month = i - 1;
//    sum -= GetMonthDay(year, month);
//    int day = n > GetMonthDay(year, month) ? n - sum : n;
//    printf("%04d-%02d-%02d\n", year, month, day);
//    return 0;
//}
//
//#include<iostream>
//using namespace std;
//
//inline int GetMonthDay(int year, int month)
//{
//    static int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//    int day = days[month];
//    if (month == 2
//        && (year % 4 == 0 && year % 100 != 0 || year % 400 == 0))
//    {
//        day++;
//    }
//    return day;
//}
//
//int main()
//{
//    int m = 0;
//    cin >> m;
//    while (m--)
//    {
//        int year = 0, month = 0, day = 0, gap = 0;
//        cin >> year >> month >> day >> gap;
//        day += gap;
//        while (day > GetMonthDay(year, month))
//        {
//            day -= GetMonthDay(year, month);
//            month++;
//            if (month == 13)
//            {
//                year++;
//                month = 1;
//            }
//        }
//        printf("%04d-%02d-%02d\n", year, month, day);
//    }
//    return 0;
//}

//
//class Solution {
//public:
//    ListNode* reverseBetween(ListNode* head, int m, int n) {
//        //加个表头
//        ListNode* res = new ListNode(-1);
//        res->next = head;
//        //前序节点
//        ListNode* pre = res;
//        //当前节点
//        ListNode* cur = head;
//        //找到m
//        for (int i = 1; i < m; i++) {
//            pre = cur;
//            cur = cur->next;
//        }
//        //从m反转到n
//        for (int i = m; i < n; i++) {
//            ListNode* temp = cur->next;
//            cur->next = temp->next;
//            temp->next = pre->next;
//            pre->next = temp;
//        }
//        //返回去掉表头
//        return res->next;
//    }
//};

