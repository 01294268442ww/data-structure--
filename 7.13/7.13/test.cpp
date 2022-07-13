//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//    int n = 0;
//    cin >> n;
//    string str[n];
//    for (int i = 0; i < n; i++)
//    {
//        cin >> str[i];
//    }
//
//    for (int i = 0; i < n; i++)
//    {
//        if (str[i].length() >= 10)
//        {
//
//            cout << str[i][0];
//            cout << str[i].length() - 2;
//            cout << str[i][str[i].length() - 1] << endl;
//        }
//        else
//        {
//            cout << str[i] << endl;
//        }
//    }
//    return 0;
//}

//char* replaceSpaces(char* S, int length) {
//    int spaceNum = 0;
//    for (int i = 0; i < length; i++)
//    {
//        if (S[i] == ' ')
//        {
//            spaceNum++;
//        }
//    }
//
//    if (spaceNum == 0)
//    {
//        return S;
//    }
//
//    int newLength = length + spaceNum * 2;
//    S[newLength--] = '\0';
//    for (int i = length - 1; i >= 0; i--)
//    {
//        if (S[i] == ' ')
//        {
//            S[newLength--] = '0';
//            S[newLength--] = '2';
//            S[newLength--] = '%';
//        }
//        else
//        {
//            S[newLength--] = S[i];
//        }
//    }
//    return S;
//}


class Gloves {
public:
    int findMinimum(int n, vector<int> left, vector<int> right) {
        int left_sum = 0, left_min = INT_MAX;
        int right_sum = 0, right_min = INT_MAX;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (left[i] * right[i] == 0)
            {
                sum += left[i] + right[i];
            }
            else
            {
                left_sum += left[i];
                left_min = left_min < left[i] ? left_min : left[i];
                right_sum += right[i];
                right_min = right_min < right[i] ? right_min : right[i];
            }
        }
        return sum + min(left_sum - left_min + 1, right_sum - right_min + 1) + 1;
    }
};