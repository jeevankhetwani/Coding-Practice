////
//// Created by jeevan on 3/24/17.
////
//
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
//const int M = 20, N = 20;
//char mat[N][M];
//
//void generate(string& s) {
//
//    int index = s.find('?');
//
//    if(index == string::npos) {
//        cout << s << " ";
//        return;
//    }
//
//
//    string s1 = s; s1[index] = '0';
//    string s2 = s; s2[index] = '1';
//
//    generate(s1);
//    generate(s2);
//
//}
//
//
//void test() {
//
//    string s;
//    cin >> s;
//    generate(s);
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
//
//
