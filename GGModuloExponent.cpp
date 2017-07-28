////
//// Created by jeevan on 3/25/17.
////
//#include <iostream>
//
//#define rep(i, n) for(int i = 0; i < n; i++)
//#define fi(i, a, b) for(int i = a; i <= b; i++)
//#define fd(i, a, b) for(int i = a; i >= b; i--)
//
//using namespace std;
//
//typedef unsigned long int ul;
//
//ul power(ul A, int b, int c) {
//
//    if( b == 0 )
//        return 1;
//
//    ul mid = power(A, b / 2, c);
//
//    ul result = ( mid * mid ) % c;
//
//    if( b % 2 != 0)
//        result = ( result * A ) % c;
//
//    return result;
//}
//
//void test() {
//
//    int a, b, c;
//    cin >> a >> b >> c;
//
//    ul A = a % c;
//
//    cout << power(A, b, c) << endl;
//}
//
//int main() {
//
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
//
