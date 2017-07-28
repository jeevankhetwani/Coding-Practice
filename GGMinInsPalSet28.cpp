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
//int minIns(string s, int start, int end) {
//
//    if( start >= end)
//        return 0;
//
//    if(s[start] == s[end])
//        return minIns(s, start + 1, end - 1);
//
//    return 1 + min( minIns(s, start, end - 1), minIns(s, start + 1, end) );
//}
//
//int minIns(string s) {
//
//    int n = s.length();
//    int c[n][n];
//
//    rep(i, n)
//        rep(j, n)
//            c[i][j] = 0;
//
//    fd(i, n - 2, 0)
//    fi(j, i + 1, n - 1) {
//
//        if(s[i] == s[j])
//            c[i][j] = c[i + 1][j - 1];
//
//        else
//            c[i][j] = 1 + min( c[i + 1][j], c[i][j - 1] );
//    }
//
//    return c[0][n - 1];
//}
//
//
//int main() {
//
//    string s = "abcde";
////    cout << minIns(s, 0, s.length() - 1);
//    cout << minIns(s);
//    return 0;
//}
