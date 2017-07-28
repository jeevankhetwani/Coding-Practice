////
//// Created by jeevan on 1/17/17.
////
//#include<iostream>
//#include<vector>
//#include "Trie.h"
//
//using namespace std;
//
//void respace(string& s, vector<string>& list) {
//    Trie *dictionary = new Trie(list);
//
//    for (int i = 0; i < s.size(); i++) {
//        int k = dictionary->match(s, i);
//
//        if (k != -1) {
//
//            if (i != 0 && s[i-1] != ' ') {
//                s.insert(i, 1, ' ');
//                i += k + 1;
//            } else
//                i += k;
//
//            if ( i < s.size() - 1 )
//                s.insert(i, 1, ' ');
//        }
//    }
//
//}
//
//int main() {
//
//    vector<string> list = {"looked", "just", "like", "her", "look", "brother"};
//    string doc = "jesslookedjustliketimherbrother";
//
//    respace(doc, list);
//
//    cout << doc;
//    return 0;
//}
//
