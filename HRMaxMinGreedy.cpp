////
//// Created by jeevan on 1/31/17.
////
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <climits>
//
//using namespace std;
//
//typedef unsigned long int ul;
//
//vector<ul> a;
//
//ul find(int k) {
//    ul mymin = ULONG_MAX;
//
//    sort(a.begin(), a.end());
//
//    for (int i = 0; i <= a.size() - k; i++)
//        if (a[i + k - 1] - a[i] < mymin)
//            mymin = a[i + k - 1] - a[i];
//
//    return mymin;
//}
//
//int main() {
//
//    int n, k;
//    ul x;
//
//    cin >> n >> k;
//    a.reserve(n);
//
//    for (int i = 0; i < n; i++) {
//        cin >> x;
//        a.push_back(x);
//    }
//
//    cout << find(k);
//    return 0;
//}
