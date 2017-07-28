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
//bool check(int a[], int start, int end, int sum) {
//// works only for contigous elements
//    if(start > end)
//        return false;
//
//    int currSum = 0;
//    fi(i, start, end)
//        currSum += a[i];
//
//    if(currSum == sum)
//        return true;
//
//    if(currSum < sum)
//        return false;
//
//    return check(a, start + 1, end, sum) || check(a, start, end - 1, sum);
//}
//
//bool find(int a[], int n, int sum) {
//
//    bool c[sum + 1][n + 1];
//
//    fi(i, 0, n)
//        c[0][i] = 1;
//
//    fi(i, 1, sum)
//        c[0][i] = 0;
//
//    fi(i, 1, sum)
//        fi(j, 1, n)
//            c[i][j] = c[i][j - 1] || ( i >= a[j - 1] && c[i - a[j - 1]][j - 1]);
//
//    return c[sum][n];
//
//}
//
//int main() {
//
//    int set[] = {3, 34, 4, 12, 5, 2};
//    int sum = 10;
//    int n = sizeof(set)/sizeof(set[0]);
//
////    cout << check(set, 0, n - 1, sum);
//
//    cout << find(set, n, sum);
//    return 0;
//}