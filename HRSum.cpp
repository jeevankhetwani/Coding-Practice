////
//// Created by jeevan on 1/27/17.
////
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//bool find(vector<int>& a) {
//
//    int right = 0, left = 0;
//
//    for (int i = 0; i < a.size(); i++)
//        right += a[i];
//
//    for (int i = 0; i < a.size(); i++) {
//
//        right -= a[i];
//
//        if (left == right)
//            return true;
//
//        left += a[i];
//    }
//
//    return false;
//}
//
//bool loadAndTest(int m) {
//
//    vector<int> a(m);
//
//    for (int i = 0; i < m; i++)
//        cin >> a[i];
//
//    return find(a);
//
//}
//
//
//int main() {
//
//    int m, n;
//    cin >> m;
//
//    for (int i = 0; i < m; i++) {
//        cin >> n;
//
//        if (loadAndTest(n))
//            cout << "YES";
//        else
//            cout << "NO";
//
//        cout << endl;
//    }
//
//    return 0;
//}
