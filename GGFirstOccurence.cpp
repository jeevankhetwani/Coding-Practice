////
//// Created by jeevan on 3/20/17.
////
//#include <iostream>
//
//using namespace std;
//
//int find(int arr[], int low, int high) {
//
//    if (low > high)
//        return -1;
//
//    if (low==high)
//        return low;
//
//    // Find the middle point
//    int mid = (low + high) / 2;
//
//    // If mid is even and element next to mid is
//    // same as mid, then output element lies on
//    // right side, else on left side
//    if (mid%2 == 0)
//    {
//        if (arr[mid] == arr[mid+1])
//            find(arr, mid+2, high);
//        else
//            find(arr, low, mid);
//    }
//    else  // If mid is odd
//    {
//        if (arr[mid] == arr[mid-1])
//            find(arr, mid + 1, high);
//        else
//            find(arr, low, mid-1);
//    }
//}
//
//
//int find(int a[], int n) {
//    return find(a, 0, n - 1);
//}
//
//int main() {
//
//    int arr[] = {1, 1, 2, 2, 4, 4, 6, 6, 7, 7, 8, 9, 9};
//    int len = sizeof(arr)/sizeof(arr[0]);
//    int index =  find(arr, len);
//    cout << arr[index];
//
//    return 0;
//}
