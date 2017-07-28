////
//// Created by jeevan on 3/26/17.
////
//
//#include <iostream>
//
//using namespace std;
//
//int play(int a[], int i, int j) {
//
//    if(i == j)
//        return  a[i];
//
//    if(j == j + 1)
//        return max(a[i], a[j]);
//
//    return max( a[i] + min( play(a, i + 2, j), play(a, i + 1, j - 1) ),
//                a[j] + min( play(a, i, j - 2), play(a, i + 1, j - 1) ) );
//
//}
//
//int playDP(int A[], int N) {
//
//    int c[N][N], x, y, z;
//
//    for(int i = 0; i < N; i++)
//        c[i][i] = A[i];
//
//    for(int len = 2; len <= N; len++) {
//
//        for(int i = 0; i <= N - len; i++) {
//
//            int j = i + len - 1;
//
//            if(len == 2)
//                c[i][j] = max(A[i], A[j]);
//
//            else if(len == 3)
//                c[i][j] = A[i] + A[j];
//
//
//            else {
//
//                x = c[i + 2][j];
//                y = c[i + 1][j - 1];
//                z = c[i][j - 2];
//                c[i][j] = max(A[i] + min(x, y), A[j] + min(y, z));
//            }
//        }
//    }
//
//    return c[0][N - 1];
//}
//
//int main() {
//
//
//    int a[] = {8, 35, 30, 2};
//    int n = sizeof(a) / sizeof(a[0]);
//
////    int n;
////    cin >> n;
//
////    int a[n];
//
////    for(int i = 0; i < n; i++)
////        cin >> a[i];
//
////    cout << play(a, 0, n - 1);
//    cout << playDP(a, n);
//    return 0;
//}
