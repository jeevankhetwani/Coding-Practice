////
//// Created by jeevan on 1/4/17.
////
//#include <iostream>
//
//using namespace std;
//
//int binarySearch(int *a, int low, int high, int k) {
//
//    if (low > high)
//        return -1;
//
//    int middle = (low + high) / 2;
//
//    if (k < a[middle])
//        return binarySearch(a, low, middle - 1, k);
//    else if (k > a[middle])
//        return binarySearch(a, middle + 1, high, k);
//    else
//        return middle;
//
//}
//
//
//int search(int *a, int n, int k) {
//    int i = 0;
//
//    if (a[0] < a[n-1])
//        return binarySearch(a, 0, n-1, k);
//
//    while( i < n - 1 && a[i] <= a[i+1])
//        i++;
//
//    int index = binarySearch(a, 0, i, k);
//
//    if (index == -1)
//        return binarySearch(a, i + 1, n - 1, k);
//    else
//        return index;
//}
//
//int main() {
//
//    int a[] = {3, 4, 5, 7, 10, 14, 15, 16, 19, 20, 25, 3};
//    cout << search(a, 12, 5);
//    return 0;
//}
