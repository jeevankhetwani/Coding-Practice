////
//// Created by jeevan on 3/29/17.
////
//#include <iostream>
//#include <cmath>
//#define rep(i, n) for(int i = 0; i < n; i++)
//#define fi(i, a, b) for(int i = a; i <= b; i++)
//#define fd(i, a, b) for(int i = a; i >= b; i--)
//
//using namespace std;
//
//int gethash(string x) {
//
//    int result = 0, d = 1;
//
//    fd(i, x.length() - 1, 0) {
//        result += ( x[i] - 'A') * d;
//        d *= 7;
//    }
//
//    return result;
//}
//
//bool check(string a, string b, int index) {
//
//    rep(i, b.length())
//        if(a[i + index] != b[i])
//            return false;
//
//    return true;
//
//}
//
//int KMP(const string& a, const string& b) {
//
//    int alen = a.length(), blen = b.length();
//
//    if(alen < blen)
//        return -1;
//
//    int hashVal = gethash(b), factor = (int) pow(7.0, blen - 1);
//
//    int currVal = gethash(a.substr(0, blen));
//
//    fi(i, blen, alen) {
//
//        if(currVal == hashVal && check(a, b, i - blen))
//            return i - blen;
//
//        if(i == alen)
//            break;
//
////        update hash
//        currVal = ( currVal - ( a[i - blen] - 'A') * factor ) * 7 + (a[i] - 'A');
//    }
//
//    return -1;
//
//}
//
//void test() {
//
//    string a, b;
//
//    cin >> a >> b;
//
//    cout << KMP(a, b) << endl;
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
//    return 0;
//}
//
