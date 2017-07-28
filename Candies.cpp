////
//// Created by jeevan on 2/7/17.
////
//#include <iostream>
//#include <vector>
//#define rep(i, n) for(int i = 0; i < n; i++)
//#define fi(i, a, b) for(int i = a; i <= b; i++)
//#define fd(i, a, b) for(int i = a; i >= b; i--)
//typedef unsigned long ul;
//using namespace std;
//
//int main() {
//
//    int n;
//    cin >> n;
//
//    vector<ul> a(n), incrLeft(n), incrRight(n);
//
//    rep(i, n)
//        cin >> a[i];
//
//
//    fi(i, 1, n - 1)
//         if (a[i] > a[i - 1])
//            incrLeft[i] += incrLeft[i - 1] + 1;
//
//
//    fd(i, n - 2, 0)
//        if (a[i] > a[i + 1])
//            incrRight[i] += incrRight[i + 1] + 1;
//
//
//    ul res = n;
//    rep(i, n)
//        res += max(incrLeft[i], incrRight[i]);
//
//    cout << res;
//
//    return 0;
//}
//
