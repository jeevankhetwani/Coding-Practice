////
//// Created by jeevan on 3/21/17.
////
//#include <iostream>
//#define rep(i, n) for(int i = 0; i< n; i++)
//using namespace std;
//
//void find(int a[], int n) {
//
//    int miss, rep;
//
//    rep(i, n)
//
//        if(a[abs(a[i]) - 1] > 0)
//            a[abs(a[i]) - 1] = -a[abs(a[i]) - 1];
//        else
//            rep = abs(a[i]);
//
//
//
//    rep(i, n)
//        if(a[i] > 0) {
//            miss = i + 1;
//            break;
//        }
//
//    printf("Rep: %d Miss: %d\n", rep, miss);
//}
//
//void find1(int a[], int n) {
//
//    int xor1 = 0, x = 0, y = 0;
//
//    rep(i, n) {
//        xor1 ^= a[i];
//        xor1 ^= i + 1;
//    }
//
//    int last_set_bit = xor1 & ~(xor1 - 1);
//
//    rep(i, n) {
//        if (a[i] & last_set_bit)
//            x ^= a[i];
//        else
//            y ^= a[i];
//
//        int j = i + 1;
//        if (j & last_set_bit)
//            x ^= j;
//        else
//            y ^= j;
//    }
//
//    printf("%d %d", x, y);
//}
//
//int main() {
//
//    int arr[] = {1, 3, 4, 5, 5, 6, 2};
//    int  n = sizeof(arr)/sizeof(arr[0]);
////    find(arr, n);
//    find1(arr, n);
//
//
//    return 0;
//}
