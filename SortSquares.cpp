////
//// Created by jeevan on 4/15/17.
////
//#include <iostream>
//using namespace std;
//
//void sort(int a[], int n) {
//
//    int squares[n];
//
//    for(int i = 0; i < n; i++)
//        squares[i] = a[i] * a[i];
//
//    int low = 0, high = n - 1, k = n - 1;
//
//    while(low <= high) {
//
//        if(squares[low] > squares[high])
//            a[k--] = squares[low++];
//        else
//            a[k--] = squares[high--];
//    }
//}
//
//
//int main() {
//
//    int a[] = {-5, -4, -3, -1, 2, 3};
//    int n = sizeof(a) / sizeof(a[0]);
//
//    sort(a, n);
//
//    for(int i = 0; i < n; i++)
//        cout << a[i] << ' ';
//
//    return 0;
//}
