////
//// Created by jeevan on 2/26/17.
////
//#include <iostream>
//#include <vector>
//
//#define rep(i, n)  for(int i = 0; i < n; i++)
//#define fi(i, a, b)  for(int i = a; i <= b; i++)
//#define fd(i, a, b)  for(int i = a; i >= b; i--)
//
//using namespace std;
//
//int main() {
//
//    int n = 5;
//    int a[] = {20, 10, 11, 13, 12};
//
//    int mymin = INT32_MAX, mymax = INT32_MAX;
//    bool flag = true;
//
//    fd(i, n-1, 0) {
//
//        if(a[i] > mymin && a[i] <= mymax) {
//            flag = false;
//            break;
//        }
//
//        mymin = max(mymin, a[i]);
//        mymax = min(mymax, a[i]);
//
//    }
//
//
//    if(flag)
//        cout << "Yes";
//    else
//        cout << "No";
//
//    return 0;
//}
