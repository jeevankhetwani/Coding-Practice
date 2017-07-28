////
//// Created by jeevan on 4/15/17.
////
//#include <iostream>
//using namespace std;
//
//int find(string s) {
//
//    int countLeft = 0, countRight = 0, res;
//
//    for(int i = 0; i < s.length(); i++) {
//
//        if(s[i] == '(')
//            countLeft++;
//        else {
//            countRight++;
//
//            if(countLeft < countRight) {
//                res = max(res, countLeft * 2);
//                countLeft = countRight = 0;
//            }
//        }
//    }
//
//    res = max(res, 2 * countRight);
//
//    return res;
//}
//
//void test() {
//
//    string s;
//    cin >> s;
//
//    cout << find(s) << endl;
//}
//
//int main() {
//
//    int t;
//    cin >> t;
//
//    while(t--)
//        test();
//
//    return 0;
//}
