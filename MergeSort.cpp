////
//// Created by jeevan on 4/25/17.
////
//#include <iostream>
//using namespace std;
//
//void merge(int a[], int helper[], int low, int mid, int high) {
//
//    for(int i = low; i <= high; i++)
//        helper[i]= a[i];
//
//    int left = low, right = mid + 1, curr = low;
//
//    while(left <= mid && right <= high) {
//
//        if(helper[left] <= helper[right])
//            a[curr++] = helper[left++];
//        else
//            a[curr++] = helper[right++];
//    }
//
//    while(left <= mid)
//        a[curr++] = helper[left++];
//}
//
//void mergeSort(int a[], int helper[], int low, int high) {
//
//    if(low < high) {
//        int mid = (low + high) / 2;
//        mergeSort(a, helper, low, mid);
//        mergeSort(a, helper, mid + 1, high);
//        merge(a, helper, low, mid, high);
//    }
//
//}
//
//void mergeSort(int a[], int n) {
//    int helper[n];
//    mergeSort(a, helper, 0, n - 1);
//}
//
//void swap(int& a, int& b) {
//    int tmp = a;
//    a = b;
//    b = tmp;
//}
//
//int partition(int a[], int p, int r) {
//
//    int x = a[r], j = p - 1;
//
//    for(int i = p; i < r; i++) {
//
//        if(a[i] <= x)
//            swap(a[++j], a[i]);
//
//    }
//
//    swap(a[j + 1], a[r]);
//    return j + 1;
//
//}
//
//void quickSort(int a[], int p, int r) {
//    if(p < r) {
//
//        int q  = partition(a, p, r);
//        quickSort(a, p, q - 1);
//        quickSort(a, q + 1, r);
//
//    }
//
//}
//
//void quickSort(int a[], int n) {
//
//    quickSort(a, 0, n - 1);
//}
//
//void insertSort(int a[], int n) {
//
//    for(int i = 1; i < n; i++) {
//
//        int j = i - 1, x = a[i];
//
//        while(j >= 0 && a[j] > x) {
//            a[j + 1] = a[j];
//            j--;
//        }
//
//        a[j + 1] = x;
//
//    }
//}
//
//
//int main() {
//
//    int a[] = {8, 4, 6, 9, 1, 3};
//    int n = sizeof(a) / sizeof(a[0]);
//
//    int i = 0, j = n - 1;
////    mergeSort(a, n);
//
////    swap(a[i++], a[j]);
////    quickSort(a, n);
//    insertSort(a, n);
//
//    for(int i = 0; i < n; i++)
//        cout << a[i] << " ";
//
//
//
//}
//
