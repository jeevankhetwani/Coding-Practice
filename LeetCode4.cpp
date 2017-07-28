////
//// Created by jeevan on 6/13/17.
////
//#include <iostream>
//#include <unordered_map>
//#include <unordered_set>
//#include <vector>
//#include <queue>
//#include <stack>
//#include <string>
//#include <cstring>
//#include <algorithm>
//#include <sstream>
//
//using namespace std;
//
//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode(int x) : val(x), next(NULL) {}
//};
//
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//struct TrieNode {
//    bool terminate;
//    TrieNode* children[26];
//    TrieNode(): terminate(0), children{0} {}
//};
//
//class Trie {
//
//private:
//    const static int ALP_SIZE = 26;
//    struct TrieNode {
//        bool terminate;
//        TrieNode* children[ALP_SIZE];
//        TrieNode(): terminate(0), children{0} {}
//    };
//
//    TrieNode *root;
//
//public:
//    /** Initialize your data structure here. */
//    Trie() { root = new TrieNode(); }
//
//    /** Inserts a word into the trie. */
//    void insert(string word) {
//
//        TrieNode *node = root;
//
//        for(auto& ch: word) {
//
//            int index = ch - 'a';
//
//            if(node->children[index] == nullptr)
//                node->children[index] = new TrieNode();
//
//            node = node->children[index];
//        }
//
//        node->terminate = true;
//    }
//
//    /** Returns if the word is in the trie. */
//    bool search(string word) {
//
//        TrieNode *node = root;
//
//        for(auto& ch: word) {
//
//            node = node->children[ch - 'a'];
//
//            if(node == nullptr)
//                break;
//        }
//
//        return node && node->terminate;
//    }
//
//    /** Returns if there is any word in the trie that starts with the given prefix. */
//    bool startsWith(string prefix) {
//
//        TrieNode *node = root;
//
//        for(auto& ch: prefix) {
//
//            node = node->children[ch - 'a'];
//
//            if(node == nullptr)
//                break;
//        }
//
//        return node;
//    }
//};
//
//bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
//// 220
//
//    int n = nums.size();
//    long num, bucket;
//
//    if(n < 2 || t < 0 || k == 0)
//        return false;
//
//    unordered_map<long, long> buckets;
//
//    for(int i = 0; i < n; i++) {
//
//        if(i > k) {
//
//            num = (long)INT32_MAX + nums[i - k - 1];
//
//            bucket =  num / ((long)t + 1);
//
//            buckets.erase(bucket);
//        }
//
//
////        for -ve num
//         num = (long) INT32_MAX + nums[i];
//
//        bucket =  num / ((long)t + 1);
//
//        if( buckets.find(bucket) != buckets.end() ||
//                ( buckets.find(bucket - 1) != buckets.end() &&  num - buckets[bucket - 1] <= t) ||
//                ( buckets.find(bucket + 1) != buckets.end() &&  buckets[bucket + 1] - num <= t) )
//            return true;
//
//        buckets[bucket] = num;
//
//    }
//
//    return false;
//}
//
//bool containsNearbyAlmostDuplicate2(vector<int>& nums, int k, int t) {
////    optimum
//    vector<pair<long, int>> vec; // long number, index
//
//    for(int i =0; i <nums.size(); ++i) {
//        vec.push_back({nums[i], i});
//    }
//
//    sort(vec.begin(), vec.end());
//
//    for(int i = 0; i < vec.size(); ++i) {
//
//        for(int j = i +1; j < vec.size(); ++j) {
//            long diff = abs(vec[i].first - vec[j].first);
//            if(diff > t) break; // very important optimize
//
//            if(abs(vec[i].second - vec[j].second) <= k) return true;
//        }
//    }
//
//    return false;
//}
//
//struct elem {
//    string s;
//    int k;
//    elem(string s, int k): s(s), k(k) {}
//};
//
//string largestNumber2(vector<int>& nums) {
//
//    vector<string> buckets[10];
//
//    for(int x: nums) {
//        string s = to_string(x);
//        buckets[s.front() - '0'].push_back(s);
//    }
//
//    string res;
//
//    for(int i = 9; i > 0; i--) {
//
//        if(buckets[i].empty())
//            continue;
//
//        sort(buckets[i].begin(), buckets[i].end(), [](string& s1, string& s2) {
//            return s1 + s2 > s2 + s1;
//        });
//
//        for(auto& s: buckets[i])
//            res += s;
//    }
//
//    if(res.empty())
//        res.append(1, '0');
//    else
//        res.append(buckets[0].size(), '0');
//
//    return res;
//}
//
//
//string largestNumber(vector<int>& nums) {
//// not work
////    const int PLACES = 10;
////    int n = nums.size();
////    vector<string> numstr(n);
////    vector<elem> buckets[10];
////
////    for(int i = 0; i < nums.size(); i++) {
////        string s = to_string(nums[i]);
////        numstr[i] = s;
////        s.append(PLACES - s.size(), s.back());
////        buckets[s.front() - '0'].emplace_back(s, i);
////    }
////
////    string res;
////    for(int i = 9; i > 0; i--) {
////
////        sort(buckets[i].begin(), buckets[i].end(), [](elem& e1, elem& e2) {
////            return e1.s.compare(e2.s) > 0;
////        });
////
////        for(auto& p: buckets[i])
////            res += numstr[p.k];
////    }
////
////    if(res.empty())
////        res.append(1, '0');
////    else
////        res.append(buckets[0].size(), '0');
////
////    return res;
//}
//
//bool containsNearbyDuplicate(vector<int>& nums, int k) {
//
////   unordered_set<int> set;
////
////    if(!k)
////        return false;
////
////    for(int i = 0; i < nums.size(); i++) {
////
////        if(i > k)
////            set.erase(nums[i - k - 1]);
////
////        if(!set.insert(nums[i]).second)
////            return true;
////    }
////
////    return false;
//    unordered_map<int, int> mymap;
//
//    if(!k)
//        return false;
//
//    for(int i = 0; i < nums.size(); i++) {
//
//        if(i > k)
//            mymap[nums[i - k - 1]] = 0;
//
//        if(mymap[nums[i]]++ == 1)
//            return true;
//
//    }
//
//    return false;
//}
//
//int main() {
//
////    Trie trie;
////    cout << trie.startsWith("a");
//
////    vector<int> nums = {0,1,2,3,4,5,0};
////    cout << containsNearbyDuplicate(nums, 5);
//
////    vector<int> nums = {-1,2147483647};
////    cout << containsNearbyAlmostDuplicate(nums, 1, 2147483647);
//
//    vector<int> nums = {824,938,1399,5607,6973,5703,9609,4398,8247};
//    cout << largestNumber(nums);
//    return 0;
//}