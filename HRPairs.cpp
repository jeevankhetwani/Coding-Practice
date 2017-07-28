////
//// Created by jeevan on 1/27/17.
////
//#include <iostream>
//#include <vector>
//#include <unordered_map>
//
//using namespace std;
//
//int pairs(vector < int >& a, int k) {
//
//    int target, ans = 0;
//    unordered_map<int, int> mymap;
//
//    for (int i = 0; i < a.size(); i++) {
//
//        if (mymap.find(a[i]) == mymap.end())
//            mymap[a[i]] == 1;
//
//        target = a[i] + k;
//
//        if ( mymap.find(target) != mymap.end()  )
//            ans++;
//
//        target = a[i] - k;
//
//        if ( mymap.find(target) != mymap.end()  )
//            ans++;
//    }
//
//    return ans;
//}
//
//
//int main() {
//
//    int x, n, k;
//    vector<int> a;
//
//    cin >> n >> k;
//    a.reserve(n);
//
//    for (int i = 0; i < n; i++) {
//        cin >> x;
//        a.push_back(x);
//    }
//
//    cout << pairs(a, k);
//    return 0;
//}
