////
//// Created by jeevan on 3/24/17.
////
//#include <iostream>
//
//#define rep(i, n) for(int i = 0; i < n; i++)
//#define fi(i, a, b) for(int i = a; i <= b; i++)
//#define fd(i, a, b) for(int i = a; i >= b; i--)
//
//using namespace std;
//
//const int N = 10;
//int mat[N][N];
//
//void swap(int &a, int &b) {
//    int tmp = a;
//    a = b;
//    b = tmp;
//}
//
//void swapColumns(int n, int col1, int col2) {
//
//    rep(i, n)
//        swap(mat[i][col1], mat[i][col2]);
//
//}
//
//void transpose(int n) {
//
//    rep(i, n)
//        fi(j, 0, i - 1)
//            swap(mat[i][j], mat[j][i]);
//
//}
//
//void print(int n) {
//    rep(i, n)
//        rep(j, n)
//            cout << mat[i][j] << " ";
//    cout << endl;
//}
//
//int test() {
//
//    int n;
//    cin >> n;
//
//    rep(i, n)
//        rep(j, n)
//            cin >> mat[i][j];
//
//    transpose(n);
//
//    rep(i, n / 2)
//        swapColumns(n, i, n - i - 1);
//
//    print(n);
//
//}
//
//int main() {
//
//
//    int t;
//    cin >> t;
//
//    rep(i, t)
//        test();
//
//    return 0;
//}
//
