////
//// Created by jeevan on 3/25/17.
////
//#include <iostream>
//#include <queue>
//
//#define rep(i, n) for(int i = 0; i < n; i++)
//#define fi(i, a, b) for(int i = a; i <= b; i++)
//#define fd(i, a, b) for(int i = a; i >= b; i--)
//
//using namespace std;
//
//const int N = 70, M = 1e9 + 7;
//int a[N];
//
//int countOnes(int n) {
//
//    int count = 0;
//
//    while(n) {
//
//        if(n & 1)
//            count++;
//
//        n = n / 2;
//    }
//
//    return count;
//}
//
//int solve(int n) {
//
//    int result = 0;
//
//    rep(i, n)
//
//        fi(j, i + 1, n - 1)
//
//           result += countOnes(a[i] ^ a[j]);
//
//    return ( 2 * result ) % M;
//
//}
//
//void test() {
//
//    int n;
//    cin >> n;
//
//    rep(i, n)
//        cin >> a[i];
//
//    cout << solve(n);
//    cout << endl;
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
