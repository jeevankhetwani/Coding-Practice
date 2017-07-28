////
//// Created by jeevan on 2/6/17.
////
//#include <iostream>
//#include <unordered_map>
//#include <vector>
//#include <stack>
//#include <iomanip>
//
//#define rep(i, n) for(int i = 0; i < n; i++)
//#define fi(i, a, b) for(int i = a; i <= b; i++)
//#define fd(i, a, b) for(int i = a; i >= b; i--)
//
//using namespace std;
//
//int n, t;
//
//int findHeights(vector<int>& perm) {
//    stack<int> st;
//    int temp, res = 0;
//
//    rep(i, perm.size()) {
//
//        while(!st.empty() && perm[i] > perm[st.top()])
//            st.pop();
//
//        if(!st.empty())
//            temp = i - st.top();
//        else
//            temp = i + 1;
//
//        res += temp;
//        st.push(i);
//    }
//
//    return res;
//}
//
//void find(vector<int>& prefix, unordered_map<int, int>& mymap, int rem, vector<int>& heights) {
//
//    if (rem == 0) {
//        heights.push_back(findHeights(prefix));
//        return;
//    }
//
//    unordered_map<int, int>::iterator itr = mymap.begin();
//
//    while(itr != mymap.end()) {
//
//        if (itr->second) {
//
//            itr->second--;
//            prefix.push_back(itr->first);
//            find(prefix, mymap, rem - 1, heights);
//            prefix.erase(prefix.end() - 1);
//            itr->second++;
//
//        }
//
//        itr++;
//    }
//
//}
//
//void solve() {
//
//    vector<int> values, heights, perm;
//    unordered_map<int, int> mymap;
//
//    cin >> n;
//    values.resize(n);
//
//    rep(i, n) {
//        cin >> values[i];
//
//        if(mymap.find(values[i]) == mymap.end())
//            mymap[values[i]] = 1;
//        else
//            mymap[values[i]] += 1;
//    }
//
//    heights.clear();
//    find(perm, mymap, n, heights);
//
//    int res = 0;
//    for(auto& x: heights)
//        res += x;
//
//    cout << fixed << setprecision(2);
//    cout << (float)res / heights.size() << endl;
//}
//
//
//
//int main() {
//
//    cin >> t;
//
//    rep(i, t)
//        solve();
//    return 0;
//}