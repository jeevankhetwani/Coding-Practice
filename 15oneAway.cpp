////
//// Created by jeevan on 12/18/16.
////
//
//#include<iostream>
//#include<cmath>
//#include<string>
//#include<map>
//
//using namespace std;
//
//bool check(string s1, string s2) {
//    map<char, int> m;
//    char ch;
//    int val = 0;
//
//    if ( abs ( s1.length() - s2.length() ) > 1 )
//        return false;
//
//    for (int i = 0; i < s1.length(); i++) {
//        ch = s1.at(i);
//        if ( m.find(ch) == m.end() )
//            m[ch] = 1;
//        else
//            m[ch] += 1;
//    }
//
//    for (int i = 0; i < s2.length(); i++) {
//        ch = s2.at(i);
//        if ( m.find(ch) == m.end() )
//            m[ch] = 1;
//        else
//            m[ch] -= 1;
//    }
//
//    map<char, int>::iterator itr = m.begin();
//    while ( itr!= m.end() ) {
//        val += abs(itr->second);
//
//        if ( val > 2 )
//            return false;
//
//        itr++;
//    }
//
//    return true;
//}
//
//
//int main() {
//
//    string s1 = "pale";
//    string s2 = "bake";
//    cout<<boolalpha;
//    cout<<check(s1, s2)<<endl;
//    return 0;
//}
