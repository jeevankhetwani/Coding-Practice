////
//// Created by jeevan on 2/25/17.
////
//#include <iostream>
//#include <vector>
//#include "MinHeap.h"
//
//#define rep(i, n) for(int i = 0; i < n; i++)
//#define fi(i, a, b) for(int i = a; i <= b; i++)
//
//using namespace std;
//
//int main() {
//
//    int n, k;
//    cin >> n >> k;
//
//    int *a = new int[n];
//    int *temp = new int[k + 1];
//    int *result = new int[n];
//
//    rep(i, n)
//        cin >> a[i];
//
//    rep(i, k+1)
//        temp[i] = a[i];
//
//    MinHeap hp(temp, k+1);
//    hp.buildHeap();
//
//    int index = 0;
//
//    for(int i = k + 1; index < n; index++) {
//
//        if(i < n) {
//            result[index] = hp.replaceMin(a[i]);
//            i++;
//        }
//        else
//            result[index] = hp.extractMin();
//    }
//
//    rep(i, n)
//        cout << result[i] << " ";
//    return 0;
//}
