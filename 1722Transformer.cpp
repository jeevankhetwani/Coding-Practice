//
// Created by jeevan on 1/20/17.
//
#include<iostream>
#include<unordered_set>
#include<string>
#include<vector>

using namespace std;
//
//int ladderLength(string beginWord, string endWord, unordered_set<string>& dict) {
//// to find shortest path
//
//    if (beginWord == endWord)
//        return 1;
//
//    int minDist = INT32_MAX;
//
//    for (int i = 0; i < beginWord.size(); i++) {
//
//        if ( beginWord[i] != endWord[i] ) {
//
//            char letter = beginWord[i];
//
//            beginWord[i] = endWord[i];
//
//            if ( dict.find(beginWord) != dict.end() ) {
//
//                dict.erase(beginWord);
//
//                minDist = min(minDist, 1 + ladderLength(beginWord, endWord, dict));
//            }
//
//            beginWord[i] = letter;
//        }
//    }
//
//    return minDist;
//}
//
//int ladderLength(string beginWord, string endWord, vector<string>& dict) {
//
//    unordered_set<string> mydict(dict.begin(), dict.end());
//    return ladderLength(beginWord, endWord, mydict);
//}
//
//
//int main() {
//
//    string src = "hit", dest = "cog";
//    vector<string> dict = {"hot","dot","dog","lot","log","cog"};
//
//    cout << ladderLength(src, dest, dict);
//    return 0;
//}
