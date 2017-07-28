////
//// Created by jeevan on 3/22/17.
////
//#include <iostream>
//
//#define rep(i, n) for(int i = 0; i < n; i++)
//#define fi(i, a, b) for(int i = a; i <= b; i++)
//#define fd(i, a, b) for(int i = a; i >= b; i--)
//
//using namespace std;
//
//int findCeil(int a[], int n, int x) {
//
//    if(x <= a[0])
//        return 0;
//
//    if( x > a[n - 1])
//        return -1;
//
//    int low = 0, high = n - 1;
//
//    while ( low < high ) {
//
//        int mid = ( low + high ) / 2;
//
//        if( a[mid] < x )
//            low = mid + 1;
//        else
//            high = mid;
//    }
//
//    return low;
//}
//
//int findFloor(int a[], int n, int x) {
//
//    if(x < a[0])
//        return -1;
//
//    if( x >= a[n - 1])
//        return n - 1;
//
//    int low = 0, high = n - 1;
//
//    while ( low < high ) {
//
//        int mid = ( low + high + 1) / 2;
//
//        if( a[mid] > x )
//            high = mid - 1;
//        else
//            low = mid;
//    }
//
//    return low;
//}
//
//int main() {
//
//    int arr[] = {1, 4, 8, 10, 10, 12, 19};
//    int n = sizeof(arr) / sizeof(arr[0]);
//    int x = 18;
//    int index = findCeil(arr, n, x);
//
//    if(index == -1)
//        cout << "Not found";
//    else
//        cout << arr[index];
//    cout << endl;
//
//    int index1 = findFloor(arr, n, x);
//
//    if(index1 == -1)
//        cout << "Not found";
//    else
//        cout << arr[index1];
//
//    return 0;
//}