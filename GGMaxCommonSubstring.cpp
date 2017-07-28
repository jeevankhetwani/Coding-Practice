////
//// Created by jeevan on 3/19/17.
////
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//#define rep(i, n) for(int i = 0; i < n; i++)
//#define fi(i, a, b) for(int i = a; i <= b; i++)
//#define fd(i, a, b) for(int i = a; i >= b; i--)
//
//int check(string s1, string s2) {
//
//    if(s1.empty() || s2.empty())
//        return 0;
//
//    if(s1[0] != s2[0])
//        return 0;
//
//    return 1 + check(s1.substr(1), s2.substr(1));
//
//}
//
//int check2(string s1, string s2) {
//
//    int m = s1.length(), n = s2.length();
//
//    int c[m + 1][n + 1];
//
//    rep(j, n + 1)
//        c[0][j] = 0;
//
//    rep(i, m + 1)
//        c[i][0] = 0;
//
//    fi(i, 1, m)
//        fi(j, 1, n)
//            if(s1[i] != s2[j])
//                c[i][j] = 0;
//            else
//                c[i][j] = 1 + c[i - 1][j - 1];
//
//
//    int maxLen = INT32_MIN;
//
//    fi(i, 1, m)
//        fi(j, 1, n)
//            if(maxLen < c[i][j])
//                maxLen = c[i][j];
//
//    return maxLen;
//}
//
//int main() {
//
//    string s1 = "axbxcdx",
//            s2 = "abcd";
//
//    cout << check2(s1, s2);
//
//    return 0;
//}
//
//
