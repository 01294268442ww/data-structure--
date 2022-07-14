//#include<iostream>
//using namespace std;
//
//bool IsPerfet(int n)
//{
//    int sum = 0;
//    for (int i = 1; i < n; i++)
//    {
//        if (n % i == 0)
//        {
//            sum += i;
//        }
//    }
//    return sum == n;
//}
//
//int main()
//{
//    int n = 0, count = 0;
//    cin >> n;
//    for (int i = 1; i < n; i++)
//    {
//        if (IsPerfet(i))
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
//#include<algorithm>
//using  namespace std;
//
//string FindMax(const string& line)
//{
//    if (line.find("joker JOKER") != string::npos)
//        return "joker JOKER";
//
//    int dash = line.find('-');
//    //分开两手牌
//    string car1 = line.substr(0, dash);
//    string car2 = line.substr(dash + 1);
//
//    //获取两手牌的张数
//    int car1_cnt = count(car1.begin(), car1.end(), ' ') + 1;
//    int car2_cnt = count(car2.begin(), car2.end(), ' ') + 1;
//
//    //获取两手牌的各自第一张牌
//    string car1_first = car1.substr(0, car1.find(' '));
//    string car2_first = car2.substr(0, car2.find(' '));
//
//    if (car1_cnt == car2_cnt) //两手牌的类型相同
//    {
//        string str = "345678910JQKA2jokerJOKER";
//        if (str.find(car1_first) > str.find(car2_first))
//            return car1;
//        return car2;
//    }
//
//    if (car1_cnt == 4) //说明是炸弹
//        return car1;
//    else if (car2_cnt == 4)
//        return car2;
//    return "ERROR";
//}
//
//int main()
//{
//    string line, res;
//    while (getline(cin, line))
//    {
//        res = FindMax(line);
//        cout << res << endl;
//    }
//    return 0;
//}
//
//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//string FindMax(const string& line) {
//    if (line.find("joker JOKER") != string::npos) {
//        return "joker JOKER";
//    }
//
//    int dash = line.find('-');
//    string car1 = line.substr(0, dash);
//    string car2 = line.substr(dash + 1);
//
//    int car1_cnt = count(car1.begin(), car1.end(), ' ') + 1;
//    int car2_cnt = count(car2.begin(), car2.end(), ' ') + 1;
//
//    string car1_first = car1.substr(0, car1.find(' '));
//    string car2_first = car2.substr(0, car2.find(' '));
//
//    if (car1_cnt == car2_cnt) {
//        string str = "345678910JQKA2jokerJOKER";
//        if (str.find(car1_first) > str.find(car2_first))
//            return car1;
//        return car2;
//    }
//
//    if (car1_cnt == 4) {
//        return car1;
//    }
//    else if (car2_cnt == 4) {
//        return car2;
//    }
//
//    return "ERROR";
//
//}
//
//int main() {
//    string line, res;
//    getline(cin, line);
//    res = FindMax(line);
//    cout << res << endl;
//    return 0;
//}

//#include<stdio.h>
//
//union D
//{
//	int d1;
//	float d2;
//}d;
//
//
//int main()
//{
//	d.d2 = 10;
//	printf("%f", d.d1);
//	return 0;
//
//}
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//char* compressString(char* S) {
//    if (S == NULL)
//    {
//        return NULL;
//    }
//
//    int len = strlen(S);
//    char* str = (char*)malloc(sizeof(char) * (len + 1));
//    memset(str, 0, sizeof(char) * (len + 1));
//    int hash[256] = { 0 };
//    for (int i = 0; i < len; i++)
//    {
//        hash[S[i]]++;
//    }
//    int j = 0;
//    while (1)
//    {
//        if (*S == '\0')
//        {
//            break;
//        }
//        str[j++] = *S;
//        str[j++] = hash[*S] + '0';
//        S += hash[*S];
//    }
//    return str;
//}
//
//int main()
//{
//    char str[] = "aabcccccaa";
//    printf("%s\n", compressString(str));
//    return 0;
//}
//
//#include<stdio.h>
//#include<string>
//
//char* compressString(char* S) {
//    if (S == NULL)
//        return NULL;
//
//    int len_S = strlen(S);
//    char* str = (char*)malloc(sizeof(char) * (50000 * 2));
//    int count = 1, j = 0;  char ch = S[0];
//    for (int i = 1; i < len_S; i++) {
//        if (ch == S[i])  count++;
//        else
//        {
//            str[j++] = ch;
//            if (count < 10) str[j++] = count + '0';
//            else
//            {
//                char remander[100]; int m = 0;
//                while (count) {
//                    remander[m++] = count % 10;
//                    count /= 10;
//                }
//                while (m--) 
//                    str[j++] = remander[m] + '0';
//            }
//            count = 1; ch = S[i];
//        }
//    }
//    str[j++] = ch; char remander[100]; int m = 0;
//    while (count) {
//        remander[m++] = count % 10;
//        count /= 10;
//    }
//    while (m--)
//        str[j++] = remander[m] + '0';
//    str[j] = '\0';
//    int len_str = strlen(str);
//    return len_str < len_S ? str : S;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//    int n = 0;
//    cin >> n;
//    int m = 2 * n - 1;
//    vector<vector<int>> dp(n, vector<int>(m, 0));
//    dp[0][0] = 1;
//    for (int i = 1; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            dp[i][j] = (i - 1 >= 0 ? dp[i - 1][j] : 0) + (j - 1 < m ? dp[i][j - 1] : 0) + (j - 1 >= 0 ? dp[i][j + 1] : 0);
//        }
//    }
//    bool out = false;
//    for (int i = 0; i < m; i++)
//    {
//        if (dp[n - 1][i] % 2 == 0)
//        {
//            cout << dp[n - 1][i] << endl;
//            out = true;
//            break;
//        }
//    }
//    if (!out)
//        cout << "-1" << endl;
//    return 0;
//}

#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    char ch; cin >> ch;
    if (ch >= 'A' && ch <= 'Z')
        ch += 32;
    int hash[256] = { 0 };
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        hash[str[i]]++;
    }

    cout << hash[ch] << endl;
    return 0;
}