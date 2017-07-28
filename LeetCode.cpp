////
//// Created by jeevan on 5/29/17.
////
//#include <iostream>
//#include <vector>
//#include <unordered_set>
//#include <unordered_map>
//#include <map>
//#include <stack>
//#include <algorithm>
//#include <queue>
//#include <bitset>
//#include <cstring>
//
//using namespace std;
//
//
//int subarraySum(vector<int>& nums, int k) {
//
//    int sum = 0, res = 0;
//    unordered_map<int, int> prefixSum;
//
//    prefixSum[sum] = 1;
//
//    for(int i = 0; i < nums.size(); i++) {
//
//        sum += nums[i];
//
//        res += prefixSum[sum - k];
//
//        prefixSum[sum] += 1;
//    }
//
//    return res;
//}
//
//string findLongestWord(string s, vector<string>& d) {
//
//    string res = "";
//
//    for(string& word: d) {
//
//        int i = 0;
//
//        for(char c: s)
//            if(i < word.size() && word[i] == c)
//                i++;
//
//        if(i == word.size() && word.size() >= res.size())
//            if(word.size() > res.size() || word.compare(res) < 0)
//                res = word;
//
//
//    }
//
//    return res;
//
//}
//
//struct Interval {
//    int start;
//    int end;
//    Interval() : start(0), end(0) {}
//    Interval(int s, int e) : start(s), end(e) {}
//};
//
//vector<int> findRightInterval(vector<Interval>& intervals) {
//
//    int n = intervals.size();
//
//    vector<int> res;
//    map<int, int> mymap;
//
//    for(int i = 0; i < n; i++)
//        mymap[intervals[i].start] = i;
//
//    for(auto in: intervals) {
//
//        auto itr = mymap.lower_bound(in.end);
//
//        if(itr == mymap.end())
//            res.push_back(-1);
//        else
//            res.push_back(itr->second);
//    }
//    return res;
//}
//
//int eraseOverlapIntervals(vector<Interval>& intervals) {
//
//    int n = intervals.size();
//
//    sort(intervals.begin(), intervals.end(), [](Interval& i1, Interval& i2)->bool {
//        return i1.end < i2.end;
//    });
//
//    int end = intervals[0].end, count = 1;
//
//    for(int j = 1; j < n; j++) {
//
//        if(intervals[j].start >= end) {
//            end = intervals[j].end;
//            count++;
//        }
//    }
//
//    return n - count;
//}
//
//vector<int> grayCode(int n) {
//
//    vector<int> res(n);
//
//    for(int i = 0; i < 1 << n; i++)
//        res[i] = i ^ ( i >> 1);
//    return res;
//}
//
//int uniquePaths(int m, int n) {
//
//    vector<int> c(n, 1);
//
//    for(int i = 1; i < m; i++)
//        for(int j = 1; j < n; j++)
//            c[j] += c[j - 1];
//    return c[n - 1];
//}
//
//
//int findMin2(vector<int>& nums) {
//
//    int left = 0, right = nums.size() - 1;
//
//    while(nums[left] > nums[right]) {
//
//        int mid = (left + right) / 2;
//
//        if(nums[mid] > nums[left])
//            left = mid + 1;
//        else {
//            right = mid;
//            ++left;
//        }
//    }
//
//    return nums[left];
//}
//
//vector<vector<int>> generateMatrix(int n) {
//
//    vector<vector<int>> res(n, vector<int>(n));
//
//    int rowbegin = 0, rowend = n - 1, colbegin = 0, colend = n - 1, num = 1;
//
//    while(num <= n * n) {
//
//        for(int i = colbegin; i <= colend; i++)
//            res[rowbegin][i] = num++;
//        rowbegin++;
//
//        for(int i = rowbegin; i <= rowend; i++)
//            res[i][colend] = num++;
//        colend--;
//
//        for(int i = colend; i >= colbegin; i--)
//            res[rowend][i] = num++;
//        rowend--;
//
//        for(int i = rowend; i >= rowbegin; i--)
//            res[i][colbegin] = num++;
//        colbegin++;
//    }
//
//    return res;
//}
//
//class RandomizedSet {
//public:
//    /** Initialize your data structure here. */
//    unordered_map<int, int> mymap;
//    vector<int> v;
//
//    RandomizedSet() {
//        srand(time(NULL));
//    }
//
//    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
//    bool insert(int val) {
//
//        if(mymap.find(val) != mymap.end())
//            return false;
//
//        mymap[val] = v.size();
//        v.push_back(val);
//        return true;
//
//    }
//
//    /** Removes a value from the set. Returns true if the set contained the specified element. */
//    bool remove(int val) {
//
//        if(mymap.find(val) == mymap.end())
//            return false;
//
//        int index = mymap[val];
//
//        if(index != v.size() - 1) {
//            mymap[v.back()] = index;
//            v[index] = v.back();
//        }
//
//        v.pop_back();
//        mymap.erase(val);
//
//        return true;
//    }
//
//    /** Get a random element from the set. */
//    int getRandom() {
//
//        return v[rand() % v.size()];
//    }
//};
//
//void combineHelper(vector<int>& nums, int k, int val, int n, vector<vector<int>>& res) {
//
//    if(nums.size() == k) {
//        res.push_back(nums);
//        return;
//    }
//
//    for(int j = val; j <= n && n - j + 1 >= k - nums.size(); j++) {
//        nums.push_back(j);
//        combineHelper(nums, k, j + 1, n, res);
//        nums.pop_back();
//    }
//
//}
//
//vector<vector<int>> combine2(int n, int k) {
//
//    vector<vector<int>> res;
//    vector<int> curr(k, 0);
//
//    int i = 0;
//    while (i >= 0) {
//        curr[i]++;
//
//        if (n - curr[i] < k - 1 - i) --i;
//        else if (i == k - 1) res.push_back(curr);
//        else {
//            i++;
//            curr[i] = curr[i - 1];
//        }
//    }
//    return res;
//}
//
//void findHelper(vector<int>& tmp, int i, vector<vector<int>>& res, vector<int>& nums) {
//
//    if (tmp.size() > 1)
//        res.push_back(tmp);
//
//    unordered_set<int> popped;
//
//    for (int j = i; j < nums.size(); j++) {
//
//        if (!tmp.empty() && tmp.back() > nums[j])
//            continue;
//
//        if(popped.find(nums[j]) != popped.end())
//            continue;
//
//        tmp.push_back(nums[j]);
//
//        findHelper(tmp, j + 1, res, nums);
//
//        tmp.pop_back();
//
//        popped.insert(nums[j]);
//    }
//}
//
//bool partitionHelper(int index, int sum, int target, vector<int>& nums) {
//
//    if(sum == target)
//        return true;
//
//    if(sum > target || index == nums.size())
//        return false;
//
//    return partitionHelper(index + 1, sum, target, nums) ||
//           partitionHelper(index + 1, sum + nums[index], target, nums);
//
//}
//
//bool canPartition(vector<int>& nums) {
//
//    int totalsum = 0;
//
//    for(int x: nums)
//        totalsum += x;
//
//    if(totalsum & 1)
//        return false;
//
//    return partitionHelper(0, 0, totalsum / 2, nums);
//}
//
//bool canPartition3(vector<int>& nums) {
//    const int MAX_NUM = 100;
//    const int MAX_ARRAY_SIZE = 200;
//    bitset<MAX_NUM * MAX_ARRAY_SIZE / 2 + 1> bits(1);
//    int sum = 0;
//    for (auto n : nums) {
//        sum += n;
//        bits |= bits << n;
//    }
//    return !(sum % 2) && bits[sum / 2];
//}
//
//bool canPartition2(vector<int>& nums) {
//
//    int totalsum = 0, n = nums.size();
//
//    for (int x: nums)
//        totalsum += x;
//
//    if (totalsum & 1)
//        return false;
//
//    totalsum /= 2;
//
////    bool dp[n + 1][totalsum + 1] = {0};
////
////    dp[0][0] = 1;
////
////    for (int i = 1; i <= n; i++)
////        for (int j = 0; j <= totalsum; j++)
////            if (j >= nums[i - 1])
////                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - nums[i - 1]];
////            else
////                dp[i][j] = dp[i - 1][j];
////    return dp[n][totalsum];
//
//    bool dp[totalsum + 1] = {0};
//    dp[0] = true;
//
//    for(int num: nums)
//        for(int j = totalsum; j >= num; j--)
//            dp[j] = dp[j] || dp[j - num];
//
//    return dp[totalsum];
//
//}
//
//vector<vector<int>> findSubsequences(vector<int>& nums) {
//
//    vector<int> tmp;
//    vector<vector<int>> res;
//    findHelper(tmp, 0, res, nums);
//    return res;
//}
//
//bool increasingTriplet(vector<int>& nums) {
//
//    int c1 = INT32_MAX, c2 = INT32_MAX;
//
//    for(int x: nums)
//        if(x <= c1)
//            c1 = x;
//        else if(x <= c2)
//            c2 = x;
//        else
//            return true;
//
//    return false;
//}
//
//vector<vector<int>> combine(int n, int k) {
//
//    vector<vector<int>> res;
//    vector<int> nums;
//    combineHelper(nums, k, 1, n, res);
//    return res;
//}
//
//
//int findMin(vector<int>& nums) {
//
//    int low = 0, high = nums.size() - 1;
//
//    int minIndex = 0;
//
//    while(low <= high) {
//
//        int mid = (low + high) / 2;
//
//        if(nums[mid] <= nums[high]) {
//
//            if(nums[minIndex] > nums[mid])
//                minIndex = mid;
//
//            high = mid - 1;
//        } else
//            low = mid + 1;
//    }
//
//    return nums[minIndex];
//
//}
//
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//
//void rightSideViewHelper(TreeNode* root, int level, vector<int>& res) {
//
//    if(root == nullptr)
//        return;
//
//    if(level == res.size())
//        res.push_back(root->val);
//
//    rightSideViewHelper(root->right, level + 1, res);
//    rightSideViewHelper(root->left, level + 1, res);
//
//}
//
//vector<int> rightSideView2(TreeNode* root) {
//
//    vector<int> res;
//
//    rightSideViewHelper(root, 0, res);
//
//    return res;
//}
//
//vector<int> rightSideView(TreeNode* root) {
//
//    vector<int> res;
//    queue<TreeNode*> level;
//
//    if(root) {
//
//        level.push(root);
//
//        while(!level.empty()) {
//
//            int n = level.size();
//
//            res.push_back(level.front()->val);
//            for(int i = 0; i < n; i++) {
//
//                root = level.front();
//                level.pop();
//
//                if(root->right)
//                    level.push(root->right);
//
//                if(root->left)
//                    level.push(root->left);
//            }
//        }
//    }
//
//    return res;
//}
//
//int maxProfit(vector<int>& prices, int index = 0) {
//
//    int n = prices.size();
//
//    if(n < 2)
//        return 0;
//
//    int b0 = -prices[0], b1 = b0;
//    int s0 = 0, s1 = 0, s2 = 0;
//
//    for(int i = 1; i < n; i++) {
//
//        b0 = max(b0, s2 - prices[i]);
//
//        s0 = max(s1, b1 + prices[i]);
//
//        b1 = b0; s2 = s1; s1 = s0;
//    }
//
//    return s0;
//}
//
//int maxProfit2(vector<int>& prices, int index = 0) {
//
//    int n = prices.size();
//    int c[n + 2] = {0};
//
//    for(int i = n - 2; i >= 0; i--) {
//        c[i] = c[i + 1];
//        for (int j = i + 1; j < n; j++)
//            if (prices[j] > prices[i])
//                c[i] = max(c[i], prices[j] - prices[i] + c[j + 2]);
//    }
//
//    return c[0];
//}
//
//int singleNumber(vector<int>& nums) {
//
//    int ones = 0, twos = 0;
//
//    for(int x:  nums) {
//        ones = (ones ^ x) & ~twos;
//        twos = (twos ^ x) & ~ones;
//    }
//
//    return ones;
//}
//
//class NestedInteger {
//public:
//    // Return true if this NestedInteger holds a single integer, rather than a nested list.
//    bool isInteger() const;
//
//    // Return the single integer that this NestedInteger holds, if it holds a single integer
//    // The result is undefined if this NestedInteger holds a nested list
//    int getInteger() const;
//
//    // Return the nested list that this NestedInteger holds, if it holds a nested list
//    // The result is undefined if this NestedInteger holds a single integer
//    const vector<NestedInteger> &getList() const;
//};
//
////class NestedIterator {
////public:
////    NestedIterator(vector<NestedInteger> &nestedList) {
////        begins.push(nestedList.begin());
////        ends.push(nestedList.end());
////    }
////
////    int next() {
////        hasNext();
////        return (begins.top()++)->getInteger();
////    }
////
////    bool hasNext() {
////        while (begins.size()) {
////            if (begins.top() == ends.top()) {
////                begins.pop();
////                ends.pop();
////            } else {
////                auto x = begins.top();
////                if (x->isInteger())
////                    return true;
////                begins.top()++;
////                begins.push(x->getList().begin());
////                ends.push(x->getList().end());
////            }
////        }
////        return false;
////    }
////
////private:
////    stack<vector<NestedInteger>::iterator> begins, ends;
////};
//
//
//int lengthOfLIS(vector<int>& nums) {
//
//    int n = nums.size(), len = 0;
//
//    if(n != 0) {
//
//        int dp[n] = {0};
//
//        for (int x: nums) {
//            auto it = lower_bound(dp, dp + len, x);
//
//            *it = x;
//
//            if (it == dp + len)
//                len++;
//        }
//    }
//    return len;
//}
//
//
//int findMaxForm(vector<string>& strs, int m, int n) {
//
//    int zeros, ones;
//    int dp[m + 1][n + 1];
//
//    memset(dp, 0, sizeof(dp));
//
//    for(string& s: strs) {
//
//        zeros = count(s.begin(), s.end(), '0');
//        ones = s.size() - zeros;
//
//        for(int i = m; i >= zeros; i--)
//            for(int j = n; j >= ones; j--)
//                dp[i][j] = max(dp[i][j], dp[i - zeros][j - ones] + 1);
//    }
//
//    return dp[m][n];
//}
//
//struct ListNode {
//         int val;
//         ListNode *next;
//         ListNode(int x) : val(x), next(NULL) {}
//     };
//
//ListNode* swapPairs2(ListNode* head) {
//
//    ListNode *dmy = new ListNode(0);
//    dmy->next = head;
//
//    ListNode *prev = dmy, *curr, *succ, *tmp;
//
//    while(prev->next && prev->next->next) {
//
//        curr = prev->next, succ = curr->next, tmp = succ->next;
//
//        prev->next = succ;
//        succ->next = curr;
//        curr->next = tmp;
//
//        prev = curr;
//    }
//
//    return dmy->next;
//}
//
//double dist(vector<int>& p1, vector<int>& p2) {
//
//    return pow(p1[0] - p2[0], 2.0) + pow(p1[1] - p2[1], 2.0);
//}
//
//
//bool check(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
//
//    return dist(p1, p2) != 0 && dist(p1, p2) == dist(p2, p3) && dist(p2, p3) == dist(p3, p4)
//            && dist(p3, p4) == dist(p4, p1) && dist(p1, p3) == dist(p2, p4);
//}
//
//bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
//
//    return check(p1, p2, p3, p4) || check(p1, p3, p2, p4) ||  check(p1, p2, p4, p3);
//
//}
//
//ListNode* swapPairs(ListNode* head) {
//
//    if(head == nullptr || head->next == nullptr)
//        return head;
//
//    ListNode *next = head->next;
//
//    head->next = swapPairs(next->next);
//
//    next->next = head;
//
//    return next;
//
//}
//
//class BSTIterator {
//
//    stack<TreeNode*> st;
//
//    void pushAllLeft(TreeNode* root) {
//        while(root) {
//            st.push(root);
//            root = root->left;
//        }
//    };
//
//public:
//    BSTIterator(TreeNode *root) {
//        pushAllLeft(root);
//    }
//
//    /** @return whether we have a next smallest number */
//    bool hasNext() {
//        return !st.empty();
//    }
//
//    /** @return the next smallest number */
//    int next() {
//        TreeNode* root = st.top();
//        st.pop();
//
//        pushAllLeft(root->right);
//
//        return root->val;
//    }
//};
//
//int numTrees(int n) {
//
//    int dp[n + 1] = {0};
//    dp[0] = dp[1] = 1;
//
//
//    for(int k = 2; k <= n; k++)
//        for(int root = 1; root <= k; root++)
//            dp[k] += dp[root-1] * dp[k - root];
//
//    return dp[n];
//
//}
//
//string decodeHelper(string const& s, int& i) {
//
//    string res;
//
//    while(i < s.size() && s[i] != ']') {
//
//        if(!isdigit(s[i]))
//            res += s[i++];
//
//        else {
//
//            int n = 0;
//
//            while(isdigit(s[i])) {
//                n = n * 10 + s[i] - '0';
//                i++;
//            }
//
//            i++;
//
//            string tmp = decodeHelper(s, i);
//
//
//            i++;
//
//            while(n--)
//                res.append(tmp);
//
//        }
//
//    }
//
//    return res;
//}
//
//
//string decodeString(string s) {
//
//    int i = 0;
//    return decodeHelper(s, i);
//}
//
//void lexicalHelper(int k, int n, vector<int>& nums) {
//
//    if(k > n)
//        return;
//
//    nums.push_back(k);
//
//    k *= 10;
//
//    for(int i = 0; i <= 9; i++)
//        lexicalHelper(k + i, n, nums);
//
//}
//
//vector<int> lexicalOrder(int n) {
//
//    vector<int> res;
//    for(int i = 1; i <= 9; i++)
//        lexicalHelper(i, n, res);
//    return res;
//}
//
//vector<int> lexicalOrder2(int n) {
//
//    vector<int> res(n);
//
//    int curr = 1;
//
//    for(int i = 0; i < n; i++) {
//
//        res[i] = curr;
//
//        if(curr * 10 <= n)
//            curr *= 10;
//        else {
//
//            if(curr == n)
//                curr /= 10;
//
//            curr += 1;
//
//            while(curr % 10 == 0)
//                curr /= 10;
//        }
//    }
//
//    return res;
//
//
//
//
//}
//
//int main() {
//
////    vector<int> nums = {1, 2, 1, 2, 1};
////    cout << subarraySum(nums, 3);
//
////    vector<Interval> intervals = {Interval(1, 2), Interval(1, 2), Interval(1, 2)};
////    findRightInterval(intervals);
//
////    cout << eraseOverlapIntervals(intervals);
//
////    vector<int> nums = {1, 2, 1, 1};
////    cout << singleNumber(nums);
//
////    cout << decodeString("3[a]2[bc]");
//
////    cout << numTrees(3);
//
////    vector<int> prices = {2, 4, 1, 7};
//
////    cout << maxProfit(prices);
//
////    combine(4, 2);
//
////    vector<int> nums = {1, 2, 5};
////    canPartition3(nums);
//
//
////    vector<int> nums = {10, 9, 2, 5, 9, 5, 3, 7, 101, 18};
////    cout << lengthOfLIS(nums);
//
//    vector<string> strs = {"0","1","1","0"};
//    cout << findMaxForm(strs, 2, 2);
//    return 0;
//}
