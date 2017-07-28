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
//int mat[41][41];
//
//int find(string s) {
//
//    int n = s.length();
//
//    rep(i, n)
//        mat[i][i] = 0;
//
//    fd(i, n - 2, 0)
//
//        fi(j, i + 1, n - 1)
//
//            if(s[i] == s[j])
//                mat[i][j] = mat[i + 1][j - 1];
//            else
//                mat[i][j] = 1 + min( mat[i + 1][j], mat[i][j - 1] );
//
//
//    return mat[0][n - 1];
//
//}
//
//void test() {
//
//    string s;
//
//    cin >> s;
//
//    cout << find(s) << endl;
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
//
//
//
