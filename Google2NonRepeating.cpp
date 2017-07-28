////
//// Created by jeevan on 4/12/17.
////
//#include <iostream>
//using namespace std;
//
//typedef pair<int, int> mypair;
//
//
//int findMask(int x) {
//
////    int i = 0;
////    while(x) {
////        if(x & 1)
////            break;
////        x >>= 1;
////        i++;
////    }
////
////    return 1 << i;
//    return x & ~(x - 1);
//}
//
//
//mypair find(int a[], int n) {
//
//    int xor1 = 0, x = 0, y = 0;
//
//    for(int i = 0; i < n; i++)
//        xor1 ^= a[i];
//
//    int mask = findMask(xor1);
//
//    for(int i = 0; i < n; i++)
//        if(a[i] & mask)
//            x ^= a[i];
//        else
//            y ^= a[i];
//
//    return make_pair(x, y);
//}
//
//
//
//int main() {
//
//    int a[] = {2, 3, 7, 9, 11, 2, 3, 11};
//    int n = sizeof(a) / sizeof(a[0]);
//    mypair p =  find(a, n);
//    cout << p.first << " " << p.second;
//    return 0;
//}
