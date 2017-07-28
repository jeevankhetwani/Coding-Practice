////
//// Created by jeevan on 1/19/17.
////
//
//#include<iostream>
//#include<unordered_map>
//#include<vector>
//#include "Trie.h"
//
//using namespace std;
//
//void search(int startIndex, int len, string b, TrieNode* root, unordered_map<string, vector<int>>& mymap) {
//
//    if ( root->isTerminate() ) {
//        string prefix = b.substr(startIndex, len);
//
//        if (mymap.find(prefix) == mymap.end())
//            mymap[prefix] = vector<int> {startIndex};
//        else
//            mymap[prefix].push_back(startIndex);
//    }
//
//    char next = b[startIndex + len];
//
//    TrieNode *child = root->getChild(next);
//
//    if (child == nullptr)
//        return;
//
//    search(startIndex, len + 1, b, child, mymap);
//}
//
//unordered_map<string, vector<int>> find(string b, vector<string> T) {
//
//    Trie *trie = new Trie(T);
//    unordered_map<string, vector<int>> mymap;
//
//    for (int i = 0; i < b.size(); i++) {
//        search(i, 0, b, trie->getRoot(), mymap);
//    }
//
//    return mymap;
//
//}
//
//
//int main() {
//
//    vector<string> T = {"is", "ppi", "hi", "sis", "i", "ssippi"};
//    string b = "mississippi";
//
//    unordered_map<string, vector<int>> mymap = find(b, T);
//
//    unordered_map<string, vector<int>>::const_iterator itr1 = mymap.begin();
//
//    while( itr1 != mymap.end() ) {
//
//        string s = itr1->first;
//        vector<int> indices = itr1->second;
//
//        cout << s << " -> ";
//        for (int i = 0; i < indices.size(); i++)
//            cout << indices[i] << " ";
//
//        cout << endl;
//
//        itr1++;
//
//    }
//
//    return 0;
//}
