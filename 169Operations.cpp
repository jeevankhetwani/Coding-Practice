////
//// Created by jeevan on 1/9/17.
////
//#include<iostream>
//
//using namespace std;
//
//int mynegate(int x) {
//    return ~x + 1;
//}
//
//int diff(int x, int y) {
//   return x + mynegate(y);
//}
//
//int multHelper(int x, int y) {
//
//    if(y == 0)
//        return 0;
//
//    int temp = multHelper(x, abs(y) / 2);
//
//    temp += temp;
//
//    if( abs(y) % 2 != 0)
//        temp += x;
//
//    return temp;
//}
//
//int mult(int x, int y) {
//    int v = multHelper(x, abs(y));
//
//    if (y < 0)
//        return mynegate(v);
//
//    return v;
//}
//
//int divide(int x, int y) {
//
//    int val, stepV, stepK, k;
//
//    val = 0, k = 0;
//    stepK = 1, stepV = y;
//
//    while (val + stepV <= x) {
//
//        while ( (val + stepV + stepV) <= x) {
//            stepK += stepK;
//            stepV += stepV;
//        }
//
//        val += stepV;
//        k += stepK;
//
//        stepK = 1, stepV = y;
//    }
//
//    return k;
//}
//
//
//int main() {
//
//    cout << divide(151451, 25);
//    return 0;
//
//}