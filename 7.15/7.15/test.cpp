//#include <stdio.h> 
//typedef struct List_t 
//{
//	struct List_t* next;
//	struct List_t* prev;
//	char data[0]; 
//}list_t; 
//int main() 
//{
//	printf("%d", sizeof(list_t)); 
//	return 0;
//
//}
//
//#include<stdio.h> 
//#include<stdlib.h>
//void fut(int** s, int p[2][3])
//{
//	**s = p[1][1];
//}
//int main() 
//{
//	int a[2][3] = { 1,3,5,7,9,11 }, * p;
//	p = (int*)malloc(sizeof(int)); fut(&p, a);
//	printf("%d", *p); 
//	return 0;
//}
//
//int multiply(int A, int B) {
//    if (B == 0)
//    {
//        return 0;
//    }
//    return A + multiply(A, B - 1);
//}
//
//
//#include<iostream>
//using namespace std;
//
//bool IsSeven(int n)
//{
//    if (n % 7 == 0)
//        return true;
//
//    while (n)
//    {
//        if (n % 10 == 7)
//            return true;
//        n /= 10;
//    }
//    return false;
//}
//
//int main()
//{
//    int n = 0, count = 0;
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//    {
//        if (IsSeven(i))
//            count++;
//    }
//    cout << count << endl;
//    return 0;
//}
//
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//    string less, longer;
//    getline(cin, less);
//    getline(cin, longer);
//    int hash[256] = { 0 };
//    for (int i = 0; i < longer.length(); i++)
//        hash[longer[i]]++;
//    bool flag = true;
//    for (int i = 0; i < less.length(); i++)
//    {
//        if (hash[less[i]] == 0)
//        {
//            flag = false;
//            break;
//        }
//
//    }
//    if (flag == true)
//        cout << "true" << endl;
//    else
//        cout << "false" << endl;
//    return 0;
//}

//
//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int m = 0, n = 0;
//    while (cin >> m >> n)
//    {
//        if (m > 9 || n > 9)
//            cout << "-1" << endl;
//        else
//            cout << "0" << endl;
//        int x1, y1, x2, y2;
//        cin >> x1 >> y1 >> x2 >> y2;
//        if (x1 >= m || x2 >= m || y1 >= n || y2 >= n)
//            cout << "-1" << endl;
//        else
//            cout << "0" << endl;
//
//        int x = 0, y = 0;
//        cin >> x >> y;
//        if (m + 1 > 9)
//            cout << "-1" << endl;
//        else
//            cout << "0" << endl;
//        if (n + 1 > 9)
//            cout << "-1" << endl;
//        else
//            cout << "0" << endl;
//
//        cin >> x >> y;
//
//        if (x >= m || y >= n)
//            cout << "-1" << endl;
//        else
//            cout << "0" << endl;
//    }
//
//    return 0;
//}
//

//
//
//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int m = 0, n = 0;
//    while (cin >> m >> n)
//    {
//        if (m > 9 || n > 9)
//            cout << "-1" << endl;
//        else
//            cout << "0" << endl;
//
//        int x1, y1, x2, y2;
//        cin >> x1 >> y1 >> x2 >> y2;
//        if (x1 >= m || x2 >= m || y1 >= n || y2 >= n)
//            cout << "-1" << endl;
//        else
//            cout << "0" << endl;
//
//        int x = 0, y = 0;
//        cin >> x >> y;
//
//        if (m + 1 > 9)
//            cout << "-1" << endl;
//        else
//            cout << "0" << endl;
//
//        if (n + 1 > 9)
//            cout << "-1" << endl;
//        else
//            cout << "0" << endl;
//
//        cin >> x >> y;
//
//        if (x >= m || y >= n)
//            cout << "-1" << endl;
//        else
//            cout << "0" << endl;
//    }
//    return 0;
//}

//
//
//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int m = 0, n = 0;
//    while (cin >> m >> n)
//    {
//        if (m > 9 || n > 9)
//            cout << "-1" << endl;
//        else
//            cout << "0" << endl;
//
//        int x1, y1, x2, y2;
//        cin >> x1 >> y1 >> x2 >> y2;
//        if (x1 < 0 || x1 >= m || x2 < 0 || x2 >= m || y1 < 0 || y1 >= n || y2 < 0 || y2 >= n)
//            cout << "-1" << endl;
//        else
//            cout << "0" << endl;
//
//        int x = 0, y = 0;
//        cin >> x >> y;
//
//        if (m + 1 > 9 || x < 0 || x >= m)
//            cout << "-1" << endl;
//        else
//            cout << "0" << endl;
//
//        if (n + 1 > 9 || y < 0 || y >= n)
//            cout << "-1" << endl;
//        else
//            cout << "0" << endl;
//
//        cin >> x >> y;
//
//        if (x >= m || y >= n || x < 0 || y < 0)
//            cout << "-1" << endl;
//        else
//            cout << "0" << endl;
//    }
//    return 0;
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
//    int count = 0;
//    for (int i = 0; i < str.length(); i++)
//    {
//        if (str[i] >= 'A' && str[i] <= 'Z')
//            count++;
//    }
//    cout << count << endl;
//    return 0;
//}


//
//#include<iostream>
//#include<string>
//using namespace std;
//int getLen(string str, int low, int high)
//{    //中心扩展法
//    while (low >= 0 && high < str.length() && str[low] == str[high])
//    {
//        low--;
//        high++;
//    }
//    return high - low - 1;
//}
//int main() {
//    string str;    //存放输入的字符串
//    while (getline(cin, str))
//    {    //获取输入的一行字符串
//        int length = str.length();    //length为字符串的长度
//        if (length == 0 || length == 1)
//        {    //如果字符串长度为小于等于1，直接输出字符串的长度
//            cout << length << endl;
//            continue;
//        }
//        else
//        {    //如果字符串的长度大于1
//            int len = 0;    //len为最长回文子串的长度
//            for (int i = 0; i < length - 1; i++)
//            {    //循环计算每个中心点下的最长回文子串
//                int x = getLen(str, i, i);    //单中心回文子串长度
//                int y = getLen(str, i, i + 1);    //双中心回文子串的长度
//                len = max(max(x, y), len);
//            }
//            cout << len << endl;
//        }
//    }
//    return 0;
//}

//class Solution {
//public:
//    TreeNode* Mirror(TreeNode* pRoot) {
//        if (pRoot == NULL)
//            return NULL;
//
//        TreeNode* left = Mirror(pRoot->left);
//        TreeNode* right = Mirror(pRoot->right);
//        pRoot->left = right;
//        pRoot->right = left;
//        return pRoot;
//    }
//};

