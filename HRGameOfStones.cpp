////
//// Created by jeevan on 1/31/17.
////
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//vector<int> stones;
//
//bool check(int k) {
//
//    if (k < 2)
//        return false;
//
//    if (stones[k] == 0) {
//
//        if (!check(k-2))
//            stones[k] = k - 2;
//        else if(!check(k-3))
//            stones[k] = k - 3;
//        else if(!check(k-5))
//            stones[k] = k - 5;
//        else
//            stones[k] = -1;
//
//    }
//
//    return stones[k] != -1;
//}
//
//int main() {
//
//    int test, k;
//    cin >> test;
//
//    stones.resize(101);
//
//    for (int i = 0; i < test; i++) {
//        cin  >> k;
//        if (check(k))
//            cout << "First";
//        else
//            cout << "Second";
//        cout << endl;
//    }
//    return 0;
//}
