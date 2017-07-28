////
//// Created by jeevan on 3/18/17.
////
//#include <iostream>
//
//using namespace std;
//
//#define rep(i, n) for(int i = 0; i < n; i++)
//#define fi(i, a, b) for(int i = a; i <= b; i++)
//#define fd(i, a, b) for(int i = a; i >= b; i--)
//
//bool findSubset(int a[], int n) {
//
//    int sum = 0;
//
//    rep(i, n)
//        sum += a[i];
//
//    if(sum & 1)
//        return false;
//
//    int k = sum / 2;
//    bool c[k + 1][n + 1];
//
//    fi(i, 1, k)
//        c[i][0] = 0;
//
//    fi(i, 0, n)
//        c[0][i] = 1;
//
//    fi(i, 1, k)
//        fi(j, 1, n)
//        c[i][j] = c[i][j - 1] || ( i >= a[j - 1] && c[i - a[j - 1]][j - 1]);
//
//    return c[k][n];
//
//}
//
//int main() {
//
//    int a[] = {1, 5, 4};
//    int n = sizeof(a) / sizeof(a[0]);
//    cout << boolalpha << findSubset(a, n);
//
//}
//
//
