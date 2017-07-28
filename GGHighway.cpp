////
//// Created by jeevan on 3/16/17.
////
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//int n = 5, t = 2, x[] = {6, 9, 12, 14}, revenue[] = {5, 6, 3, 7};
//
//int find(int index, int prev, int val) {
//// recursive
//    if(index == n)
//        return val;
//
//    if(prev == -1 || x[index] > x[prev] + t )
//        return max(  find(index + 1, prev, val), find(index + 1, index, val + revenue[index]) );
//
//    return find(index + 1, prev, val);
//}
//
//
//int find1(int m) {
//// curr bb depends only on all prev bb within dist t
//    int maxRev[m + 1];
//    memset(maxRev, 0, sizeof(maxRev));
//
//    int nxtBB = 0;
//
//    for(int i = 1; i <= m; i++) {
//
//        if( nxtBB < n ) {
//
//
//            if( x[nxtBB] != i )
//                maxRev[i] = maxRev[i - 1];
//
//            else {
//
//                if (i <= t)
//                    maxRev[i] = revenue[nxtBB];
//                else
//                    maxRev[i] = max( maxRev[i - 1], maxRev[i - t - 1] + revenue[nxtBB]);
//
//                nxtBB++;
//            }
//
//        } else
//            maxRev[i] = maxRev[i - 1];
//    }
//
//    return maxRev[m];
//
//}
//
//
//int main() {
////    cout << find(0, -1, 0);
//    cout << find1(15);
//    return 0;
//}
