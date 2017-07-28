//#include <bits/stdc++.h>
//typedef long long LL;
//using namespace std;
//
//int main(){
//    int n, k;
//    cin >> n >> k;
//    int x[n];
//    for(int i = 0; i < n; i++) scanf("%d", &x[i]);
//    sort(x,x+n);
//    int ans = 0;
//    int cur = 0;
//    while(cur < n){
//        int st = x[cur];
//        while(cur < n && x[cur+1] <= st+k){
//            cur++;
//        }
//        int m = x[cur];
//        while(cur < n && x[cur+1] <= m+k){
//            cur++;
//        }
//        ans++;
//        cur++;
//    }
//    cout << ans << endl;
//}