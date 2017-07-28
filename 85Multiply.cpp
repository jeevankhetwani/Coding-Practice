////
//// Created by jeevan on 1/1/17.
////
//#include <iostream>
//using namespace std;
//
//int multHelper(int m, int n) {
//    if(n == 1)
//        return m;
//
//    int temp = multHelper(m, n / 2);
//
//    if (n % 2 == 1)
//        temp += temp + m;
//    else
//        temp += temp;
//
//    return temp;
//}
//
//int mult(int m, int n) {
//    if (n == 0)
//        return 0;
//    return multHelper(m, n);
//}
//
//int main() {
//
//    cout << mult(5, 5);
//    return 0;
//}
