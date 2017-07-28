////
//// Created by jeevan on 3/24/17.
////
//
//#include <iostream>
//#include <string>
//#include <stack>
//
//#define rep(i, n) for(int i = 0; i < n; i++)
//#define fi(i, a, b) for(int i = a; i <= b; i++)
//#define fd(i, a, b) for(int i = a; i >= b; i--)
//
//using namespace std;
//
//    int check(string s) {
//
//    int n = s.length();
//    int countLeft = 0, countRight = 0;
//
//    int start = 0, maxLen = 0, maxStart, currLen;
//
//    rep(i, n) {
//
//        if(s[i] == '(')
//            countLeft++;
//        else {
//
//            countRight++;
//
//            if(countLeft < countRight) {
//
//                currLen = 2 * countLeft;
//
//                if(maxLen < currLen) {
//                    maxLen = currLen;
//                    maxStart = start;
//                }
//
//                int j = start;
//                while(countLeft < countRight) {
//                    if(s[j] == '(')
//                        countLeft--;
//                    else
//                        countRight--;
//                    j++;
//                }
//
//                start = j;
//            }
//        }
//    }
//
//    currLen = 2 * min(countLeft, countRight);
//    if(maxLen < currLen) {
//        maxLen = currLen;
//        maxStart = start;
//    }
//
////    cout << s.substr(maxStart, maxLen);
//
//    return maxLen;
//
//}
//
//int check1(string s) {
//
//    int n = s.length(), maxLen = 0, start, currLen, maxStart;
//
//    stack<int> st;
//    st.push(-1);
//
//    rep(i, n) {
//
//        if(s[i] == '(')
//            st.push(i);
//
//        else  {
//            st.pop();
//
//            // Check if this length formed with base of
//            // current valid substring is more than max
//            // so far
//            if (!st.empty())
//                maxLen = max(maxLen, i - st.top());
//
//                // If stack is empty. push current index as
//                // base for next valid substring (if any)
//            else st.push(i);
//
//        }
//    }
//
//    return maxLen;
//}
//
//void test() {
//
//    string a;
//
//    cin >> a;
//
//    cout << check1(a) << endl;
//}
//
//int main() {
//
//    int t;
//    cin >> t;
//
//    rep(i, t)
//        test();
//
//    return 0;
//}
//
