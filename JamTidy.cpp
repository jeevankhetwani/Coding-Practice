////Problem B
//
//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//#include<cstring>
//#include<algorithm>
//#include<cmath>
//#include<vector>
//#include<set>
//
//using namespace std;
//
//char a[20];
//
//int test() {
//
//    int n, m = 0;
//    cin >> n;
//
//    while(n) {
//        a[m++] = n % 10;
//        n = n / 10;
//    }
//
//    for(int i = 1; i < m; i++)
//
//        if(a[i] > a[i - 1]) {
//            a[i]--;
//
//            for(int j = i - 1; j >= 0 && a[j] != 9; j--)
//                a[j] = 9;
//
//        }
//
//
//
//    int res = 0;
//    for(int i = m - 1; i >= 0; i--)
//        res = res * 10 + a[i] ;
//
//    return res;
//}
//
//
//int main() {
//
//    int t;
//    cin >> t;
//
//    while(t--)
//        cout << test();
//    return 0;
//}
