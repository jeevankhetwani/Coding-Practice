////
//// Created by jeevan on 2/9/17.
////
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <climits>
//
//#define rep(i, n) for(int i = 0; i < (n); i++)
//#define fi(i, a, b) for(int i = a; i <= b; i++)
//#define fd(i, a, b) for(int i = a; i >= b; i--)
//
//using namespace std;
//
//vector<long> a;
//vector<int> indices;
//
//int main() {
//
//    int n;
//    cin >> n;
//
//    long x, diff, minDiff = LONG_MAX;
//
//    a.reserve(n);
//
//    rep(i, n) {
//        cin >> x;
//        a.push_back(x);
//    }
//
//    sort(a.begin(), a.end());
//
//    rep(i, n-1) {
//        diff = a[i + 1] - a[i];
//
//        if (diff < minDiff) {
//
//            minDiff = diff;
//            indices.clear();
//            indices.push_back(i);
//
//        } else if (diff == minDiff)
//            indices.push_back(i);
//    }
//
//    rep(i, indices.size())
//        cout << a[indices[i]] << " " << a[indices[i] + 1] << " ";
//
//}
