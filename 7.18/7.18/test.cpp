//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//    string str;
//    cin >> str;
//    for (int i = str.length() - 1; i >= 0; i--)
//    {
//        cout << str[i];
//    }
//    return 0;
//
//}
//
//#include<iostream>
//#include<string>
//using namespace std;
//
//int FindMaxlen(string& less, string& longer)
//{
//    if (longer.length() < less.length())
//    {
//        string str = longer;
//        longer = less;
//        less = str;
//    }
//    int maxlen = 0, curlen = 0;
//    for (int i = 0; i < longer.length(); i++)
//    {
//        int curi = i;
//        for (int j = 0; j < less.length(); j++)
//        {
//            int curj = j;
//            if (longer[i] == less[j])
//            {
//                while (i < longer.length() && j < less.length() &&
//                    longer[i++] == less[j++])
//                {
//                    curlen++;
//                }
//                if (curlen > maxlen)
//                {
//                    maxlen = curlen;
//                }
//                curlen = 0; i = curi;
//            }
//            j = curj;
//        }
//
//    }
//    return maxlen;
//}
//
//int main()
//{
//    string str1, str2;
//    cin >> str1;
//    cin >> str2;
//    int max = FindMaxlen(str1, str2);
//    cout << max << endl;
//    return 0;
//}

