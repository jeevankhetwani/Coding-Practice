////
//// Created by jeevan on 1/18/17.
////
//#include<iostream>
//#include<vector>
//#include<string>
//#include "Trie.h"
//
//
//using namespace std;
//
//
//bool isLongWord(Trie* trie, string s, int wordsformed = 0) {
//
//    if (s.empty())
//
//        if(wordsformed >= 2)
//            return true;
//        else
//            return  false;
//
//    vector<int> indices = trie->firstPrefixWord(s);
//
//
//    for (int i = 0; i < indices.size(); i++) {
//
//        if ( isLongWord ( trie, s.substr ( indices[i] + 1 ), wordsformed + 1 ) )
//            return true;
//    }
//
//    return false;
//
//}
//
//int find(vector<string>& list) {
//
//    Trie *trie = new Trie(list);
//
//    int max = 0, maxIndex = -1;
//    string curr;
//
//
//    for (int i = 0; i < list.size(); i++) {
//        curr = list[i];
//
//        if ( isLongWord(trie, curr)  && max < curr.size() ) {
//            max = curr.size();
//            maxIndex = i;
//        }
//
//    }
//
//    return maxIndex;
//}
//
//int main() {
//
//    vector<string> list = {"cat", "banana", "dog", "nana", "walk", "bananawalkerdog","walker", "dogwalker"};
//    int index = find(list);
//
//    if(index == -1)
//        cout << "not";
//    else
//       cout << list[index];
//}