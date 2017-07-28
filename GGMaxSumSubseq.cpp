////
//// Created by jeevan on 3/17/17.
////
//#include <iostream>
//
//using namespace std;
//
//#define fi(i, a, b) for(int i = a; i <= b; i++)
//
//int find(int a[], int n) {
//
//    int temp, maxSum[n];
//
//    maxSum[0] = a[0];
//
//    fi(i, 1, n - 1) {
//
//        temp = 0;
//
//        fi(j, 0, i - 1)
//
//            if(a[i] > a[j] && temp < maxSum[j])
//                temp = maxSum[j];
//
//        maxSum[i] = temp + a[i];
//    }
//
//    temp = maxSum[0];
//    fi(i, 1, n - 1)
//        temp = max(temp, maxSum[i]);
//
//    return temp;
//
//
//}
//
//int main() {
//
//    int a[] = {1, 101, 2, 3, 100, 4, 5};
//    int n = sizeof(a) / sizeof(a[0]);
//
//    cout << find(a, n);
//    return 0;
//}
