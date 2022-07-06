//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//    string str1, str2;
//    getline(cin, str1);
//    getline(cin, str2);
//
//    int hash[256] = { 0 };
//    for (int i = 0; i < str2.size(); i++)
//    {
//        hash[str2[i]]++;
//    }
//
//    string ret = "";
//    for (int i = 0; i < str1.size(); i++)
//    {
//        if (hash[str1[i]] == 0)
//        {
//            ret += str1[i];
//        }
//    }
//    cout << ret;
//    return 0;
//}

//
//#include<iostream>
//#include<string>
//#include<cstring>
//using namespace std;
//
//int main()
//{
//    string str;
//    int sum = 0;
//    getline(cin, str);
//    if (str.length() <= 4)
//    {
//        sum = 5;
//    }
//    else if (str.length() <= 7)
//    {
//        sum = 10;
//    }
//    else if (str.length() >= 8)
//    {
//        sum = 25;
//    }
//    int digital = 0, lower = 0, super = 0, symble = 0;
//    for (int i = 0; i < str.length(); i++)
//    {
//        //判断数字的个数
//        if (isdigit(str[i]))
//        {
//            digital++;
//        }
//
//        //判断是否有字母
//        if (isalpha(str[i]))
//        {
//            if (islower(str[i]))
//            {
//                lower++;
//            }
//            if (isupper(str[i]))
//            {
//                super++;
//            }
//        }
//    }
//    symble = lower + super;
//    if (lower && super && digital && symble)
//    {
//        sum += 5;
//    }
//    else if ((lower || super) && digital && symble)
//    {
//        sum += 3;
//    }
//    else if ((lower || super) && digital)
//    {
//        sum += 2;
//    }
//
//    if (lower && super)
//    {
//        sum += 20;
//    }
//    else if (lower || super)
//    {
//        sum += 10;
//    }
//    else if (!lower && !super)
//    {
//        sum += 0;
//    }
//
//    if (!digital)
//    {
//        sum += 0;
//    }
//    else if (digital == 1)
//    {
//        sum += 10;
//    }
//    else if (digital > 1)
//    {
//        sum += 20;
//    }
//
//    if (!symble)
//    {
//        sum += 0;
//    }
//    else if (symble == 1)
//    {
//        sum += 10;
//    }
//    else if (symble > 1)
//    {
//        sum += 20;
//    }
//
//    if (sum >= 90)
//    {
//        cout << "VERY_SECURE" << endl;
//    }
//    else if (sum >= 80)
//    {
//        cout << "SECURE" << endl;
//    }
//    else if (sum >= 70)
//    {
//        cout << "VERY_STRONG" << endl;
//    }
//    else if (sum >= 60)
//    {
//        cout << "STRONG" << endl;
//    }
//    else if (sum >= 50)
//    {
//        cout << "AVERAGE" << endl;
//    }
//    else if (sum >= 25)
//    {
//        cout << "WEAK" << endl;
//    }
//    else if (sum >= 0)
//    {
//        cout << "VERY_WEAK" << endl;
//    }
//    return 0;
//}

//class Board {
//public:
//    bool checkWon(vector<vector<int> > board) {
//        int row = board.size();
//        //检查每一行的和是是否等于row
//        int i, j, sum;
//        for (i = 0; i < row; i++)
//        {
//            sum = 0;
//            for (j = 0; j < row; j++)
//            {
//                sum += board[i][j];
//            }
//            if (sum == row)
//                return true;
//        }
//        //检查每一列的和是是否等于row
//        for (i = 0; i < row; i++)
//        {
//            sum = 0;
//            for (j = 0; j < row; j++)
//            {
//                sum += board[j][i];
//            }
//            if (sum == row)
//                return true;
//        }
//        //检查主对角线的和是是否等于row
//        sum = 0;
//        for (i = 0; i < row; i++)
//        {
//            sum += board[i][i];
//        }
//        if (sum == row)
//            return true;
//        //检查副对角线的和是是否等于row
//        sum = 0;
//        for (i = 0; i < row; i++)
//        {
//            sum += board[i][row - i - 1];
//        }
//        if (sum == row)
//            return true;
//        return false;
//    }
//};

//
//#include <iostream>
//#include <string>
//
//using namespace std;
//int score_count(string& str)
//{
//    int digit = 0, symbol = 0;
//    int lower = 0, upper = 0, charc = 0;
//    int size = 0, sum = 0;
//
//    for (auto ch : str) {
//        if (ch >= 'a' && ch <= 'z') {
//            lower++;
//            charc++;
//        }
//        else if (ch >= 'A' && ch <= 'Z') {
//            upper++;
//            charc++;
//        }
//        else if (ch >= '0' && ch <= '9') {
//            digit++;
//        }
//        else if ((ch >= 0x21 && ch <= 0x2F) ||
//            (ch >= 0x3A && ch <= 0x40) ||
//            (ch >= 0x5B && ch <= 0x60) ||
//            (ch >= 0x7B && ch <= 0x7E)) {
//            symbol++;
//        }
//    }
//    size = str.size();
//    if (size <= 4)
//        sum += 5;
//    else if (size <= 7)
//        sum += 10;
//    else
//        sum += 25;
//
//    if (lower > 0 && upper > 0)
//        sum += 20;
//    else if (lower == charc || upper == charc)
//        sum += 10;
//
//    if (digit == 1)
//        sum += 10;
//    else if (digit > 1)
//        sum += 20;
//
//    if (symbol == 1)
//        sum += 10;
//    else if (symbol > 1)
//        sum += 25;
//
//    if (lower > 0 && upper > 0 && digit > 0 && symbol > 0)
//        sum += 5;
//    else if ((lower > 0 || upper > 0) && digit > 0 && symbol > 0)
//        sum += 3;
//    else if ((lower > 0 || upper > 0) && digit > 0 && symbol == 0)
//        sum += 2;
//    return sum;
//}
//int main()
//{
//    string str;
//    while (cin >> str) {
//        int score = score_count(str);
//        if (score >= 90) {
//            cout << "VERY_SECURE" << endl;
//        }
//        else if (score >= 80) {
//            cout << "SECURE" << endl;
//        }
//        else if (score >= 70) {
//            cout << "VERY_STRONG" << endl;
//        }
//        else if (score >= 60) {
//            cout << "STRONG" << endl;
//        }
//        else if (score >= 50) {
//            cout << "AVERAGE" << endl;
//        }
//        else if (score >= 25) {
//            cout << "WEAK" << endl;
//        }
//        else {
//            cout << "VERY_WEAK" << endl;
//        }
//    }
//    return 0;
//}


//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//int main() {
//    string str;
//    getline(cin, str);
//    //整体置换
//    reverse(str.begin(), str.end());
//
//    //将每个单词逆置
//    auto start = str.begin();
//    while (start != str.end()) {
//        auto end = start;
//        while (end != str.end() && *end != ' ') {
//            end++;
//        }
//
//        reverse(start, end);
//        if (*end == ' ') {
//            start = end + 1;
//        }
//        else {
//            start = end;
//        }
//    }
//    cout << str;
//    return 0;
//}

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    vector<int> a;
    a.resize(n + 1);
    a[n] = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int i = 0;
    int count = 0;
    while (i < n)
    {
        if (a[i] < a[i + 1])
        {
            while (i < n && a[i] <= a[i + 1])
            {
                i++;
            }
            count++;
            i++;
        }
        else if (a[i] == a[i + 1])
        {
            i++;
        }
        else
        {
            while (i < n && a[i] >= a[i + 1])
            {
                i++;
            }
            count++;
            i++;
        }
    }
    cout << count << endl;
    return 0;
}