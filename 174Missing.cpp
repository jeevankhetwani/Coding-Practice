////
//// Created by jeevan on 1/15/17.
////
//#include<iostream>
//#include <vector>
//#include <climits>
//
//using namespace std;
//
//bool bitONe(int a, int index) {
//    return ( a &  1 << index  ) !=  0;
//}
//
//int find(vector<int> v, int index) {
//
//    vector<int> odd, even;
//
//    if ( v.empty() )
//        return 0;
//
//    for (int i = 0; i < v.size(); i++) {
//        if ( bitONe(v[i], index) )
//            odd.push_back(v[i]);
//        else
//            even.push_back(v[i]);
//    }
//
//    if ( even.size() <= odd.size() ) {
//        int v = find(even, index + 1);
//        return v << 1 ;
//    } else {
//        int v = find(odd, index + 1);
//        return v << 1 | 1;
//    }
//
//}
//
//int main() {
//    vector<int> v = {0, 1, 2, 4, 3, 6, 7, 8, 9, 10};
//    cout << find(v, 0);
//    return 0;
//}
