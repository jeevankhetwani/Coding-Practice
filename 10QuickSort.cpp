////
//// Created by jeevan on 1/3/17.
////
//#include <iostream>
//using namespace std;
//
//void swap(int *a, int i, int j) {
//    int temp = a[j];
//    a[j] = a[i];
//    a[i] = temp;
//}
//
//
//int partition(int *a, int p, int r) {
//    int i =  p-1, x = a[r];
//
//    for (int j = p; j <= r; j++) {
//        if( a[j] <= x ) {
//            i++;
//            swap(a, i, j);
//        }
//    }
//
//    return i;
//}
//
//
////int partition(int *a, int left, int right) {
////    int pivot = a[(left + right) / 2];
////
////    while(left <= right) {
////
////        while(a[left] < pivot)
////            left++;
////
////        while(a[right] > pivot)
////            right--;
////
////        if (left <= right) {
////            swap(a, left, right);
////            left++;
////            right--;
////        }
////
////    }
////
////    return left;
////}
//
//void quickSort(int *a, int left, int right) {
//    if (left < right) {
//        int p = partition(a, left, right);
//        quickSort(a, left, p-1);
//        quickSort(a, p+1, right);
//    }
//
//}
//
////void quickSort(int *a, int left, int right) {
////    int p = partition(a, left, right);
////
////    if (left < p - 1)
////        quickSort(a, left, p-1);
////
////    if (p < right)
////        quickSort(a, p, right);
////}
//
//void quickSort(int *a, int n) {
//    quickSort(a, 0, n-1);
//}
//
//
//
//int main() {
//    int n = 7;
//    int *a = new int[n] {3, 7, 8, 5, 9, 15, 10};
//
////    for (int i = 0; i < n; i++)
////        a[i] = n - i;
//
//
//    quickSort(a, n);
//    for (int i = 0; i < n; i++)
//        cout << a[i] << " ";
//
//    return 0;
//}