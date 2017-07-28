////
//// Created by jeevan on 1/30/17.
////
//#include <iostream>
//
//using namespace std;
//
//typedef unsigned long ul;
//typedef __uint128_t ull;
//
//
//bool makeCandiesPurchase(ull m, ull w, ul p, ul n) {
//
//    ull x1 = n, y1 = m * w;
//    ull x2 = n + p, y2 = m > w ? m * (w + 1) : (m + 1) * w;
//
//    return ( x2 * y1 ) < ( x1 * y2 );
//}
//
//ul makeCandies(ull m, ull w, ul p, ul n, ull can = 0, ul pass = 0) {
//
//    can += m * w;
//    pass++;
//
//    if (can < p && p < n) {
//        ul x = p - can, y = m * w;
//        ul incr = x / y + ( x % y > 0 ) ;
//        pass += incr;
//        can += m * w * incr;
//    }
//
//    if ( can >= n)
//        return pass;
//
//    while (can >= p && makeCandiesPurchase(m, w, p, n - can)) {
//        can -= p;
//        if (m < w) m++; else w++;
//    }
//
//    return makeCandies(m, w, p, n, can, pass);
//}
//
//int main() {
//
//    ul m, w, p, n;
//
//    cin >> m >> w >> p >> n;
//
//    ull m1 = m, w1 = w;
//
//
//    cout << makeCandies(m1, w1, p, n);
//
//    return 0;
//}
