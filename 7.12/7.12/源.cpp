#include<iostream>
using namespace std;

//int main()
//{
//	//char s[] = "china"; 
//	//const char* p = "china";
//	
//

//
//#include<stdio.h>
//int main()
//{
//	static char* s[] = { "black", "white", "pink", "violet" };
//	char** ptr[] = { s + 3, s + 2, s + 1, s }, *** p;
//	p = ptr;
//	++p;
//	printf("%s", **p + 1);
//	return 0;
//}
//
//bool CheckPermutation(char* s1, char* s2) {
//    if (s1 == NULL && s2 == NULL)
//        return true;
//
//    if (s1 == NULL || s2 == NULL)
//        return false;
//    int table1[256] = { 0 }, table2[256] = { 0 };
//    int len1 = strlen(s1), len2 = strlen(s2);
//    for (int i = 0; i < len1; i++)
//        table1[s1[i]]++
//        for (int i = 0; i < len2; i++)
//            table2[s2[i]]++;
//    for (int i = 0; i < 256; i++)
//    {
//        if (table1[i] != table2[i])
//            return false;
//    }
//    return true;
//}
//
//bool canPermutePalindrome(char* s) {
//    if (s == NULL)
//    {
//        return true;
//    }
//
//    int table[256] = { 0 };
//    int len = strlen(s);
//    for (int i = 0; i < len; i++)
//    {
//        table[s[i]]++;
//    }
//
//    //字符串是否只由1个字符组成
//    if (table[s[0]] == len)
//    {
//        return true;
//    }
//
//    int count = 0;//记录只出现奇数次的字符个数
//    for (int i = 0; i < 256; ++i)
//    {
//        if (table[i] % 2 == 1)
//        {
//            count++;
//            if (count > 1)
//            {
//                return false;
//            }
//        }
//    }
//    return true;
//
//}
//
//#include<iostream>
//#include<algorithm>
//using namespace std;
///*
//    getLuckyPacket:从当前位置开始搜索符合要求的组合，一直搜索到最后一个位置结束
//    x[]: 袋子中的所有球
//    n:   球的总数
//    pos: 当前搜索的位置
//    sum: 到目前位置的累加和
//    multi: 到目前位置的累积值
//*/
//int getLuckyPacket(int x[], int n, int pos, int sum, int multi) {
//    int count = 0;
//    //循环，搜索以位置i开始所有可能的组合
//    for (int i = pos; i < n; i++) {
//        sum += x[i];
//        multi *= x[i];
//        if (sum > multi) {
//            //找到符合要求的组合，加1，继续累加后续的值，看是否有符合要求的集合
//            count += 1 + getLuckyPacket(x, n, i + 1, sum, multi);
//        }
//        else if (x[i] == 1) {
//            //如何不符合要求，且当前元素值为1，则继续向后搜索
//            count += getLuckyPacket(x, n, i + 1, sum, multi);
//        }
//        else {
//            //如何sum大于multi,则后面就没有符合要求的组合了
//            break;
//        }
//        //要搜索下一个位置之前，首先恢复sum和multi
//        sum -= x[i];
//        multi /= x[i];
//        //数字相同的球，没有什么区别，都只能算一个组合，所以直接跳过
//        while (i < n - 1 && x[i] == x[i + 1]) {
//            i++;
//        }
//    }
//    return count;
//}
//int main() {
//    int n;
//    while (cin >> n) {
//        int x[n];
//        for (int i = 0; i < n; i++) {
//            cin >> x[i];
//        }
//        sort(x, x + n);
//        //从第一个位置开始搜索
//        cout << getLuckyPacket(x, n, 0, 0, 1) << endl;
//    }
//    return 0;
//}
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//    int m = 0, n = 0;
//    cin >> m;
//    vector<int> n1(m, 0);
//    for (int i = 0; i < m; i++)
//    {
//        cin >> n1[i];
//    }
//    cin >> n;
//    vector<int> n2(n, 0);
//    for (int i = 0; i < n; i++)
//    {
//        cin >> n2[i];
//    }
//    
//    int max1 = n1[0], min1 = n1[0];
//    int max2 = n2[0], min2 = n2[0];
//    for (int i = 0; i < m; i++)
//    {
//        if (n1[i] < min1)
//        {
//            min1 = n1[i];
//        }
//
//        if (n1[i] > max1)
//        {
//            max1 = n1[i];
//        }
//    }
//
//    for (int i = 0; i < n; i++)
//    {
//        if (n2[i] < min2)
//        {
//            min2 = n2[i];
//        }
//
//        if (n2[i] > max2)
//        {
//            max2 = n2[i];
//        }
//    }
//
//    int min = min1 < min2 ? min1 : min2;
//    int max = max1 > max2 ? max1 : max2;
//    int range = max - min + 1;
//    vector<int> hash(range, 0);
//
//    for (int i = 0; i < m; i++)
//    {
//        hash[n1[i] - min]++;
//    }
//
//    for (int i = 0; i < n; i++)
//    {
//        hash[n2[i] - min]++;
//    }
//
//    for (int i = 0; i < hash.size(); i++)
//    {
//        if (hash[i])
//        {
//            cout << i + min;
//        }
//    }
//
//    return 0;
//}
//
//class Gloves {
//public:
//	int findMinimum(int n, vector<int> left, vector<int> right) {
//
//		int left_sum = 0, left_min = INT_MAX;
//		int right_sum = 0, right_min = INT_MAX;
//		int sum = 0;
//		//遍历每一种颜色的左右手套序列
//		for (int i = 0; i < n; i++) {
//			//对于有0存在的颜色手套，累加
//			if (left[i] * right[i] == 0)
//				sum += left[i] + right[i];
//			//对于左右手都有的颜色手套，执行累加-最小值+1
//			//找到最小值和总数
//			else {
//				left_sum += left[i];
//				right_sum += right[i];
//				left_min = min(left_min, left[i]);
//				right_min = min(right_min, right[i]);
//			}
//		}
//		//结果为有左右都有数量的手套序列的结果+有0存在的手套数+最后再加一肯定就能保证了
//		return sum + min(left_sum - left_min + 1, right_sum - right_min + 1) + 1;
//	}
//};

