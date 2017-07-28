////
//// Created by jeevan on 4/11/17.
////
//#include <bits/stdc++.h>
//
//using namespace std;
//
//const int md = 1000000007;
//
//inline void add(int &a, int b) {
//  a += b;
//  if (a >= md) {
//    a -= md;
//  }
//}
//
//inline void sub(int &a, int b) {
//  a -= b;
//  if (a < 0) {
//    a += md;
//  }
//}
//
//inline int mul(int a, int b) {
//  return (long long) a * b % md;
//}
//
//inline int power(int a, int b) {
//  int res = 1;
//  while (b > 0) {
//    if (b & 1) {
//      res = mul(res, a);
//    }
//    b >>= 1;
//    a = mul(a, a);
//  }
//  return res;
//}
//
//inline int inv(int x) {
//  return power(x, md - 2);
//}
//
//const int N = 10;
//
//int f[N][N];
//int s[N][N];
//int in[N + N];
//
//int main() {
////  freopen("in", "r", stdin);
////  freopen("out", "w", stdout);
//  for (int i = 0; i < N + N; i++) {
//    in[i] = inv(i);
//  }
//  for (int i = 0; i < N; i++) {
//    s[i][0] = 0;
//  }
//  for (int sum = 0; sum < N - 1 + N - 1; sum++) {
//    for (int i = 0; i < N - 1; i++) {
//      int j = sum - i;
//      if (j < 0 || j >= N - 1) {
//        continue;
//      }
//      if (i == 0 && j == 0) {
//        f[i][j] = 1;
//      } else
//      if (i == 1 || j == 1) {
//        f[i][j] = 0;
//      } else {
//        int sum = 0;
//        if (i >= 2) {
//          add(sum, s[j][i - 1]);
//        }
//        if (j >= 2) {
//          add(sum, s[i][j - 1]);
//        }
//        f[i][j] = mul(sum, in[i + j]);
//      }
//      s[i][j + 1] = s[i][j] + f[i][j];
//      if (s[i][j + 1] >= md) s[i][j + 1] -= md;
//    }
//  }
//  int tt;
//  scanf("%d", &tt);
//  for (int qq = 1; qq <= tt; qq++) {
//    printf("Case #%d: ", qq);
//    int n, k;
//    scanf("%d %d", &n, &k);
//    int l = k - 1, r = n - k;
//    printf("%d\n", (md + 1 - f[l][r]) % md);
////    fprintf(stderr, "test case %d solved\n", qq);
////    fflush(stderr);
//  }
//  return 0;
//}
//
