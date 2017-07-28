////
//// Created by jeevan on 4/11/17.
////
//#include <iostream>
//using namespace std;
//const int N = 101;
//int a[N][N];
//
//int find(int low, int high, int k) {
//
//    if(low == high)
//        return 0;
//
//    int ans = 0;
//
//    for(int i = low; i < high; i++) {
//
//        if(i == k || i + 1 == k)
//            ans++;
//
//        else if(i + 1 < k)
//            ans+= find(i + 2, high, k);
//
//        else
//            ans += find(low, i - 1, k);
//    }
//    return ans;
//}
//
//int findDP(int low, int high, int k) {
//
//    if(low == high)
//        return 0;
//
//    if(a[low][high] == 0) {
//        int ans = 0;
//
//        for (int i = low; i < high; i++) {
//
//            if (i == k || i + 1 == k)
//                ans++;
//
//            else if ( i + 1 < k && findDP(i + 2, high, k) )
//                ans++;
//
//            else if(i > k && findDP(low, i - 1, k))
//                ans++;
//        }
//        a[low][high] = ans;
//    }
//
//    return a[low][high];
//
//
//}
//
//int findDP(int n, int k) {
//
//    for(int i = 0; i < n; i++)
//        for(int j = i; j < n; j++)
//            a[i][j] = 0;
//
//    return findDP(1, n, k);
//
//}
//
//void test(int t) {
//
//    int n, k;
//    cin >> n >> k;
//
//    int p = findDP(n, k);
//    int q = n - 1;
//
//    cout << p <<  " " << q << endl;
//}
//
//int main() {
//
//    int t;
//    cin >> t;
//
//    for(int i = 0; i < t; i++)
//        test(i);
//
//
//    return 0;
//}
