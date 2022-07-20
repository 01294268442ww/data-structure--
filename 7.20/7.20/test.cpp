//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//    int T = 0;
//    cin >> T;
//
//    while (T--)
//    {
//        int n = 0, k = 0;
//        cin >> n >> k;
//        vector<int> str_left;
//        vector<int>str_right;
//        str_left.resize(n);
//        str_right.resize(n);
//        for (int i = 0; i < 2 * n; i++)
//        {
//            if (i < n)
//                cin >> str_left[i];
//            else
//                cin >> str_right[i-n];
//        }
//        vector<int> out; int j = 0;
//        out.resize(2 * n);
//        for (int i = n - 1; i >= 0; i--)
//        {
//            out[j++] = str_right[i];
//            out[j++] = str_left[i];
//        }
//        for (int i = 0; i < out.size(); i++)
//        {
//            cout << out[i];
//        }
//        cout << endl;
//    }
//}

//
//
//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//    int T = 0;
//    cin >> T;
//    while (T--)
//    {
//        int n = 0, k = 0;
//        cin  >> n >> k;
//        int num = 2  * n;
//        vector<int> card_left(n);
//        vector<int> card_rigth(n);
//        for (int i = 0; i < num; ++i)
//        {
//            if (i < n)
//                cin >> card_left[i];
//            else
//                cin >> card_rigth[i - n];
//        }
//        
//        vector<int> out(num); int j = 0;
//
//        for (int i = n - 1; i >= 0; i--)
//        {
//            out[j++] = card_rigth[i];
//            out[j++] = card_left[i];
//        }
//
//        for (int i = 0; i < j; i++)
//        {
//            cout << out[i] << " ";
//        }
//        cout << endl;
//    }
//    return 0;
//}


//
//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main() 
//{
//    int T = 0;
//    cin >> T;
//    while (T--) 
//    {
//        int n = 0, k = 0;
//        cin >> n >> k;
//        int sum = 2 * n;
//        vector<int> card(sum);
//        for (int i = 0; i < sum; ++i) 
//        {
//            cin >> card[i];
//        } 
//
//        for (int i = 0; i < k; i++)
//        {
//            vector<int> tmp(card.begin(), card.end());//拷贝card
//            for (int j = 0; j < n; j++)
//            {
//                card[2 * j] = tmp[j];//洗牌之后左手牌在偶数位
//                card[2 * j + 1] = tmp[j + n];//右手牌在奇数位,左右手牌间隔n
//            }
//        }
//        for (int i = 0; i < sum; i++)
//        {
//            cout << card[i] << " ";
//        }
//        cout << endl;
//    }
//    return 0;
//}




