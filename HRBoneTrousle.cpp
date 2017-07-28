//#include <bits/stdc++.h>
//
//#define FI(i,a,b) for(int i=(a);i<=(b);i++)
//#define FD(i,a,b) for(int i=(a);i>=(b);i--)
//
//#define LL long long
//#define Ldouble long double
//#define PI 3.1415926535897932384626
//
//#define PII pair<int,int>
//#define PLL pair<LL,LL>
//#define mp make_pair
//#define fi first
//#define se second
//
//using namespace std;
//
//int t, n;
//LL ttl, sto, s[100005];
//
//void solve(){
//    LL bs = 1LL * n * (n + 1) / 2, tar;
//    if(ttl < bs){
//        printf("-1\n");
//        return;
//    }
//    FI(i, 1, n) s[i] = i;
//
//    tar = ttl - bs;
//
//    FD(i, n, 1){
//        LL incre = max(0LL, min(tar, sto - (n - i) - s[i]));
//        s[i] += incre;
//        tar -= incre;
//    }
//
//    if(tar > 0){
//        printf("-1\n");
//        return;
//    }
//
//    FI(i, 1, n) printf("%lld%c", s[i], i == n ? '\n':' ');
//    return;
//}
//
//int main(){
//    scanf("%d", &t);
//    while(t--){
//        scanf("%lld %lld %d", &ttl, &sto, &n);
//        solve();
//    }
//    return 0;
//}
