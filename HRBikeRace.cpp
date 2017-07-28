//#include <iostream>
//#include <vector>
//#include <tuple>
//#include <algorithm>
//#include <cassert>
//
//using namespace std;
//
//#define rep(i,a,b) for(int i = int(a); i < int(b); ++i)
//#define trav(it, v) for(auto it = (v).begin(); it != (v).end(); ++it)
//
///* KACTL BipMatch */
//vector<int> match;
//vector<bool> seen;
//
//template<class G>
//bool find(int j, G &g) {
//    if (match[j] == -1) return true;
//    seen[j] = true; int di = match[j];
//    trav(e, g[di])
//        if (!seen[*e] && find(*e, g)) {
//            match[*e] = di;
//            match[j] = -1;
//            return true;
//        }
//    return false;
//}
//template<class G>
//int dfs_matching(G &g, int n, int m) {
//    match.assign(m, -1);
//    rep(i, 0, n) {
//        seen.assign(m, false);
//        trav(j, g[i])
//            if (find(*j, g)) {
//                match[*j] = i;
//                break;
//            }
//    }
//    return m - count(match.begin(), match.end(), -1);
//}
//
//int N, M, K;
//
//bool can(int maxlim, vector<tuple<long long, int, int>>& edges){
//    vector<vector<int>> adj;
//    adj.assign(N, vector<int>());
//    for (int i = 0; i < maxlim; ++i){
//        int to, from;
//        tie(ignore, to, from) = edges[i];
//        adj[to].push_back(from);
//    }
//    return dfs_matching(adj, N, M) >= K;
//}
//
//int main(){
//
//    cin >> N >> M >> K;
//    vector<pair<int, int>> bikers(N), bikes(M);
//    for (int i = 0; i < N; ++i){
//        cin >> bikers[i].first >> bikers[i].second;
//    }
//    for (int i = 0; i < M; ++i){
//        cin >> bikes[i].first >> bikes[i].second;
//    }
//    vector<tuple<long long, int, int>> edges;
//    for (int i = 0; i < N; i++){
//        for (int j = 0; j < M; ++j){
//            long long dx = bikers[i].first - bikes[j].first;
//            long long dy = bikers[i].second - bikes[j].second;
//            edges.push_back(make_tuple(dx*dx + dy*dy, i, j));
//        }
//    }
//    sort(edges.begin(), edges.end());
//    int lo = 0;
//    int hi = edges.size();
//    while (hi - lo > 1){
//        int mid = (lo + hi) / 2;
//        if (can(mid, edges)){
//            hi = mid;
//        } else {
//            lo = mid;
//        }
//    }
//    assert(can(hi, edges));
//    assert(!can(hi - 1, edges));
//    long long dist = get<0>(edges[hi - 1]);
//    cout << dist << endl;
//}