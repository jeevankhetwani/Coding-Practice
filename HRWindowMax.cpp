////
//// Created by jeevan on 2/14/17.
////
//
//#include <iostream>
//#include <deque>
//#include <vector>
//
//#define rep(i, n) for(int i = 0; i < n; i++)
//#define fi(i, a, b) for(int i = a; i <= b; i++)
//using namespace std;
//
//deque<int> useful;
//
//
//int main() {
//
//
//    int n, k, x;
//    cin >> n >> k;
//
//    vector<int> a (n);
//
//    rep(i, n)
//        cin >> a[i];
//
//    rep(i, k) {
//        while ( !useful.empty() && a[useful.back()] <= a[i])
//            useful.pop_back();
//
//        useful.push_back(i);
//    }
//
//    cout << a[useful.front()] << " ";
//
//    fi(i, k, n - 1) {
//
//        while(!useful.empty() && useful.front() <= i - k)
//            useful.pop_front();
//
//        while(!useful.empty() && a[useful.back()] <= a[i])
//            useful.pop_back();
//
//        useful.push_back(i);
//
//        cout << a[useful.front()] << " ";
//    }
//
//    return 0;
//}
