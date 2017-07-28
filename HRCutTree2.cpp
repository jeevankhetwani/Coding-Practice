////
//// Created by jeevan on 1/29/17.
////
//#include <vector>
//#include <list>
//#include <map>
//#include <set>
//#include <queue>
//#include <stack>
//#include <algorithm>
//#include <numeric>
//#include <utility>
//#include <sstream>
//#include <iostream>
//#include <iomanip>
//#include <cstdio>
//#include <cmath>
//#include <cstdlib>
//#include <ctime>
//#include <limits>
//#include <cstring>
//#include <string>
//using namespace std;
//
//#define pairii pair<int, int>
//#define llong long long
//#define pb push_back
//#define sortall(x) sort((x).begin(), (x).end())
//#define INFI  numeric_limits<int>::max()
//#define INFLL numeric_limits<llong>::max()
//#define INFD  numeric_limits<double>::max()
//#define FOR(i,s,n) for (int (i) = (s); (i) < (n); (i)++)
//#define FORZ(i,n) FOR((i),0,(n))
//
//const int MAXN = 100005;
//int w[MAXN];
//vector<int> adj[MAXN];
//set<int> v;
//int n, res, total;
//
//struct Node {
//    Node() {
//        pr = NULL;
//        w = 0;
//    }
//    Node* pr;
//    vector<Node*> cl;
//    int w;
//    int idx;
//};
//
//Node* root;
//
//void build(Node* nd) {
//    int idx = nd->idx;
//    v.insert(idx);
//    nd->w += w[idx];
//    for (int x:adj[idx]) {
//        if (v.find(x) == v.end()) {
//            Node* u = new Node;
//            u->pr = nd;
//            u->idx = x;
//            nd->cl.pb(u);
//            build(u);
//            nd->w += u->w;
//        }
//    }
//}
//
//void dfs(Node* nd) {
//    int idx = nd->idx;
//    if (nd->pr != NULL) {
//        res = min(res, abs(total-2*nd->w));
//    }
//    for (Node* u : nd->cl) {
//        dfs(u);
//    }
//}
//
//void solve() {
//    scanf("%d", &n);
//    FORZ(i,n) scanf("%d", w+i);
//    FORZ(i,n-1) {
//        int a,b;
//        scanf("%d %d", &a, &b);
//        a--; b--;
//        adj[a].pb(b);
//        adj[b].pb(a);
//    }
//    root = new Node;
//    root->idx = 0;
//    build(root);
//    total = root->w;
//    res = INFI;
//    dfs(root);
//    printf("%d\n", res);
//}
//
//int main() {
//#ifdef DEBUG
//    freopen("in.txt", "r", stdin);
//    //freopen("out.txt", "w", stdout);
//#endif
//    solve();
//    return 0;
//}
