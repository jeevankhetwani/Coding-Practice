////
//// Created by jeevan on 1/10/17.
////
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int expand ( vector<vector<bool>>& a, vector<vector<bool>>& visited, int m, int n) {
//
//    if ( m < 0 || m == a.size() || n < 0 || n == a[m].size() )
//        return 0;
//
//    if ( a[m][n] != 1 || visited[m][n] )
//        return 0;
//
//    visited[m][n] = true;
//    return 1 + expand(a, visited, m-1, n-1) +
//           expand(a, visited, m-1, n) +
//           expand(a, visited, m-1, n + 1) +
//           expand(a, visited, m+1, n-1) +
//           expand(a, visited, m+1, n) +
//           expand(a, visited, m+1, n+1) +
//           expand(a, visited, m, n-1) +
//           expand(a, visited, m, n+1) ;
//}
//
//
//int find(vector<vector<bool>>& a) {
//
//    vector<vector<bool>> visited;
//    visited.resize(a.size());
//    int maxLen = 0;
//
//    for (int i = 0; i < visited.size(); i++)
//        visited[i].resize(a[i].size());
//
//    for (int i = 0; i < a.size(); i++)
//        for (int j = 0; j < a[i].size(); j++)
//
//            if ( a[i][j] == 1 && !visited[i][j] )
//                maxLen = max(maxLen, expand(a, visited, i, j));
//
//    return  maxLen;
//
//}
//
//int main() {
//
//    int n, m;
//    bool flag;
//
//    cin >> n >> m;
//
////    vector<vector<int>> pond = {
////            {0, 1, 1, 0},
////            {0, 1, 0, 1},
////            {1, 1, 0, 1},
////            {0, 1, 0, 1}
////    };
//
//    vector<vector<bool>> pond;
//    pond.resize(n);
//
//    for (int i = 0; i < n; i++) {
//        pond[i].resize(m);
//        for (int j = 0; j < m; j++) {
//            cin >> flag;
//            pond[i][j] = flag;
//        }
//    }
//
////    vector<int> len = find(pond);
////    for (int i = 0; i < len.size(); i++)
////        cout << len[i] << " ";
//
//    cout << find(pond);
//    return 0;
//}
