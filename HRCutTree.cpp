////
//// Created by jeevan on 1/29/17.
////
//#include <iostream>
//#include <vector>
//#include <unordered_set>
//#include <unordered_map>
//#include <stack>
//
//using namespace std;
//
//class node {
//public:
//    int id, w;
//    int par;
//    vector<int> adj;
//
//    node(int id, int w) : id(id), w(w) {}
//};
//
//unordered_set<int> visited;
//
//void build(node* curr, unordered_map<int, node*>& mymap) {
//
//    visited.insert(curr->id);
//
//    for (int adj: curr->adj) {
//
//        if ( visited.find(adj) == visited.end() ) {
//            node* child = mymap[adj];
//            child->par = curr->id;
//            build(child, mymap);
//            curr->w += child->w;
//        }
//
//    }
//}
//
//int dfs(unordered_map<int, node*>& mymap) {
//
//    int res = INT16_MAX;
//    int total = mymap[1]->w;
//    unordered_map<int, node*>::const_iterator itr = mymap.begin();
//
//    while( itr != mymap.end() ) {
//
//        node* curr = itr->second;
//
//        if (curr->par != -1)
//            res = min(res, abs(total - 2 * curr->w));
//
//        itr++;
//    }
//
//    return res;
//}
//
//void add(int x, int y, unordered_map<int, node*>& mymap) {
//    mymap[x]->adj.push_back(y);
//    mymap[y]->adj.push_back(x);
//}
//
//int main() {
//
//    int n, x, y;
//    unordered_map<int, node*> mymap;
//
//    cin >> n;
//    for (int i = 1; i <= n; i++) {
//        cin >> x;
//        mymap[i] = new node(i, x);
//    }
//
//    for (int i = 1; i < n; i++) {
//        cin >> x >> y;
//        add(x, y, mymap);
//    }
//
//    node* root = mymap[1];
//    root->par = -1;
//    build(root, mymap);
//    cout << dfs(mymap);
//
//
//    return 0;
//
//}
