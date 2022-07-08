//#include<iostream>
//#include<cmath>
//using namespace std;
//
//int main()
//{
//    int m = 0;
//    cin >> m;
//    int fib1 = 0;
//    int fib2 = 1;
//    int fib3 = 1;
//    int ret1 = 0;
//    while (m > fib3)
//    {
//        fib3 = fib1 + fib2;
//        fib1 = fib2;
//        fib2 = fib3;
//        ret1 = abs(m - fib3);
//    }
//    int ret2 = abs(m - fib1);
//    if (ret1 < ret2)
//    {
//        cout << ret1;
//    }
//    else
//    {
//        cout << ret2;
//    }
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main() {
//    int a, b;
//    cin >> a >> b;
//    int m = 1;
//    while (1) {
//        if (m % a == 0 && m % b == 0)
//            break;
//        m++;
//    }
//    cout << m;
//    return 0;
//}
//
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//int main() {
//    int n = 0;
//    cin >> n;
//    vector<string> str;
//    str.resize(n);
//    bool lsort = true, csort = true;
//    for (int i = 0; i < n; i++) {
//        cin >> str[i];
//    }
//
//    for (int i = 1; i < n; i++) {
//        if (str[i - 1].size() > str[i].size()) {
//            lsort = false;
//            break;
//        }
//    }
//    for (int i = 1; i < n; i++) {
//        if (str[i - 1] > str[i]) {
//            csort = false;
//            break;
//        }
//    }
//    if (lsort && csort) {
//        cout << "both" << endl;
//    }
//    else if (lsort) {
//        cout << "lengths" << endl;
//    }
//    else if (csort) {
//        cout << "lexicographically" << endl;
//    }
//    else {
//        cout << "none" << endl;
//    }
//    return 0;
//}

//class UnusualAdd {
//public:
//    int addAB(int A, int B) {
//        // write code here
//        if (A == 0) return B;
//        if (B == 0) return A;
//        int a = A ^ B;
//        int b = (A & B) << 1;
//        return addAB(a, b);
//    }
//};

//#include <iostream>
//using namespace std;
//
//int patheNum(int n, int m) {
//    if (n == 0 || m == 0) return 1;
//
//    return patheNum(n - 1, m) + patheNum(n, m - 1);
//}
//
//int main() {
//    int n, m;
//    cin >> n >> m;
//    cout << patheNum(n, m) << endl;
//    return 0;
//}

//
//class Board {
//public:
//    bool checkWon(vector<vector<int> > board) {
//        int row = board.size();
//        int sum = 0;
//        for (int i = 0; i < row; i++) {
//            sum = 0;
//            for (int j = 0; j < row; j++) {
//                sum += board[i][j];
//            }
//            if (sum == row) {
//                return true;
//            }
//        }
//        for (int i = 0; i < row; i++) {
//            sum = 0;
//            for (int j = 0; j < row; j++) {
//                sum += board[j][i];
//            }
//            if (sum == row) {
//                return true;
//            }
//        }
//        sum = 0;
//        for (int i = 0; i < row; i++) {
//            sum += board[i][i];
//        }
//        if (sum == row) {
//            return true;
//        }
//        sum = 0;
//        for (int i = 0; i < row; i++) {
//            sum += board[i][row - i - 1];
//        }
//        if (sum == row) {
//            return true;
//        }
//        return false;
//    }
//};

//
//#include <iostream>
//#include <string>
//
//using namespace std;
//int score_count(string& str) {
//    int digit = 0, symbol = 0;
//    int lower = 0, upper = 0, charc = 0;
//    int size = 0, sum = 0;
//
//    for (auto ch : str) {
//        if (ch >= 'a' && ch <= 'z') {
//            lower++;
//            charc++;
//        }
//        else if (ch >= 'A' && ch <= 'Z') {
//            upper++;
//            charc++;
//        }
//        else if (ch >= '0' && ch <= '9') {
//            digit++;
//        }
//        else if ((ch >= 0x21 && ch <= 0x2F) ||
//            (ch >= 0x3A && ch <= 0x40) ||
//            (ch >= 0x5B && ch <= 0x60) ||
//            (ch >= 0x7B && ch <= 0x7E)) {
//            symbol++;
//        }
//    }
//    size = str.size();
//    if (size <= 4)
//        sum += 5;
//    else if (size <= 7)
//        sum += 10;
//    else
//        sum += 25;
//
//    if (lower > 0 && upper > 0)
//        sum += 20;
//    else if (lower == charc || upper == charc)
//        sum += 10;
//
//    if (digit == 1)
//        sum += 10;
//    else if (digit > 1)
//        sum += 20;
//
//    if (symbol == 1)
//        sum += 10;
//    else if (symbol > 1)
//        sum += 25;
//
//    if (lower > 0 && upper > 0 && digit > 0 && symbol > 0)
//        sum += 5;
//    else if ((lower > 0 || upper > 0) && digit > 0 && symbol > 0)
//        sum += 3;
//    else if ((lower > 0 || upper > 0) && digit > 0 && symbol == 0)
//        sum += 2;
//    return sum;
//}
//int main() {
//    string str;
//    while (cin >> str) {
//        int score = score_count(str);
//        if (score >= 90) {
//            cout << "VERY_SECURE" << endl;
//        }
//        else if (score >= 80) {
//            cout << "SECURE" << endl;
//        }
//        else if (score >= 70) {
//            cout << "VERY_STRONG" << endl;
//        }
//        else if (score >= 60) {
//            cout << "STRONG" << endl;
//        }
//        else if (score >= 50) {
//            cout << "AVERAGE" << endl;
//        }
//        else if (score >= 25) {
//            cout << "WEAK" << endl;
//        }
//        else {
//            cout << "VERY_WEAK" << endl;
//        }
//    }
//    return 0;
//}

//class LCA {
//public:
//    int getLCA(int a, int b) {
//        while (a != b) {
//            if (a > b) {
//                a /= 2;
//            }
//            if (a < b) {
//                b /= 2;
//            }
//            if (a == b) {
//                return b;
//            }
//        }
//        return b;
//    }
//};

//#include <iostream>
//using namespace std;
//
//int max(int x, int y) {
//    return x > y ? x : y;
//}
//
//int main() {
//    int n = 0;
//    int count = 0;
//    int maxcount = 0;
//    cin >> n;
//    while (n) {
//        if (n & 1) {
//            count++;
//            maxcount = max(maxcount, count);
//        }
//        else {
//            count = 0;
//        }
//        n = n >> 1;
//    }
//    cout << maxcount << endl;
//    return 0;
//}

//
//struct ListNode* MidNode(struct ListNode* head) {
//    struct ListNode* fast = head;
//    struct ListNode* slow = head;
//    while (fast && fast->next) {
//        fast = fast->next->next;
//        slow = slow->next;
//    }
//    return slow;
//}
//
//struct ListNode* ReverseList(struct ListNode* head) {
//    struct ListNode* newhead = NULL;
//    struct ListNode* cur = head;
//    while (cur) {
//        struct ListNode* next = cur->next;
//
//        cur->next = newhead;
//        newhead = cur;
//        cur = next;
//    }
//    return newhead;
//}
//
//bool isPalindrome(struct ListNode* head) {
//    if (head == NULL) {
//        return true;
//    }
//    struct ListNode* mid = MidNode(head);
//    struct ListNode* cur = ReverseList(mid);
//    while (cur) {
//        if (head->val != cur->val) {
//            return false;
//        }
//        cur = cur->next;
//        head = head->next;
//    }
//    return true;
//}

//void deleteNode(struct ListNode* node) {
//    struct ListNode* next = node->next;
//    node->val = next->val;
//    node->next = next->next;
//}

//
//void Reverse(int* a, int n) {
//    int begin = 0, end = n - 1;
//    while (begin < end) {
//        int tmp = a[begin];
//        a[begin] = a[end];
//        a[end] = tmp;
//        begin++;
//        end--;
//    }
//}
//
//int* reversePrint(struct ListNode* head, int* returnSize) {
//    struct ListNode* cur = head;
//    int size = 0;
//    while (cur) {
//        cur = cur->next;
//        size++;
//    }
//    cur = head;
//    *returnSize = size;
//    int* a = (int*)malloc(sizeof(int) * size);
//    int i = 0;
//    while (cur) {
//        a[i++] = cur->val;
//        cur = cur->next;
//    }
//    Reverse(a, size);
//    return a;
//}

//
//int getDecimalValue(struct ListNode* head) {
//    if (head == NULL) {
//        return 0;
//    }
//
//    int sum = 0;
//    struct ListNode* cur = head;
//    while (cur) {
//        sum = sum * 2 + cur->val;
//        cur = cur->next;
//    }
//    return sum;
//}

//
//struct ListNode* deleteNode(struct ListNode* head, int val) {
//    struct ListNode* cur = head;
//    struct ListNode* prev = NULL;
//    while (cur) {
//        struct ListNode* next = cur->next;
//        if (cur->val == val) {
//            if (prev == NULL) {
//                free(cur);
//                head = next;
//                cur = next;
//            }
//            else {
//                free(cur);
//                prev->next = next;
//                cur = next;
//            }
//        }
//        else {
//            prev = cur;
//            cur = next;
//        }
//    }
//    return head;
//}

//
//struct ListNode* getKthFromEnd(struct ListNode* head, int k) {
//    if (head == NULL) {
//        return NULL;
//    }
//
//    struct ListNode* fast = head;
//    while (k--) {
//        if (fast == NULL) {
//            return NULL;
//        }
//        fast = fast->next;
//    }
//
//    struct ListNode* slow = head;
//    while (fast) {
//        fast = fast->next;
//        slow = slow->next;
//    }
//    return slow;
//}

//
//struct ListNode* reverseList(struct ListNode* head) {
//    if (head == NULL) {
//        return NULL;
//    }
//
//    struct ListNode* cur = head;
//    struct ListNode* newhead = NULL;
//
//    while (cur) {
//        struct ListNode* next = cur->next;
//        cur->next = newhead;
//        newhead = cur;
//        cur = next;
//    }
//    return newhead;
//}

//
//struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
//    if (l1 == NULL && l2 == NULL) {
//        return NULL;
//    }
//
//    if (l1 == NULL) {
//        return l2;
//    }
//    else if (l2 == NULL) {
//        return l1;
//    }
//
//    struct ListNode* n1 = l1;
//    struct ListNode* n2 = l2;
//
//    struct ListNode* newhead = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* tail = newhead;
//
//    while (n1 && n2) {
//        if (n1->val < n2->val) {
//            tail->next = n1;
//            n1 = n1->next;
//        }
//        else {
//            tail->next = n2;
//            n2 = n2->next;
//        }
//        tail = tail->next;
//    }
//
//    if (n1) {
//        tail->next = n1;
//    }
//    if (n2) {
//        tail->next = n2;
//    }
//
//    struct ListNode* ret = newhead->next;
//    free(newhead);
//    newhead = NULL;
//    return ret;
//}
//
//struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB) {
//    if (headA == NULL || headB == NULL) {
//        return NULL;
//    }
//
//    struct ListNode* n1 = headA;
//    struct ListNode* n2 = headB;
//
//    int lenA = 0, lenB = 0;
//
//    while (n1) {
//        n1 = n1->next;
//        lenA++;
//    }
//    while (n2) {
//        n2 = n2->next;
//        lenB++;
//    }
//
//    int gap = abs(lenA - lenB);
//
//    struct ListNode* less = headA;
//    struct ListNode* longer = headB;
//    if (lenA > lenB) {
//        less = headB;
//        longer = headA;
//    }
//
//    while (gap--) {
//        longer = longer->next;
//    }
//
//    while (less && longer) {
//        if (less == longer) {
//            return less;
//        }
//        less = less->next;
//        longer = longer->next;
//    }
//    return NULL;
//}
//
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//bool IsPrime(int n) {
//    for (int i = 2; i < n; i++) {
//        if (n % i == 0) {
//            return false;
//        }
//    }
//    return true;
//}
//
//
//int main() {
//    int n = 0;
//    cin >> n;
//    int str[1000] = { 0 };
//    int i = 0;
//    for (int j = 2; j < n; j++) {
//        if (IsPrime(j)) {
//            str[i++] = j;
//        }
//    }
//    int ret1 = 0, ret2 = 0;
//    int min = n;
//    for (int j = 0; j < i; j++) {
//        for (int m = 0; m < i; m++) {
//            if (str[j] + str[m] == n) {
//                if (min > abs(str[j] - str[m])) {
//                    min = abs(str[j] - str[m]);
//                    ret1 = str[m];
//                    ret2 = str[j];
//                }
//            }
//        }
//    }
//    if (ret1 > ret2) {
//        int tmp = ret1;
//        ret1 = ret2;
//        ret2 = tmp;
//    }
//    cout << ret1 << endl << ret2 << endl;
//    return 0;
//}

