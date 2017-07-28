////
//// Created by jeevan on 3/25/17.
////
//#include <iostream>
//#include <queue>
//
//#define rep(i, n) for(int i = 0; i < n; i++)
//#define fi(i, a, b) for(int i = a; i <= b; i++)
//#define fd(i, a, b) for(int i = a; i >= b; i--)
//
//using namespace std;
//
//void printDigit(int d, int n) {
//
//    int num, num1, num2, lastDigit;
//    queue<int> q;
//    q.push(d);
//
//    while(!q.empty()) {
//
//        num = q.front();
//        q.pop();
//
//        cout << num << " ";
//
//        lastDigit = num % 10;
//
//        if(lastDigit != 0) {
//
//            num1 = num * 10 + (lastDigit - 1);
//
//            if(num1 <= n)
//                q.push(num1);
//        }
//
//        if(lastDigit != 9) {
//            num2 = num * 10 + (lastDigit + 1);
//
//            if(num2 <= n)
//                q.push(num2);
//        }
//    }
//
//}
//
//void solve(int n) {
//
//    cout << 0 << " ";
//
//    fi(i, 1, 9) {
//
//        if( n < i)
//            return;
//
//        printDigit(i, n);
//    }
//
//}
//
//void test() {
//
//    int n;
//    cin >> n;
//
//    solve(n);
//    cout << endl;
//}
//
//int main() {
//
//
//    int t;
//    cin >> t;
//
//    rep(i, t)
//        test();
//
//    return 0;
//}
//
//
//
