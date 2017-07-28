////
//// Created by jeevan on 3/26/17.
////
//# include <iostream>
//#include <algorithm>
//
//#define rep(i, n) for(int i = 0; i < n; i++)
//#define fi(i, a, b) for(int i = a; i <= b; i++)
//#define fd(i, a, b) for(int i = a; i >= b; i--)
//
//using namespace std;
//
//const int N = 1000;
//int a[N];
//
//bool findTriplets(int arr[], int n)
//{
//    sort(a, a + n);
//
//    for(int i = 0; i <= n - 3; i++) {
//
//        int l = i + 1, h = n - 1;
//
//        while(l < h) {
//
//            int sum = a[i] + a[l] + a[h];
//
//            if(sum == 0)
//                return 1;
//            else if (sum < 0)
//                l++;
//            else
//                h--;
//        }
//
//    }
//
//    return 0;
//
//
//}
//
//int main() {
//
//
//    return 0;
//}
