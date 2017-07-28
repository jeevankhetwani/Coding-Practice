////
//// Created by jeevan on 4/15/17.
////
//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//
//void check(int n, int x) {
//
//    if(n > x)
//        return;
//
//    cout << n << " ";
//
//    int k = n % 10;
//
//    if( k != 0 )
//        check(n * 10 + k - 1, x);
//
//    if(k != 9)
//        check(n * 10 + k + 1, x);
//}
//
//void check2(int i, int x) {
//
//    int k, n1, n2;
//    queue<int> myqueue;
//
//    if(i > x)
//        return;
//
//    myqueue.push(i);
//
//    while(!myqueue.empty()) {
//
//        int n = myqueue.front();
//        myqueue.pop();
//
//        cout << n << " ";
//
//        k = n % 10;
//
//        if(k != 0) {
//            n1 = 10 * n + k - 1;
//
//            if(n1 <= x)
//                myqueue.push(n1);
//        }
//
//        if(k != 9) {
//            n2 = 10 * n + k + 1;
//
//            if(n2 <= x)
//                myqueue.push(n2);
//        }
//    }
//}
//
//void test() {
//
//    int x;
//    cin >> x;
//
//    cout << 0 << " ";
//
//    for(int i = 1; i <= 9; i++)
//        check2(i, x);
//
//    cout << endl;
//}
//
//int main() {
//
//    int t;
//    cin >> t;
//
//
//    while(t--)
//        test();
//
//    return 0;
//}
