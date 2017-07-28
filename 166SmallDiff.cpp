////
//// Created by jeevan on 1/8/17.
////
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include <climits>
//#include <bitset>
//
//using namespace std;
//
//int diff(vector<int> v1, vector<int> v2) {
//    sort(v1.begin(), v1.end());
//    sort(v2.begin(), v2.end());
//
//    int min = INT16_MAX, index = 0;
//    for (int i = 0; i < v1.size(); i++) {
//
//        if (v1[i] < v2[index])
//            continue;
//
//        while ( ( index + 1 ) < v2.size() && v2[index + 1] < v1[i] )
//            index++;
//
//
//        if ( v1[i] - v2[index] < min )
//            min = v1[i] - v2[index];
//
//        if(index == v2.size() - 1)
//            break;
//
//    }
//
//    return min;
//}
//
//int max(int x, int y) {
//    return x * (x / y) + y * (y / x);
//}
//
//int max1(int x, int y) {
//    int k =  ( (y - x) >> sizeof(int) * CHAR_BIT - 1 ) & 1 ;
//    return k * x + ( 1 - k ) * y;
//
//}
//
//int main() {
//
//    vector<int> v1 = {1, 3, 15, 11, 23};
//    vector<int> v2 = {2, 7, 5, 1, 8};
////    cout << diff(v1, v2);
//     cout << max1(1544, 4456);
//    return 0;
//}
