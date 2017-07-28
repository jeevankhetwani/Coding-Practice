////
//// Created by jeevan on 1/10/17.
////
//#include<iostream>
//#include<set>
//#include "Trie.h"
//
//using namespace std;
//
//Trie* buildTrie(vector<string> words) {
//    return  new Trie(words);
//}
//
//void find(unordered_map<char, string> mapping, TrieNode* root, string keys, string prefix = "", int index = 0) {
//
//    if (index == keys.size()) {
//        if (root->isTerminate())
//            cout << prefix << " ";
//        return;
//    }
//
//    string chars = mapping[keys[index]];
//
//    for (char ch: chars) {
//        TrieNode* child = root->getChild(ch);
//
//        if ( child != nullptr )
//            find(mapping, child, keys, string(prefix + ch), index + 1);
//    }
//}
//
//void printChild( TrieNode* root, string prefix ) {
//    if (root->isTerminate())
//        cout << prefix << " ";
//
//    unordered_map<char, TrieNode*>::const_iterator itr = root->getBegin();
//
//    while( itr != root->getEnd() ) {
//        char data = itr->first;
//        TrieNode* child = itr->second;
//        printChild(child, string(prefix + data));
//        itr++;
//    }
//}
//
//void findPrefix(unordered_map<char, string> mapping, TrieNode* root, string keys, string prefix = "", int index = 0) {
//
//    if (index == keys.size()) {
//        printChild(root, prefix);
//        return;
//    }
//
//    string chars = mapping[keys[index]];
//
//    for (char ch: chars) {
//        TrieNode* child = root->getChild(ch);
//
//        if ( child != nullptr )
//            findPrefix(mapping, child, keys, string(prefix + ch), index + 1);
//    }
//
//
//}
//
//int main() {
//
//    unordered_map<char, string> mapping ( {
//                                                  {'2', "abc"}, {'3', "def"},
//                                                  {'4', "ghi"}, {'5', "jkl"},
//                                                  {'6', "mno"}, {'7', "pqrs"},
//                                                  {'8', "tuv"}, {'9',  "wxyz"}
//
//                                          });
//
//    vector<string> words = {"tree", "used", "anu", "bot", "true"};
//    Trie* trie = buildTrie(words);
//
//    findPrefix(mapping, trie->getRoot(), "87");
//    return 0;
//
//}
