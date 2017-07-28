////
//// Created by jeevan on 2/7/17.
////
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//#define rep(i, n) for(int i = 0; i < n; i++)
//#define fi(i, a, b) for(int i = a; i <= b; i++)
//#define fd(i, a, b) for(int i = a; i >= b; i--)
//typedef unsigned long ul;
//using namespace std;
//
//int n, k;
//vector<ul> packets;
//
//
//ul unfairness(int m) {
//
//    ul res = 0;
//    rep(i, k)
//        fi(j, i + 1, k - 1)
//           res += abs(packets[m + j] - packets[m + i]);
//
//    return res;
//}
//
//int main() {
//
//
//
//    cin >> n >> k;
//
//    packets.resize(n);
//
//    rep(i, n)
//        cin >> packets[i];
//
//    sort(packets.begin(), packets.end());
//
//    ul mymin = UINT32_MAX, range = UINT32_MAX;
//
//    rep(i, n - k) {
//
//        if(packets[i + k - 1] - packets[i] < range) {
//            mymin = min(mymin, unfairness(i));
//            range = packets[i + k - 1] - packets[i];
//        }
//    }
//
//    cout << mymin;
//    return 0;
//}
// not good