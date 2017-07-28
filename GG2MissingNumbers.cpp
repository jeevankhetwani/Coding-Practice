////
//// Created by jeevan on 3/24/17.
////
//#include <iostream>
//
//#define rep(i, n) for(int i = 0; i < n; i++)
//#define fi(i, a, b) for(int i = a; i <= b; i++)
//#define fd(i, a, b) for(int i = a; i >= b; i--)
//
//using namespace std;
//
//int a[1000001];
//
//void find(int n) {
//
//    int xor1 = 0;
//
//    rep(i, n)
//        xor1 ^= a[i];
//
//    int last_set_bit = xor1 & ~(xor1 - 1);
//
//    int x = 0, y = 0;
//
//    rep(i, n)
//        if(a[i] & last_set_bit)
//            x ^= a[i];
//        else
//            y ^= a[i];
//
//    x > y ? cout << y << " " << x : cout << x << " " << y;
//    cout << endl;
//
//}
//
//void test() {
//    int n;
//    cin >> n;
//
//    n = 2 * n + 2;
//
//    rep(i, n)
//        cin >> a[i];
//
//    find(n);
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
