////
//// Created by jeevan on 3/25/17.
////
//#include <iostream>
//#include <queue>
//#include <cstring>
//#include <algorithm>
//
//#define rep(i, n) for(int i = 0; i < n; i++)
//#define fi(i, a, b) for(int i = a; i <= b; i++)
//#define fd(i, a, b) for(int i = a; i >= b; i--)
//
//using namespace std;
//
//typedef pair<int, int> mypair;
//
//const int N = 100;
//mypair a[N];
//
//bool mycompare(const mypair& p1, const mypair& p2) {
//    return p1.first < p2.first;
//}
//
//int solve(int n) {
//
//    sort(a, a + n, mycompare);
//
//    int j = 0;
//
//    fi(i, 1, n - 1) {
//
//        if(a[i].first <= a[j].second)
//            a[j].second = max( a[i].second, a[j].second);
//        else {
//            j++;
//            a[j] = a[i];
//        }
//
//    }
//
//    return j + 1;
//}
//
//void test() {
//
//    int n;
//    cin >> n;
//
//    rep(i, n)
//        cin >> a[i].first >> a[i].second;
//
//    int size = solve(n);
//
//    rep(i, size)
//        cout << a[i].first << " " << a[i].second << " ";
//
//    cout << endl;
//}
//
//int main() {
//
//
//    int t ;
//    cin >> t;
//
//    rep(i, t)
//        test();
//
//    return 0;
//}
