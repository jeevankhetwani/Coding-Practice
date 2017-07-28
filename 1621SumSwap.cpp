////
//// Created by jeevan on 1/12/17.
////
//#include<iostream>
//#include<unordered_map>
//#include<vector>
//
//using namespace std;
//
//pair<int, int> swap(vector<int> v1, vector<int> v2) {
//    int temp, sum1 = 0, sum2 = 0;
//    unordered_map<int, int> map;
//
//    for (int i = 0; i < v1.size(); i++)
//        sum1 += v1[i];
//
//    for (int i = 0; i < v2.size(); i++) {
//        sum2 += v2[i];
//        map[v2[i]] = i;
//    }
//
//    int diff = sum2 - sum1;
//
//    if ( diff % 2 != 0)
//        return pair<int, int> (-1, -1);
//
//    diff /= 2;
//
//    for (int i = 0; i < v1.size(); i++) {
//        temp = diff + v1[i];
//
//        if (map.find(temp) != map.end())
//            return pair<int, int> (i, map[temp]);
//    }
//
//    return pair<int, int> (-1, -1);
//
//}
//
//int main() {
//    vector<int> v1 = {4, 1, 3, 1, 1, 2};
//    vector<int> v2 = {3, 6, 3, 3};
//
//    pair<int, int> p = swap(v1, v2);
//
//    if (p == pair<int, int> (-1, -1))
//        cout << "No";
//    else
//        cout << p.first << " " << p.second;
//    return 0;
//}
