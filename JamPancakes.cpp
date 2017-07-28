////
//// Created by jeevan on 4/10/17.
////
//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//
//char s[11];
//int k;
//
//int find() {
//
//    int n = strlen(s);
//
//    int i, ans = 0;
//
//    for( i = 0; i <= n - k; i++)
//        if(s[i] == '-') {
//            for (int j = 0; j < k; j++)
//                s[i + j] ^= '+' ^ '-';
//            ans++;
//        }
//
//    while(i < n) {
//        if (s[i] == '-')
//            return -1;
//        i++;
//    }
//
//    return ans;
//}
//
//void test() {
//
//    cin >> s >> k;
//    int n = find();
//
//    if(n == -1)
//        cout << "IMPOSSIBLE";
//    else
//        cout << n;
//
//    cout << endl;
//}
//
//
//int main() {
//
//    int t;
//    cin >> t;
//
//    for(int i = 1; i <= t; i++) {
//        printf("Case #%d: ", i);
//        test();
//    }
//
//
//    return 0;
//}
