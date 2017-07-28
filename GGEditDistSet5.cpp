////
//// Created by jeevan on 3/16/17.
////
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//#define rep(i, n) for(int i = 0; i < n; i++)
//#define fi(i, a, b) for(int i = a; i <= b; i++)
//#define fd(i, a, b) for(int i = a; i >= b; i--)
//
//int min(int a, int b, int c) {
//    return min(min(a, b), c);
//}
//
//int find(string a, string b) {
//
//    int m = a.length();
//    int n = b.length();
//
//    int dist[m + 1][n + 1];
//
//    rep(i, m + 1)
//        dist[i][0] = i;
//
//    rep(i, n + 1)
//        dist[0][i] = i;
//
//    fi(i, 1, m) {
//        fi(j, 1, n) {
//
//            if(a[i] == b[j])
//                dist[i][j] = dist[i-1][j-1];
//            else
//                dist[i][j] = 1 + min(dist[i-1][j], dist[i][j-1], dist[i-1][j-1]);
//        }
//    }
//
//    return dist[m][n];
//}
//
//int main() {
//
//    string a = "sunday";
//    string b = "saturday";
//
//    cout << find(a, b);
//
//    return 0;
//}
