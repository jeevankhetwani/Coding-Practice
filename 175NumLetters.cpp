////
//// Created by jeevan on 1/15/17.
////
//#include<iostream>
//#include<string>
//#include<vector>
//#include<unordered_map>
//
//using namespace std;
//
//bool isDigit(char ch) {
//    return ( ch >= '0' && ch <= '9');
//}
//
//string max(string s) {
//
//    int i, j, diff;
//    string s1;
//    unordered_map<int, int> low, high;
//
//    for (i = 0; i < s.size(); i++)
//        s1 += isDigit(s[i]) ? 'A' : 'B';
//
//    int numA = 0, numB = 0;
//
//    low[0] = high[0] = -1;
//    for (i = 0; i < s1.size(); i++) {
//        if (s1[i] == 'A')
//            numA++;
//        else
//            numB++;
//
//        diff = numA - numB;
//
//        if (low.find(diff) == low.end()) {
//            low[diff] = i;
//            high[diff] = i;
//        } else
//            high[diff] = i;
//    }
//
//    int m, max = -1;
//
//    unordered_map<int, int>::const_iterator itr = low.begin();
//
//    while( itr != low.end()) {
//
//        diff = itr->first;
//        i = itr->second;
//        j = high[diff];
//
//        if ( j - i > max ) {
//            m = i;
//            max = j - i;
//        }
//
//        itr++;
//    }
//
//    return s.substr(m + 1, max);
//
//}
//
//int main() {
//
//    string s = "s32je41";
//    cout << max(s);
//    return 0;
//}
//
