////
//// Created by jeevan on 1/14/17.
////
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<unordered_map>
//
//
//using namespace std;
//
//void pairsSorted(vector<int> v, int target) {
//    sort(v.begin(), v.end());
//    int left = 0, right = v.size() - 1;
//
//    while( left < right ) {
//        int sum = v[left] + v[right];
//
//        if ( sum == target ) {
//            cout << v[left] << "," << v[right] << " ";
//            left++;
//            right--;
//        } else if ( sum < target )
//            left++;
//        else
//            right--;
//    }
//
//}
//
//void pairs(vector<int> v, int sum) {
//    unordered_map<int, int> map;
//
//    for (int i = 0; i < v.size(); i++)
//        map[v[i]] = 1;
//
//    for (int i = 0; i < v.size(); i++) {
//
//        if ( map[v[i]] == 0 )
//            continue;
//
//        map[v[i]] = 0;
//
//        int target = sum - v[i];
//
//        if ( map.find(target) != map.end()  ) {
//            cout << v[i] << "," << target << " ";
//            map[target] = 0;
//        }
//    }
//
//}
//
//int main() {
//    vector<int> v = {-5, 8, 2, 6, 0, 7, 3, 0};
////    pairs(v, 8);
//    pairsSorted(v, 8);
//    return 0;
//}
