////
//// Created by jeevan on 5/14/17.
////
//#include <iostream>
//using namespace std;
//
//int find(int a[], int n) {
//
//    int maxLen = 1, maxStart = 0, mx, mn;
//
//    for(int i = 0; i < n - 1; i++) {
//
//        mx = a[i], mn = a[i];
//
//        for (int j = i + 1; j < n; j++) {
//
//            mx = max(mx, a[j]);
//            mn = min(mn, a[j]);
//
//            if (j - i == mx - mn && maxLen < j - i + 1) {
//                maxStart = i;
//                maxLen = j - i + 1;
//            }
//        }
//    }
//
//    for(int i = maxStart, count = 0; count < maxLen; i++, count++)
//        cout << a[i] << " ";
//
//    return maxLen;
//
//}
//
//
//
//
//int main() {
//
//
//    int a[] = {13, 12, 11, 10, 11};
//    int n = sizeof(a) / sizeof(a[0]);
//
//    cout << find(a, n);
//
//    return 0;
//}
