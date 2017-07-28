////This is getting accepted!
//#include<bits/stdc++.h>
//
//using namespace std;
//
//#define FI first
//#define SE second
//#define pb push_back
//#define mp make_pair
//#define ll long long
//#define sz(a) ((int)(a).size())
//#define __builtin_popcount __builtin_popcounll
//
//typedef pair<int, int> pii;
//typedef pair<double, double> pdd;
//typedef pair<int, pii> ppi;
//
//const double PI = acos(0) * 2;
//const double EPS = 1e-8;
//const ll MOD = 1e9 + 7;
//const int MAXN = 1e5 + 5;
//const int oo = 1e9;
//const double foo = 1e30;
//
//template<class T> int getbit(T s, int i) { return (s >> i) & 1; }
//template<class T> T onbit(T s, int i) { return s | (T(1) << i); }
//template<class T> T offbit(T s, int i) { return s & (~(T(1) << i)); }
//template<class T> int cntbit(T s) { return __builtin_popcounll(s);}
//
//int T, n, h[100100], G[1000100], p[1000100];
//vector<int> v;
//
//int count(int i) {
//    if (i == 1) return 0;
//    if (G[i] != 0) return G[i];
//    int ni = i;
//    for (int j=0; j<sz(v) && v[j]<=(int)sqrt(ni); j++) {
//        if (ni == 1) break;
//        if (ni % v[j] == 0) {
//            while (ni > 1 && ni % v[j] == 0) {
//                ni /= v[j];
//                G[i]++;
//            }
//        }
//    }
//    if (ni != 1) G[i]++;
//    return G[i];
//}
//
//int main() {
////#ifndef ONLINE_JUDGE
////    freopen("inp.txt", "r", stdin);
//////    freopen("out.txt", "w", stdout);
////#endif
//
//    p[1] = 1;
//    for (int i=2; i<=1e6+2; i++) {
//        if (!p[i]) {
//            v.pb(i);
//            for (int j=2*i; j<=1e6+2; j+=i)
//                p[j] = 1;
//        }
//    }
//
//    G[1] = 0;
//
//
//    scanf("%d", &T);
//    while (T--) {
//        scanf("%d", &n);
//        for (int i=0; i<n; i++) scanf("%d", &h[i]);
//
//        int ans = 0;
//        for (int i=0; i<n; i++)
//            ans ^= count(h[i]);
//        printf("%d\n", ans ? 1 : 2);
//    }
//
//
//}
