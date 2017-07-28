////
//// Created by jeevan on 2/10/17.
////
//#include <iostream>
//#define rep(i, n) for(int i = 0; i < n; i++)
//#define fi(i, a, b) for(int i = a; i <= b; i++)
//#define fd(i, a, b) for(int i = a; i >= b; i--)
//typedef unsigned long ul;
//using namespace std;
//
//int n;
//ul a[100005];
//
//template <class T>
//void myswap(T& a, T& b) {
//    T temp = a;
//    a = b;
//    b = temp;
//}
//
//int main() {
//
//    cin >> n;
//    rep(i, n)
//        cin >> a[i];
//
//    ul swapCount = 0l;
//
//    fd(i, n-1, 1) {
//        ul maxVal = a[0];
//        int maxIndex = 0;
//
//        fi(j, 1, i) {
//            if (a[j] < maxVal) {
//                maxVal = a[j];
//                maxIndex = j;
//            }
//        }
//
//        if(maxIndex != i) {
//            myswap(a[i], a[maxIndex]);
//            swapCount++;
//        }
//
//    }
//
//    cout << swapCount;
//    return 0;
//}
//
//
