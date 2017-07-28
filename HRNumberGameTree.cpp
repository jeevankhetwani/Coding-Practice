//#define _CRT_SECURE_NO_WARNINGS
//#pragma comment(linker, "/stack:16777216")
//#include <string>
//#include <vector>
//#include <map>
//#include <list>
//#include <iterator>
//#include <set>
//#include <queue>
//#include <iostream>
//#include <sstream>
//#include <stack>
//#include <deque>
//#include <cmath>
//#include <memory.h>
//#include <cstdlib>
//#include <cstdio>
//#include <cctype>
//#include <algorithm>
//#include <utility>
//#include <assert.h>
//#include <time.h>
//#include <complex.h>
//
//
//#include <fstream>
//#include <sys/stat.h>
//#include <stdlib.h>
//#include <stdio.h>
//#include <bitset>
//
//using namespace std;
//
//#define FOR(i, a, b) for(int i=(a);i<(b);i++)
//#define RFOR(i, b, a) for(int i=(b)-1;i>=(a);--i)
//#define FILL(A,value) memset(A,value,sizeof(A))
//#define ALL(V) V.begin(), V.end()
//#define SZ(V) (int)V.size()
//#define PB push_back
//#define MP make_pair
//#define Pi 3.14159265358979
//
//typedef long long Int;
//typedef unsigned long long UInt;
//typedef vector<int> VI;
//typedef pair<Int, Int> PII;
//
//const int INF = 1000000000;
//const int MAX = 500007;
//const int MAXD = 20;
//const int MOD = 1000000007;
//
//unsigned long long f(unsigned long long x)
//{
//    return x * 747474747 + 447474747;
//}
//
//vector<pair<int, unsigned long long> > G[MAX];
//
//map<unsigned long long, int> M;
//
//void dfs(int v, int p, unsigned long long hash)
//{
//    M[hash] ++;
//    FOR(i,0,SZ(G[v]))
//    {
//        int to = G[v][i].first;
//        if (to == p) continue;
//        dfs(to , v , hash ^ G[v][i].second);
//    }
//}
//
//int main()
//{
//    //freopen("in.txt" , "r" , stdin);
//    //freopen("out.txt" , "w" , stdout);
//
//    int t;
//    cin >> t;
//    FOR(tt,0,t)
//    {
//        int n;
//        cin >> n;
//        FOR(i,0,n)
//        {
//            G[i].clear();
//        }
//        FOR(i,0,n - 1)
//        {
//            int a , b , c;
//            scanf("%d%d%d", &a , &b , &c);
//            -- a; --b;
//            G[a].push_back(MP(b , f(c)));
//            G[b].push_back(MP(a , f(c)));
//        }
//
//        Int res = 1LL * n * (n - 1) / 2;
//        M.clear();
//
//        dfs(0,-1,0);
//
//        for(map<unsigned long long, int>::iterator it = M.begin(); it != M.end(); ++it)
//            res -= 1LL * it->second * (it->second - 1) / 2;
//        cout << res << endl;
//    }
//
//    return 0;
//}
