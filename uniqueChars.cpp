////
//// Created by jeevan on 12/17/16.
////
//#include<iostream>
//
//
//using namespace std;
//
//
//bool check(string s) {
//    int val = 0, ch, bit ;
//    for (int i = 0; i < s.length(); i++) {
//        ch = s.at(i) - 'a';
//        bit = 1 << ch;
//        if ( ( val & bit )  != 0 ) {
//
//            return false;
//        }
//        val |= bit;
//    }
//
//    return true;
//}
//
//
//int main() {
//    cout << boolalpha;
//    cout<<check("sumet")<<endl;
//
//}
