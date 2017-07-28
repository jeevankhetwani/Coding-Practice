////
//// Created by jeevan on 2/7/17.
////
//#include "bits/stdc++.h"
//using namespace std;
//#define rep(i,n) for(int (i)=0;(i)<(int)(n);++(i))
//#define rer(i,l,u) for(int (i)=(int)(l);(i)<=(int)(u);++(i))
//#define reu(i,l,u) for(int (i)=(int)(l);(i)<(int)(u);++(i))
//static const int INF = 0x3f3f3f3f; static const long long INFL = 0x3f3f3f3f3f3f3f3fLL;
//typedef vector<int> vi; typedef pair<int, int> pii; typedef vector<pair<int, int> > vpii; typedef long long ll;
//template<typename T, typename U> static void amin(T &x, U y) { if(y < x) x = y; }
//template<typename T, typename U> static void amax(T &x, U y) { if(x < y) x = y; }
//
//bool isu(char c) { return 'A' <= c && c <= 'Z'; }
//char tou(char c) { return isu(c) ? c : c - 'a' + 'A'; }
//
//int main() {
//    int T;
//    scanf("%d", &T);
//    for(int ii = 0; ii < T; ++ ii) {
//        string a, b;
//        cin >> a >> b;
//        int n = a.size(), m = b.size();
//        vector<vector<bool>> dp(n + 1, vector<bool>(m + 1));
//        dp[0][0] = true;
//        rep(i, n + 1)
//            rep(j, m + 1)
//                if(dp[i][j]) {
//                    if(i < n && j < m && tou(a[i]) == b[j])
//                        dp[i + 1][j + 1] = true;
//                    if(i < n && !isu(a[i]))
//                        dp[i + 1][j] = true;
//                }
//        bool ans = dp[n][m];
//        puts(ans ? "YES" : "NO");
//    }
//    return 0;
//}
//
