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
//    //�ַ����Ƿ�ֻ��1���ַ����
//    if (table[s[0]] == len)
//    {
//        return true;
//    }
//
//    int count = 0;//��¼ֻ���������ε��ַ�����
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
//    getLuckyPacket:�ӵ�ǰλ�ÿ�ʼ��������Ҫ�����ϣ�һֱ���������һ��λ�ý���
//    x[]: �����е�������
//    n:   �������
//    pos: ��ǰ������λ��
//    sum: ��Ŀǰλ�õ��ۼӺ�
//    multi: ��Ŀǰλ�õ��ۻ�ֵ
//*/
//int getLuckyPacket(int x[], int n, int pos, int sum, int multi) {
//    int count = 0;
//    //ѭ����������λ��i��ʼ���п��ܵ����
//    for (int i = pos; i < n; i++) {
//        sum += x[i];
//        multi *= x[i];
//        if (sum > multi) {
//            //�ҵ�����Ҫ�����ϣ���1�������ۼӺ�����ֵ�����Ƿ��з���Ҫ��ļ���
//            count += 1 + getLuckyPacket(x, n, i + 1, sum, multi);
//        }
//        else if (x[i] == 1) {
//            //��β�����Ҫ���ҵ�ǰԪ��ֵΪ1��������������
//            count += getLuckyPacket(x, n, i + 1, sum, multi);
//        }
//        else {
//            //���sum����multi,������û�з���Ҫ��������
//            break;
//        }
//        //Ҫ������һ��λ��֮ǰ�����Ȼָ�sum��multi
//        sum -= x[i];
//        multi /= x[i];
//        //������ͬ����û��ʲô���𣬶�ֻ����һ����ϣ�����ֱ������
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
//        //�ӵ�һ��λ�ÿ�ʼ����
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
//		//����ÿһ����ɫ��������������
//		for (int i = 0; i < n; i++) {
//			//������0���ڵ���ɫ���ף��ۼ�
//			if (left[i] * right[i] == 0)
//				sum += left[i] + right[i];
//			//���������ֶ��е���ɫ���ף�ִ���ۼ�-��Сֵ+1
//			//�ҵ���Сֵ������
//			else {
//				left_sum += left[i];
//				right_sum += right[i];
//				left_min = min(left_min, left[i]);
//				right_min = min(right_min, right[i]);
//			}
//		}
//		//���Ϊ�����Ҷ����������������еĽ��+��0���ڵ�������+����ټ�һ�϶����ܱ�֤��
//		return sum + min(left_sum - left_min + 1, right_sum - right_min + 1) + 1;
//	}
//};

