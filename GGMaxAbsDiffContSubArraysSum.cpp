////
//// Created by jeevan on 3/23/17.
////
//#include <iostream>
//#define rep(i, n) for(int i = 0; i < n; i++)
//#define fi(i, a, b) for(int i = a; i <= b; i++)
//#define fd(i, a, b) for(int i = a; i >= b; i--)
//
//using namespace std;
//
//int find(int a[], int n) {
//
//    int leftMax[n], leftMin[n], rightMax[n], rightMin[n];
//
//    int max_so_far, curr_max;
//
//    max_so_far = a[0], curr_max = 0;
//
//    rep(i, n) {
//        curr_max = max ( a[i], curr_max + a[i] );
//        max_so_far = max( max_so_far, curr_max );
//        leftMax[i] = max_so_far;
//    }
//
//    max_so_far = a[0], curr_max = 0;
//
//    rep(i, n) {
//        curr_max = min ( a[i], curr_max + a[i] );
//        max_so_far = min( max_so_far, curr_max );
//        leftMin[i] = max_so_far;
//    }
//
//    max_so_far = a[n - 1], curr_max = 0;
//
//    fd(i, n - 1, 0) {
//        curr_max = max ( a[i], curr_max + a[i] );
//        max_so_far = max ( max_so_far, curr_max );
//        rightMax[i] = max_so_far;
//    }
//
//    max_so_far = a[n - 1], curr_max = 0;
//
//    fd(i, n - 1, 0) {
//        curr_max = min ( a[i], curr_max + a[i] );
//        max_so_far = min ( max_so_far, curr_max );
//        rightMin[i] = max_so_far;
//    }
//
//
////    max_so_far = max(  abs ( rightMax[0] ), abs ( rightMin[0] )  );
//
//    fi(i, 0, n - 1) {
//
//        curr_max = max ( abs(leftMax[i] - rightMin[i + 1]) , abs(leftMin[i] - rightMax[i + 1] ) );
//
//        max_so_far = max(max_so_far, curr_max);
//    }
//
////    curr_max = max(  abs ( leftMax[n - 1] ), abs ( leftMin[n - 1] )  );
////    max_so_far = max(max_so_far, curr_max);
//
//    return max_so_far;
//}
//
//void test() {
//
//    int n;
//    cin >> n;
//
//    int a[n];
//
//    rep(i, n)
//    cin >> a[i];
//
//    cout << find(a, n) << endl;
//}
//
//int main() {
//
////    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
////    int n = sizeof(a) / sizeof(a[0]);
////
////    cout << find(a, n);
////    int t;
////    cin >> t;
//
////    rep(i, t)
////        test();
//
//    test();
//    return 0;
//}
