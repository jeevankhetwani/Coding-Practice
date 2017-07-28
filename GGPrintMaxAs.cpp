////
//// Created by jeevan on 4/8/17.
////
//#include <iostream>
//using namespace std;
//
//int find(int n) {
//
//    int count[n + 1];
//
//    for(int i = 1; i <= 6; i++)
//        count[i] = i;
//
//    for(int i = 7; i <= n; i++) {
//
//        int mymax = 0;
//
//        for(int j = i - 3; j >= 2; j--)
//            mymax = max(mymax, count[j] * (i - j - 1));
//
//        count[i] = mymax;
//    }
//
//    return count[n];
//
//}
//
//
//
//int main() {
//
////    int a[] = {7, 8,9,10};
////    int n = sizeof(a) / sizeof(a[0]);
//
//    int n = 20;
//    for(int i = 1; i <= n; i++)
//        cout << find(i) << " ";
//    return 0;
//}
