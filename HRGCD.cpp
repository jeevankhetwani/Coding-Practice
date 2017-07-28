////
//// Created by jeevan on 2/2/17.
////
//#include <iostream>
//#include <vector>
//#include <unordered_set>
//using namespace std;
//
//typedef unsigned int uInt;
//
//uInt gcd(uInt a, uInt b)  {
//
//    uInt dividend = a > b ? a : b;
//    uInt divisor = a > b ? b : a;
//    uInt rem;
//
//    while ( divisor != 0 ) {
//        rem = dividend % divisor;
//        dividend = divisor;
//        divisor = rem;
//    }
//
//    return dividend;
//}
//
//
//int main() {
//
//    uInt n, m, q;
//    unordered_set<uInt> myset;
//    cin >> n >> m >> q;
//    vector<uInt> a (n), b(m);
//
//    for (uInt i = 0; i < n; i++)
//        cin >> a[i];
//
//    for (uInt i = 0; i < m; i++)
//        cin >> b[i];
//
//    vector<vector<uInt>> mat (n);
//    for (uInt i = 0; i < n; i++)
//        mat[i].resize(m);
//
//    for (uInt i = 0; i < n; i++)
//        for (uInt j = 0; j < m; j++)
//            mat[i][j] = gcd(a[i], b[j]);
//
//    uInt r1, c1, r2, c2;
//
//    for (int i = 0; i < q; i++) {
//        cin >> r1 >> c1 >> r2 >> c2;
//
//        for (uInt k = r1; k <= r2; k++)
//            for (uInt l = c1; l <= c2; l++)
//                myset.insert(mat[k][l]);
//
//        cout << myset.size() << endl;
//        myset.clear();
//    }
//
//    return 0;
//}