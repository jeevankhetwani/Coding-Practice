////
//// Created by jeevan on 1/20/17.
////
//#include<iostream>
//#include<vector>
//#include <unordered_set>
//#include <unordered_map>
//#include <string>
//#include <queue>
//
//using namespace std;
//
//int ladderLength(string beginWord, string endWord, unordered_set<string>& dict) {
//// to find shortest path
//
//    unordered_set<string> head, tail, tmp, *smaller, *bigger;
//
//    head.insert(beginWord);
//    tail.insert(endWord);
//
//    int dist = 2;
//    dict.erase(beginWord);
//    dict.erase(endWord);
//
//    while(!head.empty() && !tail.empty()) {
//
//        if(head.size() <= tail.size()) {
//            smaller = &head;
//            bigger = &tail;
//        } else {
//            smaller = &tail;
//            bigger = &head;
//        }
//
//        for(string word: *smaller) {
//
//            for(int i = 0; i < word.size(); i++) {
//
//                char letter = word[i];
//
//                for(int j = 0; j < 26; j++) {
//
//                    word[i] = 'a' + j;
//
//                    if(bigger->find(word) != bigger->end())
//                        return dist;
//
//                    if(dict.find(word) != dict.end()) {
//                        tmp.insert(word);
//                        dict.erase(word);
//                    }
//                }
//
//                word[i] = letter;
//            }
//        }
//        *smaller = tmp;
//        tmp.clear();
//        dist++;
//    }
//
//    return 0;
//}
//
//int ladderLength(string beginWord, string endWord, vector<string>& dict) {
//
//    unordered_set<string> mydict(dict.begin(), dict.end());
//
//    if(mydict.find(endWord) == mydict.end())
//        return 0;
//
//    return ladderLength(beginWord, endWord, mydict);
//}
//
//bool findLaddersHelper(string const&  beginWord, string const& endWord, unordered_set<string>& dict,
//                       unordered_map<string, vector<string>>& next ) {
//
//    bool reach = false;
//    unordered_set<string> head { beginWord }, tail { endWord }, *small, *big;
//    dict.erase(beginWord);
//    dict.erase(endWord);
//
//    while(!head.empty() && !tail.empty()) {
//
//        if(head.size() <= tail.size()) {
//            small = &head;
//            big = &tail;
//        } else {
//            small = &tail;
//            big = &head;
//        }
//
//        unordered_set<string> tmpSet;
//
//        for(auto it = small->begin(); it != small->end(); it++) {
//
//            string word = *it;
//
//            for(auto ch = word.begin(); ch != word.end(); ch++) {
//
//                char tmpChar = *ch;
//
//                for(*ch = 'a'; *ch <= 'z'; ++(*ch)) {
//
//                    if(big->find(word) != big->end()) {
//                        reach = true;
//                        small == &head ? next[*it].push_back(word) : next[word].push_back(*it);
//                    }
//                     else if(!reach && dict.find(word) != dict.end()) {
//                        dict.erase(word);
//                        tmpSet.insert(word);
//                        small == &head ? next[*it].push_back(word) : next[word].push_back(*it);
//                    }
//
//                }
//                *ch = tmpChar;
//            }
//        }
//
//        if(reach)
//            break;
//
//        *small = tmpSet;
//    }
//
//    return reach;
//}
//
//void findPaths(vector<string> path, string currWord, string endWord,
//               unordered_map<string, vector<string>>& next,
//               vector<vector<string>>& paths) {
//
//    if(currWord == endWord) {
//        paths.push_back(path);
//        return;
//    }
//
//    for(string word: next[currWord]) {
//        path.push_back(word);
//        findPaths(path, word, endWord, next, paths);
//        path.pop_back();
//    }
//}
//
//vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
//
//    vector<vector<string>> paths;
//    unordered_set<string> dict(wordList.begin(), wordList.end());
//    unordered_map<string, vector<string>> next;
//    vector<string> path(1, beginWord);
//
//    if(dict.find(endWord) != dict.end())
//        if(beginWord == endWord)
//            paths.push_back(path);
//        else if(findLaddersHelper(beginWord, endWord, dict, next))
//            findPaths(path, beginWord, endWord, next, paths);
//
//    return paths;
//}
//
//class Compare {
//public:
//    bool operator()(int x, int y) {
//        return x > y;
//    }
//};
//
//int findKthLargest(vector<int>& nums, int k) {
//
//    int n = nums.size();
//
//    priority_queue<int, vector<int>, Compare> pq;
//
//    for(int i = 0; i < k; i++)
//        pq.push(nums[i]);
//
//    for(int i = k; i < n; i++)
//        if(nums[i] > pq.top()) {
//            pq.pop();
//            pq.push(nums[i]);
//        }
//
//    return pq.top();
//}
//
//int main() {
//
////    string src = "a", dest = "c";
////    vector<string> dict = {"a", "b", "c"};
////
////    cout << ladderLength(src, dest, dict);
////
////    vector<vector<string>> paths = findLadders(src, dest, dict);
////
////    for(vector<string>& v: paths) {
////        for (string& word: v)
////            cout << word << " ";
////        cout << endl;
////    }
//
//    vector<int> nums {3,2,1,5,6,4};
//    cout << findKthLargest(nums, 2);
//    return 0;
//}
