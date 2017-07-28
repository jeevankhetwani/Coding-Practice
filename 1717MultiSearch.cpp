////
//// Created by jeevan on 1/18/17.
////
//#include<iostream>
//#include "Trie.h"
//#include<string>
//#include<vector>
//
//using namespace std;
//
//vector<int> find(string b, vector<string>& T) {
//
//    vector<string> suffix (b.size());
//    vector<int> index (T.size());
//
//    for (int i = 0; i < b.size(); i++)
//        suffix.push_back(b.substr(i));
//
//    Trie *trie  = new Trie(suffix);
//
//    for (int i = 0; i < T.size(); i++)
//        index[i] =  trie->contains(T[i], false) ;
//
//    return index;
//
//}
//
//int main() {
//
//    vector<string> T = {"is", "ppi", "hi", "sis", "i", "ssippi"};
//    string b = "mississippi";
//
//    vector<int> index = find(b, T);
//
//    for (int i = 0; i < index.size(); i++)
//        cout << index[i] << " ";
//
//    return 0;
//}
