////
//// Created by jeevan on 1/3/17.
////
//#include<iostream>
//
//using namespace std;
//
//void merge(int *a, int *helper, int low, int middle, int high) {
//
//    for (int i = low; i <= high; i++)
//        helper[i] = a[i];
//
//    int left = low, right = middle + 1, curr = low;
//
//    while (left <= middle && right <= high) {
//        if (helper[left] <= helper[right])
//            a[curr++] = helper[left++];
//        else
//            a[curr++] = helper[right++];
//    }
//
//    for (int i = 0; i <= middle - left; i++)
//        a[curr + i] = helper[left + i];
//}
//
//
//void mergesort(int *a, int *helper, int low, int high) {
//
//    if (low < high) {
//        int middle = (low  + high) / 2;
//        mergesort(a, helper, low, middle);
//        mergesort(a, helper, middle + 1, high);
//        merge(a, helper, low, middle, high);
//    }
//
//}
//
//
//void mergesort(int* a, int n) {
//    int *helper = new int[n];
//    mergesort(a, helper, 0, n-1);
//}
//
//int main() {
//    int n = 100;
//    int *a = new int[n];
//
//    for (int i = 0; i < n; i++)
//        a[i] = n - i;
//
//    mergesort(a, n);
//    for (int i = 0; i < n; i++)
//        cout << a[i] << " ";
//
//    return 0;
//}