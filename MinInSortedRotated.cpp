////
//// Created by jeevan on 3/20/17.
////
//#include <iostream>
//using namespace std;
//
//int findMin(int a[], int low, int high) {
//
//    if(low > high)
//        return a[0];
//
//    if(low == high)
//        return a[low];
//
//    int mid = ( low + high ) / 2;
//
//    if ( a[mid] > a[mid + 1])
//        return a[mid + 1];
//
//    if( mid > 0 && a[mid - 1] > a[mid] )
//        return a[mid];
//
//    if( a[mid] < a[high] )
//        return findMin(a, low, mid - 1);
//
//    return findMin(a, mid + 1, high);
//
//}
//
//int findMyMin(int a[], int low, int high) {
//
//    if(low == high)
//        return a[low];
//
//    if(low == high - 1)
//        return min(a[low], a[high]);
//
//    int mid = (low + high) / 2 ;
//
//    if( a[low] <= a[mid] && a[mid] <= a[high])
//        return findMyMin(a, low, mid - 1);
//
//    return findMyMin(a, mid, high);
//
//}
//
//int find(int arr[], int key, int l, int h) {
//
//    if (l > h) return -1;
//
//    int mid = (l+h)/2;
//    if (arr[mid] == key) return mid;
//
//    /* If arr[l...mid] is sorted */
//    if (arr[l] <= arr[mid])
//    {
//        /* As this subarray is sorted, we can quickly
//           check if key lies in half or other half */
//        if (key >= arr[l] && key <= arr[mid])
//            return find(arr, l, mid-1, key);
//
//        return find(arr, mid+1, h, key);
//    }
//
//    /* If arr[l..mid] is not sorted, then arr[mid... r]
//       must be sorted*/
//    if (key >= arr[mid] && key <= arr[h])
//        return find(arr, mid+1, h, key);
//
//    return find(arr, l, mid-1, key);
//}
//
//int main() {
//
//    int arr[] =  {1, 2, 3, 4, 5, 6, 7, 8};
//    int n = sizeof(arr)/sizeof(arr[0]);
//
////    cout << find(arr, 3, 0, n - 1);
//
//    cout << findMyMin(arr, 0, n - 1);
//
////    printf("The minimum element is %d\n", findMin(arr1, 0, n-1));
//    return 0;
//}
