////
//// Created by jeevan on 3/25/17.
////
//#include <iostream>
//#include <queue>
//#include <cstring>
//#include <unordered_set>
//
//#define rep(i, n) for(int i = 0; i < n; i++)
//#define fi(i, a, b) for(int i = a; i <= b; i++)
//#define fd(i, a, b) for(int i = a; i >= b; i--)
//
//using namespace std;
//
//namespace std {
//
//    template <>
//    struct hash<pair>
//    {
//        std::size_t operator()(const pair& k) const
//        {
//            using std::size_t;
//            using std::hash;
//            using std::string;
//
//            // Compute individual hash values for first,
//            // second and third and combine them using XOR
//            // and bit shifting:
//
//            return ( (hash<int>()(k.first)
//                     ^ (hash<int>()(k.second) << 1) );
//
//        }
//    };
//
//}
//
//typedef pair<int, int> mypair;
//
//const int N = 1000;
//int a[N];
//
//int solve(int n) {
//
//    queue<mypair> q;
//    unordered_set<mypair> myset;
//
//    mypair first = make_pair(0, n - 1);
//    q.push(first);
//    myset.insert(first);
//
//    while( !q.empty() ) {
//
//        int u = q.front().first;
//        int v = q.front().second;
//
//        if( a[u] <= a[v] )
//            return v - u;
//
//        if(u  == v - 1)
//            continue;
//
//        mypair left = make_pair(u, v - 1);
//        if(myset.find(left) == myset.end())
//            q.push(left);
//
//        mypair right = make_pair(u + 1, v);
//        if(myset.find(right) == myset.end())
//            q.push(right);
//    }
//
//    return 0;
//}
//
//
//
//void test() {
//
//    int n;
//    cin >> n;
//
//    rep(i, n)
//        cin >> a[i];
//
//    cout << solve(n) << endl;
//}
//
//int main() {
//
//
//    int t ;
//
//    cin >> t;
//
//    rep(i, t)
//        test();
//
//    return 0;
//}
//
//
//
//
//
//
//
