////
//// Created by jeevan on 3/24/17.
////
//#include <iostream>
//#include <string>
//#define rep(i, n) for(int i = 0; i < n; i++)
//#define fi(i, a, b) for(int i = a; i <= b; i++)
//#define fd(i, a, b) for(int i = a; i >= b; i--)
//
//using namespace std;
//
//int mat[100][1000];
//
//int check(string a, string b) {
//
//    int aLen = a.length(), bLen = b.length();
//
//
//    rep(i, bLen + 1)
//        mat[i][0] = 0;
//
//    rep(j, aLen + 1)
//        mat[0][j] = 1;
//
//
//    fi(i, 1, bLen)
//    fi(j, 1, aLen) {
//
//        if(b[i - 1] != a[j - 1])
//            mat[i][j] = mat[i][j - 1];
//        else
//            mat[i][j] = mat[i][j - 1] + mat[i - 1][j - 1];
//    }
//
//    return mat[bLen][aLen];
//}
//
//
//void test() {
//
//    string a, b;
//
//    cin >> a >> b;
//
//    cout << check(a, b) << endl;
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
