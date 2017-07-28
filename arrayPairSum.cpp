////
//// Created by jeevan on 5/3/17.
////
#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>
#include <algorithm>

using namespace std;
//
//class Solution {
//public:
//
//    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
//
//        vector<vector<int>> res(r);
//
//        if( nums.size() == 0 || nums.size() * nums[0].size() != r * c )
//            return nums;
//
//        int count = 0;
//
//        for(int i = 0; i < nums.size(); i++)
//            for(int j = 0; j < nums[i].size(); j++) {
//                res[count / c].push_back(nums[i][j]);
//                count++;
//            }
//
//
//        return res;
//    }
//
//
//    int arrayPairSum(vector<int>& nums) {
//
//        sort(nums.begin(), nums.end());
//
//        int ans = 0;
//        for(int i = 0; i < nums.size(); i += 2)
//            ans += nums[i];
//
//
//    }
//
//    static void reverseWord(string& s, int i, int j) {
//
//        while(i < j) {
//            char tmp = s[i];
//            s[i] = s[j];
//            s[j] = tmp;
//            i++; j--;
//        }
//    }
//
//    static string reverseWords(string s) {
//
//        int start = -1, tmp = 0;
//
//        while(tmp < s.size()) {
//
//            if(s[tmp] != ' ' && start == -1)
//                start = tmp;
//
//            if(s[tmp] == ' ' && start != -1) {
//                reverseWord(s, start, tmp - 1);
//                start = -1;
//            }
//
//            tmp++;
//        }
//
//        if(start != -1)
//            reverseWord(s, start, s.size() - 1);
//
//        return s;
//    }
//
//};
//
//int findComplement(int num) {
//
//    if(num == 0)
//        return 1;
//
//    int half = num / 2;
//
//    int n = 1;
//
//    while( n <= half )
//        n *= 2;
//
//    return ~num & (n - 1);
//
//}
//
//vector<string> findWords(vector<string>& words) {
//
//    int i, j;
//    vector<string> rows = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};
//    unordered_map<char, int> mymap;
//
//    for(i = 0; i < rows.size(); i++)
//        for(j = 0; j < rows[i].size(); j++) {
//            mymap[rows[i][j]] = i;
//            mymap[rows[i][j] + 'A' - 'a'] = i;
//        }
//
//    vector<string> res;
//
//    for(i = 0; i < words.size(); i++) {
//        string s = words[i];
//        int index = mymap[s[0]];
//
//        for(j = 1; j < s.length(); j++)
//            if(mymap[s[j]] != index)
//                break;
//
//        if(j == s.length())
//            res.push_back(s);
//    }
//
//    return res;
//
//}
//
//
//vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
//
//    vector<int> ans;
//    unordered_map<int, int> mymap;
//    stack<int> st;
//
//    for(int n: nums) {
//
//        while(!st.empty() && n > st.top()) {
//            mymap[st.top()] = n;
//            st.pop();
//        }
//
//        st.push(n);
//    }
//
//    while(!st.empty()) {
//        mymap[st.top()] = -1;
//        st.pop();
//    }
//
//    for(int n: findNums)
//        ans.push_back(mymap[n]);
//
//    return ans;
//
//}
//
//int islandPerimeter(vector<vector<int>>& grid) {
//
//    int count = 0, repeat = 0;
//
//    for(int i = 0; i < grid.size(); i++)
//        for(int j = 0; j < grid[i].size(); j++) {
//
//            if(grid[i][j]) {
//
//                count++;
//
//                if (i && grid[i - 1][j])
//                    repeat++;
//
//                if (j && grid[i][j - 1])
//                    repeat++;
//            }
//
//        }
//
//    return 4 * count - 2 * repeat;
//}
//
//int findMaxConsecutiveOnes(vector<int>& nums) {
//
//    int maxLen = 0, count = 0;
//    for(int i = 0; i < nums.size(); i++) {
//
//        if(nums[i]) {
//            count++;
//            maxLen = max(maxLen, count);
//        }
//        else
//            count = 0;
//
//    }
//    return maxLen;
//}
//
//
//bool detectCapitalUse(string word) {
//
//    bool small  = false, cap = false;
//
//    if(isupper(word[0]))
//        small = true;
//
//    for(int i = 1; i < word.size(); i++) {
//
//        if(!isupper(word[i]))
//            cap = true;
//        else
//            small = true;
//
//        if(small && cap)
//            return false;
//    }
//
//    return true;
//}
//
//vector<int> findDisappearedNumbers(vector<int>& nums) {
//
//    int n = nums.size(), n1 = n + 1;
//
//    vector<int> res;
//
//    for(int i = 0; i < n; i++) {
//        int index = nums[i] % n1 - 1;
//        nums[index] += n1;
//    }
//
//    for(int i = 0; i < n; i++) {
//        if(nums[i] / n1 == 0 )
//            res.push_back(i + 1);
//        else
//            nums[i] %= n;
//    }
//
//    return res;
//}
//vector<int> findDuplicates(vector<int>& nums) {
//
//    int n = nums.size(), n1 = n + 1;
//
//    vector<int> res;
//
//    for(int i = 0; i < n; i++) {
//        int index = nums[i] % n1 - 1;
//        nums[index] += n1;
//    }
//
//    for(int i = 0; i < n; i++) {
//
//        if(nums[i] / n1 > 1 )
//            res.push_back(i + 1);
//
//        nums[i] %= n;
//    }
//
//    return res;
//}
//
//
//int main() {
//
////    string s = "Let's take LeetCode contest";
////    string rev = Solution::reverseWords(s);
////    cout << rev;
//
////    int n = 2147483647;
////    cout << findComplement(n);
//
////    vector<string> words = {"Hello", "Alaska", "Dad", "Peace"};
////    findWords(words);
//
////    cout << detectCapitalUse("USA");
//
//    vector<int> nums = {4,3,2,7,8,2,3,1};
////    findDisappearedNumbers(nums);
//    findDuplicates(nums);
//    return 0;
//}
