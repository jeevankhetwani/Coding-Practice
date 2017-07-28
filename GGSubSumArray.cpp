////
//// Created by jeevan on 3/24/17.
////
//#include <iostream>
//
//#define rep(i, n) for(int i = 0; i < n; i++)
//#define fi(i, a, b) for(int i = a; i <= b; i++)
//#define fd(i, a, b) for(int i = a; i >= b; i--)
//
//using namespace std;
//
//const int M = 100;
//int m[M];
//
//int check(int n, int sum) {
//
//    int currSum = 0, start = 0, minLen = n, currLen;
//
//    rep(i, n) {
//
//        currSum += m[i];
//
//        if(currSum <= sum)
//            continue;
//
//        int j = start;
//
//        while(currSum - m[j] > sum) {
//            currSum -= m[j];
//            j++;
//        }
//
//
//        currLen = i - j + 1;
//
//        minLen = min(minLen, currLen);
//
//        start = j;
//    }
//
//    return minLen;
//
//}
//
//void test() {
//
//    int n, sum;
//    cin >> n >> sum;
//
//    rep(i, n)
//        cin >> m[i];
//
//    cout << check(n, sum);
//    cout << endl;
//
//}
//
//int main() {
//
//    int t;
//    cin >> t;
//
//    rep(i, t)
//        test();
//
//    return 0;
//}
