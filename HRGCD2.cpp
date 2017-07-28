//#include "bits/stdc++.h"
//using namespace std;
//const int N = 1e5 + 5;
//int n , m , q;
//int a[N];
//int b[N];
//int r1 , c1 , r2 , c2;
//int cnt1[N];
//int cnt2[N];
//long long dp[N];
//int main(){
//    scanf("%d %d %d" , &n , &m , &q);
//    for(int i = 0 ; i < n ; ++i){
//        scanf("%d" , a + i);
//    }
//    for(int i = 0 ; i < m ; ++i){
//        scanf("%d" , b + i);
//    }
//    while(q--){
//        scanf("%d %d %d %d" , &r1 , &c1 , &r2 , &c2);
//        memset(cnt1 , 0 , sizeof(cnt1));
//        memset(cnt2 , 0 , sizeof(cnt2));
//        for(int i = r1 ; i <= r2 ; ++i){
//            ++cnt1[a[i]];
//        }
//        for(int i = c1 ; i <= c2 ; ++i){
//            ++cnt2[b[i]];
//        }
//        int ans = 0;
//        for(int i = N - 1 ; i >= 1 ; --i){
//            int c1 = 0;
//            int c2 = 0;
//            for(int j = i ; j < N ; j += i){
//                c1 += cnt1[j];
//                c2 += cnt2[j];
//            }
//            dp[i] = 1LL * c1 * c2;
//            for(int j = i + i ; j < N ; j += i){
//                dp[i] -= dp[j];
//            }
//            if(dp[i]){
//                ++ans;
//            }
//        }
//        printf("%d\n" , ans);
//    }
//}