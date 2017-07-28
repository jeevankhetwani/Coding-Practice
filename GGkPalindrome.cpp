////
//// Created by jeevan on 3/29/17.
////
//
//#include <iostream>
//using namespace std;
//
//int find(string& s, int i, int j) {
//
//    if(i >= j)
//        return 0;
//
//    if(s[i] == s[j])
//        return find(s, i + 1, j - 1);
//
//    return 1 + min(find(s, i, j - 1), find(s, i + 1, j));
//}
//
//
//int findDP(string &s) {
//
//    int n = s.length();
//    int c[n][n];
//
//    for(int i = 0; i < n; i++)
//        for(int j = 0; j < n; j++)
//        c[i][i] = 0;
//
//    for(int i = n - 2; i >= 0; i--)
//        for(int j = i + 1; j < n; j++)
//            if(s[i] == s[j])
//                c[i][j] = c[i + 1][j - 1];
//            else
//                c[i][j] = 1 + min(c[i][j - 1], c[i + 1][j]);
//
//    return c[0][n - 1];
//}
//
//bool is_k_palin(string s,int k)
//{
////Your code here
//    int n = find(s, 0, s.length() - 1);
//
//    return n <= k;
//}
//
//int main() {
//
//    int k;
//    string s;
//
//    cin >> s >> k;
//    cout << is_k_palin(s, k);
//
//    return 0;
//}