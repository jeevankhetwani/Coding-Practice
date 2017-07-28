////
//// Created by jeevan on 1/2/17.
////
//#include<iostream>
//using namespace std;
//
//int change(int n, int *num, int max) {
//    int x = 0;
//
//    if ( n < 0 )
//        return 0;
//
//    if( n == 0 )
//        return 1;
//
//    switch (max) {
//        case 25:
//            x += change(n-25, num, 25);
//        case 10:
//            x += change(n-10, num, 10);
//        case 5:
//            x += change(n-5, num, 5);
//        case 1:
//            x += change(n-1, num, 1);
//            break;
//    }
//
//    num[n] = x;
//
//    return num[n];
//
//}
//
//int change(int n) {
//    int *num = new int[n+1];
//    change(n, num, 25);
//    return num[n];
//}
//
//
//int main() {
//
//    cout << change(50);
//    return 0;
//}
