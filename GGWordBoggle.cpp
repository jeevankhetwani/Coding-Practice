////
//// Created by jeevan on 3/29/17.
////
//#include <iostream>
//#include <vector>
//#include <set>
//#include "Trie.h"
//#define rep(i, n) for(int i = 0; i < n; i++)
//#define fi(i, a, b) for(int i = a; i <= b; i++)
//#define fd(i, a, b) for(int i = a; i >= b; i--)
//
//using namespace std;
//
//const int X = 10, N = 7, M = 7;
//vector<string> dict;
//char boggle[N][M];
//bool visited[N][M];
//set<string> matched;
//
//void traverse(int i, int j, int n, int m, string prefix, Trie *trie) {
//
//    if( i < 0 || i == n || j < 0 || j == m || visited[i][j])
//        return;
//
//    prefix += boggle[i][j];
//
//    if(!trie->contains(prefix))
//        return;
//
//    if(trie->contains(prefix, true))
//        matched.insert(prefix);
//
//    visited[i][j] = true;
//
//    traverse(i - 1, j - 1, n, m, prefix, trie);
//    traverse(i - 1, j, n, m, prefix, trie);
//    traverse(i - 1, j + 1, n, m, prefix, trie);
//
//    traverse(i, j - 1, n, m, prefix, trie);
//    traverse(i, j + 1, n, m, prefix, trie);
//
//    traverse(i + 1, j - 1, n, m, prefix, trie);
//    traverse(i + 1, j, n, m, prefix, trie);
//    traverse(i + 1, j + 1, n, m, prefix, trie);
//
//    visited[i][j] = false;
//}
//
//void check(int n, int m) {
//
//    Trie *trie = new Trie(dict);
//
//    rep(i, n)
//        rep(j, m)
//            visited[i][j] = false;
//
//    matched.clear();
//
//    rep(i, n)
//        rep(j, m)
//            traverse(i, j, n, m, "", trie);
//
//    if(matched.empty())
//        cout << -1;
//    else
//        for(auto itr = matched.begin(); itr != matched.end(); itr++)
//            cout << *itr << " ";
//
//    cout << endl;
//
//}
//
//
//void test() {
//
//    int x, n, m;
//    cin >> x;
//
//    dict.resize(x);
//
//    rep(i, x)
//        cin >> dict[i];
//
//    cin >> n >> m;
//
//    rep(i, n)
//        rep(j, m)
//            cin >> boggle[i][j];
//
//    check(n, m);
//}
//
//int main() {
//
//
//    int t;
//    cin >> t;
//
//    rep(i, t)
//        test();
//    return 0;
//}
//
