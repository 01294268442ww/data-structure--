//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//int main()
//{
//    string str, ret, cur;
//    cin >> str;
//
//    for (int i = 0; i <= str.length(); i++)
//    {
//        if (str[i] >= '0' && str[i] <= '9')
//        {
//            cur += str[i];
//        }
//        else
//        {
//            if (cur.length() > ret.length())
//            {
//                ret = cur;
//
//            }
//            cur.clear();
//        }
//    }
//    cout << ret;
//    return 0;
//}
//
//class Solution2 {
//public:
//    int MoreThanHalfNum_Solution(vector<int> numbers) {
//        if (numbers.empty())
//        {
//            return 0;
//        }
//
//        //sort(numbers.begin(), numbers.end());
//        int mid = numbers[numbers.size() / 2];
//        int times = 0;
//        for (int i = 0; i < numbers.size(); i++)
//        {
//            if (numbers[i] == mid)
//            {
//                times++;
//            }
//        }
//        if (times >= numbers.size() / 2)
//        {
//            return mid;
//        }
//        return 0;
//    }
//};
//
//class Solution1 {
//public:
//    int MoreThanHalfNum_Solution(vector<int> numbers) {
//        if (numbers.empty())
//        {
//            return 0;
//        }
//
//        int result = numbers[0];
//        int times = 1;
//        for (int i = 1; i < numbers.size(); i++)
//        {
//            if (times)
//            {
//                if (result != numbers[i])
//                {
//                    times--;
//                }
//                else
//                {
//                    times++;
//                }
//            }
//            else
//            {
//                result = numbers[i];
//                times = 1;
//            }
//        }
//        times = 0;
//        for (int i = 0; i < numbers.size(); i++)
//        {
//            if (result == numbers[i])
//            {
//                times++;
//            }
//        }
//
//        if (times >= numbers.size() / 2)
//        {
//            return result;
//        }
//        return 0;
//    }
//};

//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int a = 0, b = 0, c = 0, d = 0;
//    cin >> a >> b >> c >> d;
//    int A = (a + c) / 2;
//    int B1 = (c - a) / 2;
//    int C = (d - b) / 2;
//    int B2 = (d + b) / 2;
//    if (B1 == B2)
//    {
//        cout << A << " " << B1 << " " << C << endl;
//    }
//    else
//    {
//        cout << "No" << endl;
//    }
//    return 0;
//}

//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//    string str, table = "0123456789ABCDEFG";
//    int m, n;
//    cin >> m >> n;
//    bool flag = false;
//    if (m < 0)
//    {
//        m = -m;
//        flag = true;
//    }
//    if (m == 0)
//    {
//        str += '0';
//    }
//
//    while (m != 0)
//    {
//        str += table[m % n];
//        m /= n;
//    }
//    if (flag == true)
//    {
//        str += '-';
//    }
//    reverse(str.begin(), str.end());
//    cout << str;
//    return 0;
//}

//
//#include<iostream>
//#include<vector>
//using namespace std;
//
//int GetMax(int x, int y) {
//    return x > y ? x : y;
//}
//
//int main() {
//    int n = 0;
//    cin >> n;
//    vector<int> a(n);
//    for (int i = 0; i < n; i++) {
//        cin >> a[i];
//    }
//    int sum = a[0];
//    int max = a[0];
//    for (int i = 0; i < n; i++) {
//        sum = GetMax(sum + a[i], a[i]);
//        if (sum >= max) {
//            max = sum;
//        }
//    }
//    cout << max << endl;
//    return 0;
//}
//
//#include<iostream>
//#include<string>
//using namespace std;
//
//bool IsCircle(const string str)
//{
//    int begin = 0;
//    int end = str.size() - 1;
//    while (begin < end)
//    {
//        if (str[begin] != str[end])
//        {
//            return false;
//        }
//        begin++;
//        end--;
//    }
//    return true;
//}
//
//int main()
//{
//    string str1, str2;
//    getline(cin, str1);
//    getline(cin, str2);
//    int count = 0;
//
//    for (int i = 0; i <= str1.size(); i++)
//    {
//        string str = str1;
//        str.insert(i, str2);
//        if (IsCircle(str))
//        {
//            count++;
//        }
//    }
//    cout << count << endl;
//    return 0;
//}

//
//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//    int n = 0;
//    cin >> n;
//    int count = 0;
//    int m = 0;
//    int max = 0;
//    string str;
//    while (n)
//    {
//        str[m++] = n % 10;
//        n /= 10;
//    }
//    int prev = str[0];
//    for (int i = 1; i < str.length(); i++)
//    {
//        if (prev == 1 && str[i] == 1)
//        {
//            count++;
//        }
//        else
//        {
//            if (prev == 1)
//            {
//                count = 0;
//            }
//            else if (str[i] == 1)
//            {
//                count = 1;
//            }
//        }
//        prev = str[i];
//
//        if (max < count)
//        {
//            max = count;
//        }
//    }
//    cout << max;
//    return 0;
//}
//
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//    int w, h, res = 0;
//    cin >> w >> h;
//    vector<vector<int>> a;
//    a.resize(w);
//    for (auto& e : a)
//        e.resize(h, 1);
//    for (int i = 0; i < w; i++)
//    {
//        for (int j = 0; j < h; j++)
//        {
//            if (a[i][j] == 1)
//            {
//                res++;
//                if (i + 2 < w)
//                {
//                    a[i + 2][j] = 0;
//                }
//                if (j + 2 < h)
//                {
//                    a[i][j + 2] = 0;
//                }
//            }
//        }
//    }
//    cout << res;
//    return 0;
//}
//
//class Solution {
//public:
//    int StrToInt(string str) {
//        if (str.empty())
//        {
//            return 0;
//        }
//
//        int symble = 1;
//        int sum = 0;
//
//        if (str[0] == '+')
//        {
//            symble = 1;
//            str[0] = '0';
//        }
//        else if (str[0] == '-')
//        {
//            symble = -1;
//            str[0] = '0';
//        }
//
//        for (int i = 0; i < str.length(); i++)
//        {
//            if (str[i] < '0' || str[i]>'9')
//            {
//                sum = 0;
//                break;
//            }
//            else
//            {
//                sum = sum * 10 + str[i] - '0';
//            }
//        }
//        return sum * symble;
//    }
//};

