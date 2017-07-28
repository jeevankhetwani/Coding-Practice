////
//// Created by jeevan on 3/22/17.
////
//#include <iostream>
//#include <unordered_map>
//#include <set>
//#include <string>
//#include <cstring>
//
//using namespace std;
//
//set<string> dict = { "i", "like", "sam", "sung", "samsung", "mobile", "ice", "and",
//                     "cream", "icecream", "man", "go", "mango"};
//
//bool find(string s, int index) {
//
//    int n = s.length();
//
//    if( index >= n)
//        return true;
//
//    int rem = n - index;
//
//    for(int i = 1; i <= rem; i++) {
//        string str = s.substr(index, i);
//
//        if( dict.find(str) != dict.end() && find(s, index + i))
//            return true;
//    }
//
//    return false;
//}
//
//bool DP(string s) {
//
//    int n = s.size();
//
//    if(n == 0)
//        return true;
//
//    bool c[n + 1];
//    memset(c, 0, sizeof(c));
//
//    for(int i = 1; i <= n; i++) {
//
//        if(c[i] == false && dict.find(s.substr(0, i)) != dict.end() )
//            c[i] = true;
//
//        if(c[i]) {
//
//            if(i == n)
//                return true;
//
//            for(int j = i + 1; j<= n; j++) {
//
//                if(c[j] == false && dict.find(s.substr(i, j - i)) != dict.end())
//                    c[j] = true;
//
//                if(j == n && c[j])
//                    return true;
//            }
//        }
//    }
//    return false;
//}
//
//void printAll(const string &s, int i, string prefix) {
//
//    int n = s.length();
//
//    for(int j = i + 1; j <= n; j++) {
//
//        string str = s.substr(i, j - i);
//
//        if(dict.find(str) != dict.end()) {
//
//            if(j == n) {
//                cout << prefix + str << endl;
//                return;
//            }
//            printAll(s, j, prefix + str + " ");
//        }
//
//    }
//}
//
//int main() {
//
//    string s = "ilikeicecreamandmango";
//
////    cout << find(s, 0);
////    cout << DP(s);
//    printAll(s, 0, "");
//    return 0;
//}
