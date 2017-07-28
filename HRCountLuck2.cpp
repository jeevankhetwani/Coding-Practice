//#include<cstdio>
//#include<algorithm>
//#include<stack>
//#include<queue>
//#include<vector>
//#include<string>
//#include<string.h>
//#include<cstdlib>
//#include<ctime>
//#include<cmath>
//#include<complex>
//#include<map>
//#include<set>
//#include<bitset>
//#include<iostream>
//#include<sstream>
//#define fi first
//#define se second
//#define rep(i,n) for(int i = 0; i < n; i++)
//#define rrep(i,n) for(int i = 1; i <= n; i++)
//#define drep(i,n) for(int i = n-1; i >= 0; i--)
//#define gep(i,g,j) for(int i = g.head[j]; i != -1; i = g.e[i].next)
//#define each(it,c) for(__typeof((c).begin()) it=(c).begin();it!=(c).end();it++)
//#define rng(a) a.begin(),a.end()
//#define maxs(x,y) x = max(x,y);
//#define mins(x,y) x = min(x,y);
//#define pb push_back
//#define sz(x) (int)(x).size()
//#define popcount __builtin_popcount
//#define snuke srand((unsigned)clock()+(unsigned)time(NULL))
//using namespace std;
//typedef long long int ll;
//typedef pair<int,int> P;
//typedef vector<int> vi;
//
//const int MX = 105, INF = 1000000000;
//const ll LINF = 1000000000000000000ll;
//const double eps = 1e-10;
//const int dx[] = {-1,0,1,0}, dy[] = {0,-1,0,1}; //<^>v
//
//int ts, n, m, k;
//string s[MX];
//
//int dfs(int i, int j){
//    if(s[i][j] == '*') return 1;
//    s[i][j] = 'X';
//    int cnt = 0, res = 0;
//    rep(v,4){
//        int ni = i+dx[v];
//        int nj = j+dy[v];
//        if(ni>=0&&nj>=0&&ni<n&&nj<m&&s[ni][nj]!='X'){
//            ++cnt;
//            res = max(res,dfs(ni,nj));
//        }
//    }
//    if(!res) return 0;
//    return res+(cnt>1);
//}
//
//int main(){
//    cin >> ts;
//    rep(ti,ts){
//        cin >> n >> m;
//        rep(i,n) cin >> s[i];
//        cin >> k;
//
//        int si,sj;
//        rep(i,n)rep(j,m){
//                if(s[i][j] == 'M') si = i, sj = j;
//            }
//
//        string ans = "Oops!";
//        if(dfs(si,sj) == k+1) ans = "Impressed";
//        cout << ans << endl;
//    }
//
//    return 0;
//}
//
//
//
//
//
