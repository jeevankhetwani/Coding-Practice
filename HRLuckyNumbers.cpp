////
//// Created by jeevan on 2/2/17.
////
//#include <iostream>
//
//using namespace std;
//
//typedef unsigned long int ul;
//
//bool check(ul k) {
//
//    ul m = k / 7;
//
//    for(ul i = 0; i <= m; i++) {
//        ul n = k - 7 * i;
//
//        if ( n % 4 == 0)
//            return true;
//    }
//
//    return false;
//}
//
//bool check2(ul k) {
//
//    ul m;
//    if (k > 28) {
//        m = k % 28;
//        m += 28;
//    } else
//        m = k;
//
//    return check(m);
//
//}
//
//int main() {
//
//    int q;
//    cin >> q;
//
//    ul k;
//    for (int i = 0; i < q; i++) {
//        cin >> k;
//
//        if (check2(k))
//            cout << "Yes";
//        else
//            cout << "No";
//
//        cout << endl;
//    }
//    return 0;
//}
