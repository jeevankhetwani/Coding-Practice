////
//// Created by jeevan on 3/21/17.
////
//#include <iostream>
//
//using namespace std;
//
//int findMin(int arr[], int low, int high)
//{
//    // This condition is needed to handle the case when array is not
//    // rotated at all
//    if (high < low)  return arr[0];
//
//    // If there is only one element left
//    if (high == low) return arr[low];
//
//    // Find mid
//    int mid = low + (high - low)/2; /*(low + high)/2;*/
//
//    // Check if element (mid+1) is minimum element. Consider
//    // the cases like {3, 4, 5, 1, 2}
//    if (mid < high && arr[mid+1] < arr[mid])
//        return arr[mid+1];
//
//    // Check if mid itself is minimum element
//    if (mid > low && arr[mid] < arr[mid - 1])
//        return arr[mid];
//
//    // Decide whether we need to go to left half or right half
//    if (arr[high] > arr[mid])
//        return findMin(arr, low, mid-1);
//    return findMin(arr, mid+1, high);
//}
//
//int findPivot(int a[], int n) {
//
//    int low = 0, high = n - 1;
//
//    while( low < high ) {
//
//        int mid = (low + high) / 2;
//
//        if( a[mid] > a[mid + 1])
//            return mid;
//
//        if( mid > 0 && a[mid - 1] > a[mid])
//            return mid - 1;
//
//        if ( a[mid] < a[high])
//            high = mid - 1;
//        else
//            low = mid + 1;
//
//    }
//
//    return n - 1;
//
//}
//
//int main() {
//
//    int a[] =  {5, 6, 7, 8, 9, 10, 11, 12};
//    int n = sizeof(a) / sizeof(a[0]);
//
////    cout << findPivot(a, n);
//    cout << findMin(a, 0, n - 1);
//    return 0;
//}
