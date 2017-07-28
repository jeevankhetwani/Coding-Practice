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
//
//void replace(char prev, char next, int n, int m) {
//
//    rep(i, n)
//        rep(j, m)
//            if(mat[i][j] == prev)
//                mat[i][j] = next;
//}
//
//int check(int n, int m) {
//
//    int shapes = 0;
//
//    replace('X', 'A', n, m);
//
//    rep(i, n)
//        rep(j, m)
//            if(mat[i][j] == 'A') {
//                shapes++;
//                floodFillUtil(i, j, n, m, 'A', 'X');
//            }
//
//    return shapes;
//}
//
//void test() {
//
//    int n, m;
//
//    cin >> n >> m;
//
//    rep(i, n)
//        cin >> mat[i];
//
//    cout << check(n, m) << endl;
//
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
