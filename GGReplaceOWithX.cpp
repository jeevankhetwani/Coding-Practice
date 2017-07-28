////
//// Created by jeevan on 3/23/17.
////
//#include <iostream>
//
//#define rep(i, n) for(int i = 0; i < n; i++)
//#define fi(i, a, b) for(int i = a; i <= b; i++)
//#define fd(i, a, b) for(int i = a; i >= b; i--)
//
//using namespace std;
//
//const int M = 20, N = 20;
//char mat[N][M];
//
//void floodFillUtil(int i, int j, int n, int m, char prev, char next) {
//
//    if( i < 0 || i == n || j < 0 || j == m )
//        return;
//
//    if(mat[i][j] != prev)
//        return;
//
//    mat[i][j] = next;
//    floodFillUtil(i, j - 1, n, m, prev, next);
//    floodFillUtil(i, j + 1, n, m, prev, next);
//    floodFillUtil(i - 1, j, n, m, prev, next);
//    floodFillUtil(i + 1, j, n, m, prev, next);
//}
//
//
//void floodFill(int i, int j, int n, int m, char next) {
//
//    return floodFillUtil(i, j, n, m, mat[i][j], next);
//}
//
//void replace(char prev, char next, int n, int m) {
//
//    rep(i, n)
//        rep(j, m)
//            if(mat[i][j] == prev)
//                mat[i][j] = next;
//}
//
//
//void floodFillModified(int n, int m) {
//
//    replace('O', 'A', n, m);
//
//    rep(i, n) {
//
//        if (mat[i][0] == 'A')
//            floodFill(i, 0, n, m, 'O');
//
//        if(mat[i][m - 1] == 'O')
//            floodFill(i, m - 1, n, m, 'O');
//
//    }
//
//    rep(j, m) {
//
//        if (mat[0][j] == 'A')
//            floodFill(0, j, n, m, 'O');
//
//        if(mat[n - 1][j] == 'O')
//            floodFill(n - 1, j, n, m, 'O');
//
//    }
//
//    replace('A', 'X', n, m);
//
//}
//
//void test() {
//
//    int n, m;
//    cin >> n >> m;
//
//    rep(i, n)
//        rep(j, m)
//            cin >> mat[i][j];
//
//    floodFillModified(n, m);
//
//    rep(i, n) {
//        rep(j, m)
//            cout << mat[i][j] << " ";
//        cout << endl;
//    }
//
//}
//
//int main() {
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
