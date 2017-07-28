////
//// Created by jeevan on 5/14/17.
////
//#include <iostream>
//#include <queue>
//#include <stack>
//using namespace std;
//
//int findPeakUtil(int a[], int low, int high) {
//
//    if(low == high)
//        return low;
//
//    int mid = ( low + high ) / 2;
//
//    if( ( mid == 0 || a[mid] >= a[mid - 1] ) && ( a[mid] >= a[high] ) )
//        return mid;
//
//    if( mid && a[mid] < a[mid - 1] )
//        return findPeakUtil(a, low, mid - 1);
//
//    return findPeakUtil(a, mid + 1, high);
//}
//
//int findPeak(int a[], int n) {
//
//    return findPeakUtil(a, 0, n - 1);
//}

//int main() {
//
//
////    int a[] = {1, 3, 20, 4, 1, 0};
////    int n = sizeof(a) / sizeof(a[0]);
////
////    cout << a[findPeak(a, n)];
//
////    int n = 85;
////
////    int *a = new int[n];
////    for(int i = 0; i < n; i++)
////        cin >> a[i];
////
////    cout << findPeak(a, n);
//return 0;
//}
