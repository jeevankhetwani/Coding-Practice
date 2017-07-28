////
//// Created by jeevan on 2/14/17.
////
//#include <iostream>
//#include <deque>
//#include <vector>
//#include <algorithm>
//
//#define rep(i, n) for(int i = 0; i < n; i++)
//#define fi(i, a, b) for(int i = a; i <= b; i++)
//
//typedef unsigned long ul;
//
//using namespace std;
//
//
//int main() {
//
//    int n;
//    cin >> n;
//
//    vector<int> a(n);
//
//    rep(i, n)
//        cin >> a[i];
//
//    sort(a.begin(), a.end(), greater<int>());
//
//    ul res = 0;
//
//    ul mul = 1;
//    rep(i, n) {
//        res += a[i] * mul;
//        mul *= 2;
//    }
//
//    cout << res;
//    return 0;
//}