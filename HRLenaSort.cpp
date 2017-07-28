//#include <cmath>
//#include <cstdio>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//const int MAX_N = 100005;
//
//int opt[MAX_N];
//vector<int> ans;
//
//bool in_range(int c, int len, int f) {
//    if (c >= len - 1 + opt[f] + opt[len - f - 1] && c <= (long long)(len - 1) * len / 2) {
//        return true;
//    }
//    return false;
//}
//
//void solve2(int len, int c, int l, int h) {
//    if (len == 0) {
//        return;
//    }
//    int lo = -1, hi = (len - 1) / 2;
//    while (lo < hi - 1) {
//        int mid = (lo + hi) / 2;
//        if (in_range(c, len, mid)) {
//            hi = mid;
//        } else {
//            lo = mid;
//        }
//    }
//    ans.push_back(l + hi);
//    long long m = min((long long)c - (len - 1) - opt[len - hi - 1], (long long)(hi - 1) * hi / 2);
//    solve2(hi, m, l, l + hi - 1);
//    solve2(len - hi - 1, c - (len - 1) - m, l + hi + 1, h);
//}
//
//void solve(int len, int c) {
//    if (c < opt[len] || c > (long long)len * (len - 1) / 2) {
//        cout << -1 << endl;
//        return;
//    }
//    ans.clear();
//    solve2(len, c, 1, 1000000000);
//    for (int i = 0; i < ans.size(); i++) {
//        cout << ans[i] << " ";
//    }
//    cout << endl;
//}
//
//int main() {
//    opt[0] = 0;
//    opt[1] = 0;
//    opt[2] = 1;
//    for (int i = 3; i < MAX_N; i++) {
//        opt[i] = opt[(i - 1) / 2] + opt[i / 2] + i - 1;
//    }
//    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//    int q;
//    cin >> q;
//    for (int i = 0; i < q; i++) {
//        int len, c;
//        cin >> len >> c;
//        solve(len, c);
//    }
//    return 0;
//}