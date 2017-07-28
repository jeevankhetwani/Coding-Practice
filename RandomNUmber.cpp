////
//// Created by jeevan on 4/16/17.
////
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int f() {
//
//    int x = rand() % 4;
//    return x != 0;
//}
//
//int g() {
//
//    static int count = 0;
//
//    int x = f();
//
//    if(x)
//        return 1;
//
//    count++;
//
//    if(count == 3) {
//        count = 0;
//        return 1;
//    }
//
//    return 0;
//
//}
//
//int g2() {
//
//    int a;
//    while(true) {
//        a = f();
//
//        if(a != f())
//            return a;
//    }
//}
//void check() {
//
//    int n = INT32_MAX, count1 = 0, count2 = 0;
//
//    for(int i = 0; i < n; i++)
//        if(g())
//            count2++;
//        else
//            count1++;
//
//    cout << count1 << " " << count2;
//}
//
//int random(int n) {
//
//    long int x = (int) pow(2.0, n);
//
//    int k = rand() % x;
//
//    return k == 0;
//}
//
//int random2(int n) {
//
//    for(int i = 0; i < n; i++)
//        if(rand() % 2 == 0)
//            return 0;
//
//    return 1;
//}
//
//void check3(int n) {
////  generate random 0 and 1 with prob(1) = 1 / 2^n;
//
//    int k = (int)pow(2.0, n), count0 = 0, count1 = 0;
//
//    for(int i = 0; i < k; i++)
//        if(random2(n))
//            count1++;
//        else
//            count0++;
//
//    cout << count0 << " " << count1;
//
//
//}
//
//int main() {
//
//    srand(time(NULL));
//
//    check3(15);
//    return 0;
//}
