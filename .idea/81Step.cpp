////
//// Created by jeevan on 1/1/17.
////
//#include <iostream>
//
//using namespace std;
//
//int steps(int n, int *a) {
//    if (n < 0)
//        return 0;
//
//    if (n == 0)
//        return 1;
//
//    if (a[n] == 0)
//        a[n] = steps(n-1, a) + steps(n-2, a) + steps(n-3, a);
//
//    return a[n];
//}
//
//
//int steps(int n) {
//    int *a = new int[n+1];
//
//    for (int i = 0; i < n; i++)
//        a[i] = 0;
//
//    return steps(n, a);
//}
//
//int main() {
//
//    cout << steps(50);
//    return 0;
//}
