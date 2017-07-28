////
//// Created by jeevan on 2/5/17.
////
//#include <iostream>
//#include <sstream>
//#include <fstream>
//#include <string>
//#include <vector>
//#include <deque>
//#include <queue>
//#include <stack>
//#include <set>
//#include <map>
//#include <algorithm>
//#include <functional>
//#include <utility>
//#include <bitset>
//#include <cmath>
//#include <cstdlib>
//#include <ctime>
//#include <cstdio>
//
//using namespace std;
//
//#define REP(i,n) for((i)=0;(i)<(int)(n);(i)++)
//#define snuke(c,itr) for(__typeof((c).begin()) itr=(c).begin();itr!=(c).end();itr++)
//
//int a[4];
//int A,B,C,D;
//
//typedef long long ll;
//
//ll total;
//ll cnt[10000];
//
//int main(void){
//    int i,j;
//
//    REP(i,4) cin >> a[i];
//    sort(a, a+4);
//
//    A = a[0];
//    B = a[1];
//    C = a[2];
//    D = a[3];
//
//    for(i=1;i<=C;i++) for(j=i;j<=D;j++){
//            total++;
//            cnt[i^j]++;
//        }
//
//    ll ans = 0;
//
//    for(j=1;j<=B;j++){
//        for(i=1;i<=A&&i<=j;i++) ans += total - cnt[i^j];
//        for(i=j;i<=D;i++){
//            total--;
//            cnt[i^j]--;
//        }
//    }
//
//    cout << ans << endl;
//
//    return 0;
//}
//
