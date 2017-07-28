////
//// Created by jeevan on 1/16/17.
////
//#include<iostream>
//#include<set>
//#include <algorithm>
//
//using namespace std;
//
//set<int> generateList(set<int> current, set<int> mul) {
//
//    set<int> temp;
//    set<int>::const_iterator itr1 = current.begin();
//
//    while (itr1 != current.end()) {
//        set<int>::const_iterator itr2 = mul.begin();
//
//        while ( itr2 != mul.end() ) {
//            temp.insert(*itr1 * *itr2);
//            itr2++;
//        }
//
//        itr1++;
//    }
//
//    return temp;
//}
//
//set<int> multiples( set<int> current, set<int> mulipliers, int k ) {
//
//    set<int> tempList, all = current;
//
//    while ( all.size() < k ) {
//        current = generateList(current, mulipliers);
//        all.insert(current.begin(), current.end());
//    }
//
//
//    return all;
//}
//
//
//int main() {
//
//    set<int> current {1};
//    set<int> mul {3, 5, 7};
//
//    set<int> list = multiples(current, mul, 30);
//
//    set<int>::const_iterator itr = list.begin();
//
//    while ( itr != list.end() ) {
//        cout << *itr << " ";
//        itr++;
//    }
//
//    return 0;
//}
