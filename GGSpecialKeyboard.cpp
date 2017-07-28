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
//
//int mymax(int a, int b, int c) {
//    return max( a, max(b, c));
//}
//
//int find(int keys, int buffer, int printed) {
//
//    if (keys < 0)
//        return INT32_MIN;
//
//    if(keys == 0)
//        return 0;
//
//    return max( buffer + find(keys - 1, buffer, printed + buffer),
//                printed + find(keys - 3, printed, 2 * printed )    );
//}
//
//int find(int keys) {
//
//    int result = 0;
//
//    fi(i, 1, keys) {
//
//        result = max( result, i + find(keys - i, 0, i));
//
////        if(result > keys)
////            break;
//    }
//
//    return result;
//
//}
//
//void test() {
//
//    int n;
//     cin >> n;
//
//    cout << find(n) << endl;
//}
//
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
//
//
//
//
//
