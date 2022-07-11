//#include <stdio.h>
//void fun(const char** p)
//{
//	int i;
//	for (i = 0; i < 4; i++)
//		printf("%s", p[i]);
//}
//int main()
//{
//	const char* s[6] = { "ABCD", "EFGH", "IJKL", "MNOP", "QRST", "UVWX" };
//	fun(s);
//	printf("\n");
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int FirstNotRepeatingChar(char* str) {
//    int table[256] = { 0 };
//    int length = strlen(str);
//    for (int i = 0; i < length; i++)
//    {
//        table[str[i]]++;
//    }
//    for (int i = 0; i < length; i++)
//    {
//        if (table[str[i]] == 1)
//            return i;
//    }
//    return -1;
//}
//
//int main()
//{
//    char str[] = "google";
//    printf("%d\n",FirstNotRepeatingChar(str));
//    return 0;
//}

//
//bool isUnique(char* astr) {
//    int table[256] = { 0 };
//    int length = strlen(astr);
//    for (int i = 0; i < length; i++)
//    {
//        table[astr[i]]++;
//    }
//
//    for (int i = 0; i < length; i++)
//    {
//        if (table[astr[i]] > 1)
//        {
//            return false;
//        }
//    }
//    return true;
//}
//
//#include<iostream>
//using namespace std;
//
//bool IsperfectNum(int n) {
//    int sum = 0;
//    for (int i = 1; i < n; i++) {
//        if (n % i == 0) {
//            sum += i;
//        }
//    }
//    return sum == n;
//}
//
//int main() {
//    int n = 0, count = 0;
//    cin >> n;
//    for (int i = 1; i <= n; i++) {
//        if (IsperfectNum(i)) {
//            count++;
//        }
//    }
//    cout << count << endl;
//    return 0;
//}

//
//#include <iostream>
//
//int main()
//{
//    for (int num = 0; num <= 3; num++) // 只需要执行num=0 1 2 3时的4次for循环
//        std::cout << 4 * num << " " << 25 - 7 * num << " " << 75 + 3 * num << std::endl;
//}
//
//#include<iostream>
//using namespace std;
//
//struct ListNode {
//    int m_nKey;
//    ListNode* m_pNext;
//    ListNode() : m_nKey(0), m_pNext(nullptr) {};
//    ListNode(int x) : m_nKey(x), m_pNext(nullptr) {};
//};
//
//ListNode* getNode(ListNode* node, int& node_num) {
//    if (node == NULL) return NULL;
//    ListNode* head = getNode(node->m_pNext, node_num);
//    if (--node_num == 0) return node;
//    else return head;
//}
//
//int main() {
//    int node_num, node;
//    while (cin >> node_num) {
//        ListNode* head = new ListNode(); //正序构建链表
//        ListNode* pre_head = head;
//        while (node_num--) {
//            cin >> node;
//            ListNode* next = new ListNode(node);
//            head->m_pNext = next;
//            head = next;
//        }
//        cin >> node_num;
//        ListNode* rec = getNode(pre_head->m_pNext,
//            node_num); //忘记链表长度，递归找到指定节点
//        if (rec != NULL) cout << rec->m_nKey << endl;
//        else cout << "0" << endl;
//    }
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int main() {
//    int year, mon, day;
//    int data[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//    while (cin >> year >> mon >> day) {
//        int sum;
//        for (int i = 0; i < mon - 1; i++) {
//            sum = sum + data[i];
//        }
//        if ((year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) && mon > 2)
//            sum = sum + 1 + day;
//        else
//            sum = sum + day;
//        cout << sum << endl;
//
//    }
//    return 0;
//}



//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//int main() {
//    int m = 0;
//    cin >> m;
//    int pow = m * m * m;
//    for (int i = 1; i < pow; i += 2) {
//        if (i * m + m * m - m == pow) {
//            cout << i;
//            for (int j = 1; j < m; j++) {
//                cout << '+' << i + 2 * j;
//            }
//            cout << endl;
//            break;
//        }
//    }
//    return 0;
//}
//
//#include<iostream>
//#include<string>
//using namespace std;
//
//bool IsLucky(const string& str)
//{
//    int add = 0, multiple = 1;
//    for (int i = 0; i < str.length(); i++)
//    {
//        add += str[i];
//        multiple *= str[i];
//    }
//    return add > multiple;
//}
//
//int main()
//{
//    int n = 0, count = 0;
//    scanf_s("%d", &n);
//    string str;
//   
//    if (IsLucky(str))
//    {
//        count++;
//    }
//    for (int i = 0; i < str.length(); i++)
//    {
//        for (int j = 0; j < str.length(); j++)
//        {
//            string s = str;
//            s.erase(i, j);
//            if (IsLucky(s))
//            {
//                count++;
//            }
//        }
//    }
//    cout << count << endl;
//    return 0;
//}


#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
using namespace std;

void get_div_num(int v, vector<int>& a) {
    for (int i = 2; i <= sqrt(v); ++i) {
        if (v % i == 0) {
            a.push_back(i);
            if (v / i != i)
                a.push_back(v / i);
        }
    }
}


int jump(int n, int m) {
    vector<int> step(m + 1, INT_MAX);
    step[n] = 0;
    for (int i = n; i < m; i++) {
        if (step[i] == INT_MAX)
            continue;
        vector<int> a;
        get_div_num(i, a);
        for (int j = 0; j < a.size(); j++)
        {
            if (a[j] + i <= m && step[a[j] + i] != INT_MAX)
            {
                step[a[j] + i] = step[a[j] + i] < step[i] + 1 ? step[a[j] + i] :
                    step[i] + 1;
            }
            else if (a[j] + i <= m)
            {
                step[a[j] + i] = step[i] + 1;
            }
        }
    }
    return step[m] == INT_MAX ? -1 : step[m];
}

int main() {
    int n = 0, m = 0, min_step = 0;
    cin >> n >> m;
    min_step = jump(n, m);
    cout << min_step << endl;
    return 0;
}
