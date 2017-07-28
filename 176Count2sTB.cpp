////
//// Created by jeevan on 1/15/17.
////
//#include<iostream>
//#include<cmath>
//
////using namespace std;
//
//int count(int n, int d) {
//
//    int powOf10 = (int) pow(10, d);
//    int nextPowOf10 = powOf10 * 10;
//
//    int right = n % powOf10;
//
//    int roundDown = n - n % nextPowOf10;
//    int roundUp = roundDown + nextPowOf10;
//
//    int digit = ( n / powOf10 ) % 10;
//
//    if ( digit < 2 )
//        return roundDown / 10;
//    else if ( digit > 2 )
//        return roundUp / 10;
//    else
//        return roundDown / 10 + right + 1;
//}
//
//int count(int n) {
//
//    int cnt = 0;
//    int len = std::to_string(n).size();
//
//    for (int i = 0; i < len; i++) {
//        cnt += count(n, i);
//    }
//    return cnt;
//}
//
//int main() {
//
//    std::cout << count(255);
//    return 0;
//
//}
//
