////
//// Created by jeevan on 12/17/16.
////
//
//#include<iostream>
//#include<algorithm>
//#include <map>
//
//
//using namespace std;
//
//
//bool check1(string s1, string s2) {
////    sort and equate
//    sort(s1.begin(), s1.end());
//    sort(s2.begin(), s2.end());
//    return !s1.compare(s2);
//}
//
//bool check2 (string s1, string s2) {
////    create a hashmap and compare counts by first incrementing and then decrementing
//    map<char, int> m;
//    char ch;
//
//    if (s1.length()!=s2.length())
//        return false;
//
//    for (int i = 0; i < s1.length(); i++ ) {
//        ch = s1.at(i);
//        if ( m.find( ch ) == m.end() )
//            m[ch] = 1;
//        else
//            m[ch] += 2;
//    }
//
//    for (int i = 0; i < s2.length(); i++ ) {
//        ch = s2.at(i);
//
//        if ( m.find( ch ) == m.end() )
//            return false;
//
//        m[ch] -= 1;
//
//        if ( m[ch] < 0 )
//            return false;
//    }
//
//    return true;
//}
//
//
//int main() {
//    string s1 = "jeeva";
//    string s2 = "evaaj";
//    cout << boolalpha;
//    cout << check2(s1, s2);
//
//
//    return 1;
//}
//
