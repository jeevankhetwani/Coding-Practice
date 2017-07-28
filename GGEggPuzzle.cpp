////
//// Created by jeevan on 3/25/17.
////
////
//// Created by jeevan on 3/25/17.
////
////
//// Created by jeevan on 3/25/17.
////
//#include <iostream>
//#include <queue>
//#include <cstring>
//
//#define rep(i, n) for(int i = 0; i < n; i++)
//#define fi(i, a, b) for(int i = a; i <= b; i++)
//#define fd(i, a, b) for(int i = a; i >= b; i--)
//
//using namespace std;
//
//const int N = 10, K = 50;
//int a[N + 1][K + 1];
//
//int solve(int n, int k) {
//
//    if( n == 1 || k == 0 || k == 1 )
//        return k;
//
//    int minTrials = INT32_MAX;
//
//    fi(i, 1, k)
//        minTrials = min( minTrials, 1 + max( solve(n, k - i), solve(n - 1, i - 1) ) );
//
//    return minTrials;
//
//}
//
//
//int solveDP(int n, int k) {
//
//    fi(i, 1, n) {
//        a[i][0] = 0;
//        a[i][1] = 1;
//    }
//
//    fi(j, 0, k)
//        a[1][j] = j;
//
//    fi(i, 2, n)
//        fi(j, 2, k) {
//
//            int minTrials = INT32_MAX;
//
//            fi(m, 1, j)
//                minTrials = min( minTrials, 1 + max(a[i][j - m], a[i - 1][m - 1]));
//
//            a[i][j] = minTrials;
//        }
//
//
//    return a[n][k];
//}
//
//void test() {
//
//    int n, k;
//    cin >> n >> k;
//
//    cout << solveDP(n, k) << endl;
//}
//
//int main() {
//
//
//    int t ;
//
//    cin >> t;
//
//    rep(i, t)
//        test();
//
//    return 0;
//}
//
//
//
//
//
//
