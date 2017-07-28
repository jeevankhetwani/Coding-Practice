////
//// Created by jeevan on 5/10/17.
////
//#include <iostream>
//using namespace std;
//
//int find(int a[], int n) {
//
//    if(n == 0) return 0;
//
//    int sum = a[0], maxSum = a[0];
//
//    for(int i = 1; i < n; i++) {
//
//        if(a[i] <= a[i - 1] || sum < 0)
//            sum = 0;
//
//        sum += a[i];
//
//        if(sum > maxSum)
//            maxSum = sum;
//    }
//
//    return maxSum;
//
//}
//
//int main() {
//
//    int arr[] = {-3, -7, -6, -5, 12};
//    int n = sizeof(arr) / sizeof(arr[0]);
//    cout << "Largest sum = " << find(arr, n);
//
//    return 0;
//}
