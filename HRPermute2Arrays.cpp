////
//// Created by jeevan on 1/31/17.
////
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//
//using namespace std;
//
//typedef unsigned long int ul;
//
//int main() {
//
//    bool flag;
//    int q, n, k;
//    ul x;
//    vector<ul> a, b;
//
//    cin >> q;
//    for (int i = 0; i < q; i++) {
//        cin >> n >> k;
//        a.clear(); a.resize(n);
//        b.clear(); b.resize(n);
//
//        for (int j = 0; j < n; j++) {
//            cin >> x;
//            a[j] = x;
//        }
//
//        for (int j = 0; j < n; j++) {
//            cin >> x;
//            b[j] = x;
//        }
//
//        sort(a.begin(), a.end());
//        sort(b.begin(), b.end(), greater<ul>());
//
//        flag = true;
//
//        for (int i = 0; i < n; i++) {
//            if (a[i] + b[i] < k) {
//                flag = false;
//                break;
//            }
//        }
//
//        if (flag)
//            cout << "YES";
//        else
//            cout << "NO";
//
//        cout << endl;
//    }
//
//    return 0;
//}
