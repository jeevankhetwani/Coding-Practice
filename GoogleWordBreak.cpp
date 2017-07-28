////
//// Created by jeevan on 4/14/17.
////
//#include <iostream>
//#include <unordered_set>
//using namespace std;
//
//void check(string prefix, string s, unordered_set<string>& dict) {
//
//    int n = s.length();
//
//    if(n == 0)
//        cout << prefix << endl;
//
//    for(int i = 1; i <= s.length(); i++) {
//        string s1 = s.substr(0, i);
//
//        if(dict.find(s1) != dict.end())
//            check(prefix + " " + s1, s.substr(i), dict);
//
//    }
//}
//
//
//bool checkDP(string s, unordered_set<string>& dict) {
//
//    int n = s.length();
//    bool c[n + 1];
//
//    c[0] = true;
//
//    for(int i = 1; i <= n; i++) {
//
//        c[i] = false;
//
//        for(int j = 1; j <= i; j++) {
//            string s1 = s.substr(i - j, j);
//
//            if(c[i - j] && dict.find(s1) != dict.end()) {
//                c[i] = true;
//                break;
//            }
//
//        }
//    }
//
//    return c[n];
//}
//
//
//int main() {
//
//    unordered_set<string> dict {"i", "like", "sam", "sung", "samsung", "mobile", "ice",
//                                "cream", "icecream", "man", "go", "mango"};
//    string s = "ilikesamsungcream";
//
////    check("", s, dict);
//
//    cout << checkDP(s, dict);
//    return 0;
//}