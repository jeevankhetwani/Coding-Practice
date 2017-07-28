////
//// Created by jeevan on 3/25/17.
////
////
//// Created by jeevan on 3/25/17.
////
//#include <iostream>
//#include <queue>
//#include <cstring>
//
//#define rep(i, n) for(int i = 0; i < n; i++)
//#define fi(i, a, b) for(int i = a; i <= b; i++)
//#define fd(i, a, b) for(int i = a; i >= b; i--)
//
//using namespace std;
//
//const int N = 200;
//char s[N];
//
//void solve() {
//
//    int j = 0, n = strlen(s);
//
//    rep(i, n) {
//
//        if(s[i] == 'b')
//            continue;
//        else if (s[i] == 'c' && i!= 0 && s[i - 1] == 'a') {
//            j--;
//            continue;
//        }
//
//        s[j++] = s[i];
//    }
//
//    s[j] = '\0';
//
//}
//
//void test() {
//
//    scanf("%s", s);
//
//    solve();
//
//    printf("%s\n", s);
//}
//
//int main() {
//
//
//    int t ;
//
//    cin >> t;
//
//    rep(i, t)
//        test();
//
//    return 0;
//}
//
//
//
//
//
