//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//    int sum = 0;
//    string order;
//    cin >> sum >> order;
//    vector<int> song(sum);
//    for (int i = 0; i < sum; i++)
//    {
//        song[i] = i + 1;
//    }
//    int cursor = 0;//光标标记
//    int front = 0;//当前屏幕显示的起始下标
//    
//
//    for (int i = 0; i < order.length(); i++)
//    {
//        if (order[i] == 'U')
//        {
//            if (front == cursor)
//            {
//                front--;
//            }
//            cursor--;
//            if (cursor < 0)
//            {
//                cursor = sum - 1;
//                front = sum - 4;//sum - 1 - 3
//            }
//        }
//        else if (order[i] == 'D')
//        {
//            cursor++;
//            if (cursor - front == 4)
//            {
//                front++;
//            }
//            if (cursor > sum - 1)
//            {
//                cursor = 0;
//                front = 0;
//            }
//        }
//    }
//    if (sum <= 4)
//    {
//        for (int i = 0; i < sum; i++)
//        {
//            cout << song[i] << " ";
//        }
//    }
//    else
//    {
//        for (int i = front; i < front + 4; i++)
//        {
//            cout << song[i] << " ";
//        }
//    }
//    
//    cout << endl << cursor + 1 << endl;
//}


//
//#include<iostream>
//#include<vector>
//using namespace std;
//
//inline int GetCommonDivisor(int m, int n)
//{
//    while (m % n)
//    {
//        int t = m % n;
//        m = n;
//        n = t;
//    }
//    return n;
//}
//
//int main()
//{
//    int n = 0, initial = 0;
//    while (cin >> n >> initial)
//    {
//        vector<int> monster(n);
//        for (int i = 0; i < n; i++)
//        {
//            cin >> monster[i];
//        }
//
//        for (int i = 0; i < n; i++)
//        {
//            if (initial >= monster[i])
//            {
//                initial += monster[i];
//            }
//            else
//            {
//                int experience = GetCommonDivisor(monster[i], initial);
//                initial += experience;
//            }
//        }
//        cout << initial << endl;
//    }
//    return 0;
//}

//
//#include <stdio.h> 
//#define a 10 
//void foo(); 
//int main() 
//{
//	printf("%d..", a);
//	foo();
//	printf("%d", a);
//	return 0;
//}
//void foo() 
//{
//	#undef a #define a 50
//}
//
//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int k = 0, n = 0;
//    cin >> n;
//    while (n--)
//    {
//        cin >> k;
//        if (k < 3)
//        {
//            if (k == 1)
//            {
//                cout << "1" << endl;
//            }
//            else if (k == 2)
//            {
//                cout << "2" << endl;
//            }
//        }
//        else
//        {
//            int sum = k - 2;
//            int a1 = 1;
//            int a2 = 2;
//            int a3 = 0;
//            while (sum--)
//            {
//                a3 = 2 * a2 + a1;
//                a1 = a2;
//                a2 = a3;
//            }
//            cout << a3 % 32767 << endl;
//        }
//        
//    }
//    return 0;
//}
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//    string str;
//    getline(cin, str);
//    int sum_symbol = 0;
//    int sum_space = 0;
//    int sum_digital = 0;
//    int sum_other = 0;
//    for (int i = 0; i < str.length(); i++)
//    {
//        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
//        {
//            sum_symbol++;
//        }
//        else if (str[i] >= '1' && str[i] <= '9')
//        {
//            sum_digital++;
//        }
//        else if (str[i] == ' ')
//        {
//            sum_space++;
//        }
//        else
//        {
//            sum_other++;
//        }
//    }
//    cout << sum_symbol << endl << sum_space << endl << sum_digital << endl << sum_other
//        << endl;
//    return 0;
//}

//
//int* runningSum(int* nums, int numsSize, int* returnSize) {
//    int* ret = (int*)malloc(sizeof(int) * numsSize);
//    memset(ret, 0, sizeof(int) * numsSize);
//    for (int i = 0; i < numsSize; i++)
//    {
//        ret[i] += nums[i];
//        if (i + 1 < numsSize)
//        {
//            ret[i + 1] = ret[i];
//        }
//    }
//    *returnSize = numsSize;
//    return ret;
//}

//int searchInsert(int* nums, int numsSize, int target)
//{
//    int left = 0, right = numsSize - 1, ret = numsSize;
//    while (left <= right)
//    {
//        int mid = (right + left) / 2;
//        if (target <= nums[mid])
//        {
//            ret = mid;
//            right = mid - 1;
//        }
//        else
//        {
//            left = mid + 1;
//        }
//    }
//    return ret;
//}
//


