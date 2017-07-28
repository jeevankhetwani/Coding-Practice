////
//// Created by jeevan on 5/25/17.
////
//#include <iostream>
//#include <vector>
//#include <unordered_map>
//#include <map>
//#include <algorithm>
//#include <queue>
//#include <functional>
//#include <stack>
//#include <unordered_set>
//#include "myStack.h"
//
//using namespace std;
//
//int findMaxLoot(int loot[], int index, int n) {
//
//    if(index >= n)
//        return 0;
//
//    return loot[index] + max(findMaxLoot(loot, index + 2, n), findMaxLoot(loot, index + 3, n));
//}
//
//int findLoot(int loot[], int n) {
//
//    return max(findMaxLoot(loot, 0, n), findMaxLoot(loot, 1, n));
//}
//
//int findLootDP(int loot[], int n) {
//// with O(n) space
////    int c[n + 1];
////
////    c[n] = 0;
////    c[n - 1] = loot[n - 1];
////
////    for(int i = n - 2; i >= 0; i--)
////        c[i] = max(loot[i] + c[i + 2], c[i + 1]);
////
////    return c[0];
//
////    with O(1) space
//    int oldBest = 0, newBest = 0;
//
//    for(int i = n - 1; i >= 0; i--) {
//        int take = loot[i] + oldBest;
//
//        oldBest = newBest;
//        newBest = max(newBest, take);
//    }
//
//    return newBest;
//}
//
//void tokenize(string s, int& a, int& b) {
//
//    int j = s.find('+');
//
//    if(j != string::npos) {
//        a = atoi(s.substr(0, j).c_str());
//        b = atoi(s.substr(j + 1).c_str());
//    }
//}
//
//string complexNumberMultiply(string s1, string s2) {
//
//    int a1, b1, a2, b2;
//    tokenize(s1, a1, b1);
//    tokenize(s2, a2, b2);
//
//    int a = a1 * a2 - b1 * b2;
//    int b = a1 * b2 + a2 * b1;
//
//    return to_string(a) + "+" + to_string(b) + "i";
//}
//
//
//int countBattleships(vector<vector<char>>& board) {
//
//    int count = 0, rows = board.size();
//
//    if(rows) {
//        int cols = board[0].size();
//
//        for (int i = 0; i < rows; i++)
//            for (int j = 0; j < cols; j++)
//
//                if (board[i][j] == 'X' &&
//                    (i == 0 || board[i - 1][j] != 'X') &&
//                    (j == 0 || board[i][j - 1] != 'X'))
//                    count++;
//    }
//    return count;
//}
//
//string optimalDivision(vector<int>& nums) {
//
//
//    if(nums.size() == 0)
//        return "";
//
//    if(nums.size() == 1)
//        return to_string(nums[0]);
//
//    if(nums.size() == 2)
//        return to_string(nums[0]) + "/" + to_string(nums[1]);
//
//    string s = to_string(nums[0]) + "/(" + to_string(nums[1]);
//
//    for(int i = 2; i < nums.size(); i++)
//        s += "/" + to_string(nums[i]);
//
//    s += ")";
//
//    return s;
//}
//
//
//int numberOfArithmeticSlices(vector<int>& A) {
//
//    int curr = 0, n = A.size(), sum = 0;
//
//    for(int i = 2; i < n; i++)
//
//        if(A[i] + A[i - 2] == 2 * A[i - 1]) {
//            curr += 1;
//            sum += curr;
//        } else
//            curr = 0;
//    return sum;
//}
//
//string frequencySort2(string s) {
//    unordered_map<char,int> freq;
//    vector<string> bucket(s.size()+1, "");
//    string res;
//
//    //count frequency of each character
//    for(char c:s) freq[c]++;
//    //put character into frequency bucket
//    for(auto& it:freq) {
//        int n = it.second;
//        char c = it.first;
//        bucket[n].append(n, c);
//    }
//    //form descending sorted string
//    for(int i=s.size(); i>0; i--) {
//        if(!bucket[i].empty())
//            res.append(bucket[i]);
//    }
//    return res;
//}
//
//typedef pair<int, int> intpair;
//
//bool compare(intpair p1, intpair p2) {
//
//    return p1.second > p2.second;
//}
//
//vector<int> topKFrequent(vector<int>& nums, int k) {
//
//    int i;
//    unordered_map<int, int>::const_iterator it;
//    unordered_map<int, int> freq;
//
//    for(int x: nums)
//        freq[x]++;
//
//    priority_queue<intpair, vector<intpair>, std::function<bool(intpair, intpair)>> pq(compare);
//
//    for(it = freq.begin(), i = 0; i < k && it != freq.end(); it++, i++)
//        pq.push(make_pair(it->first, it->second));
//
//
//    while(it != freq.end()) {
//
//        if(pq.top().second < it->second) {
//            pq.pop();
//            pq.push(make_pair(it->first, it->second));
//        }
//
//        it++;
//    }
//
//
//    vector<int> v;
//
//    while(!pq.empty()) {
//        v.push_back(pq.top().first);
//        pq.pop();
//    }
//
//    return v;
//}
//
//vector<int> nextGreaterElements(vector<int>& nums) {
//    int n = nums.size();
//    vector<int> next(n, -1);
//    stack<int> s; // index stack
//    for (int i = 0; i < n * 2; i++) {
//        int num = nums[i % n];
//        while (!s.empty() && nums[s.top()] < num) {
//            next[s.top()] = num;
//            s.pop();
//        }
//        if (i < n) s.push(i);
//    }
//    return next;
//}
//
//vector<int> nextGreaterElements2(vector<int>& nums) {
//
//    int i, n = nums.size();
//    stack<int> st;
//    vector<int> v(n);
//
//    if(n) {
//        for (i = 0; i < n; i++) {
//            while (!st.empty() && nums[i] > nums[st.top()]) {
//                v[st.top()] = nums[i];
//                st.pop();
//            }
//
//            st.push(i);
//        }
//
//        i = 0;
//        while (i < st.top()) {
//
//            if (nums[i] > nums[st.top()]) {
//                v[st.top()] = nums[i];
//                st.pop();
//            } else
//                i++;
//        }
//
//        while (!st.empty()) {
//            v[st.top()] = -1;
//            st.pop();
//        }
//    }
//
//    return v;
//}
//
//string frequencySort(string s) {
//
//    int counts[256] = {0};
//
//    for(char ch: s)
//        counts[ch]++;
//
//    sort(s.begin(), s.end(), [&](char a, char b)->bool {
//        return counts[a] > counts[b] || (counts[a] == counts[b] && a < b);
////        return (a != b && (counts[a] > counts[b] || a > b));
//    });
//
//    return s;
//}
//
//vector<int> singleNumber(vector<int>& nums) {
//
//    int sum = 0;
//    vector<int> v(2, 0);
//
//    for(int x: nums)
//        sum = sum xor x;
//
//    int mask = sum & ~(sum - 1);
//
//    for(int x: nums)
//        if(mask & x)
//            v[0] ^= x;
//        else
//            v[1] ^= x;
//    return v;
//}
//
//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode(int x) : val(x), next(NULL) {}
//};
//
//class Solution {
//public:
//    int n;
//    ListNode* head;
//    /** @param head The linked list's head.
//        Note that the head is guaranteed to be not null, so it contains at least one node. */
//    Solution(ListNode* h) {
//        head = h;
//
//        n = 0;
//        while(h) {
//            n++;
//            h = h->next;
//        }
//
//        srand(time(NULL));
//    }
//
//    /** Returns a random node's value. */
//    int getRandom() {
//
//        int k = rand() % n;
//
//        ListNode *curr = head;
//
//        while(k--)
//            curr = curr->next;
//
//        return curr->val;
//
//    }
//};
//
//vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
//
//    int m = matrix.size();
//
//    if(m == 0)
//        return vector<int> ();
//
//    int n = matrix[0].size();
//
//    vector<int> res(m * n, 0);
//
//    int row = 0, col = 0, d = 0;
//    int dir[][2] = { {-1, 1}, {1, -1} };
//
//    for(int i = 0; i < res.size(); i++) {
//        res[i] = matrix[row][col];
//
//        row += dir[d][0];
//        col += dir[d][1];
//
//        if(row >= m) {  row = m - 1; col += 2; d = 1 - d; }
//
//        if(col >= n) { col = n - 1; row += 2; d = 1 - d; }
//
//        if(row < 0) { row = 0; d = 1 - d; }
//
//        if(col < 0) { col = 0; d = 1 - d; }
//    }
//
//    return res;
//}
//
//ListNode* insertBefore(ListNode *head, int x) {
//
//    ListNode* node = new ListNode(x);
//    node->next = head;
//    return node;
//}
//
//int length(ListNode* head) {
//
//    int len = 0;
//    while(head) {
//        head = head->next;
//        len++;
//    }
//
//    return len;
//}
//
//ListNode* padding(ListNode *head, int n) {
//
//    for(int i = 0; i < n; i++)
//        head = insertBefore(head, 0);
//
//    return head;
//
//}
//
//ListNode* sumHelper(ListNode* head1, ListNode* head2, int& carry) {
//
//    if(head1 == nullptr && head2 == nullptr) {
//        carry = 0;
//        return nullptr;
//    }
//
//    int val = 0;
//
//    if(head1) {
//        val += head1->val;
//        head1 = head1->next;
//    }
//
//    if(head2) {
//        val += head2->val;
//        head2 = head2->next;
//    }
//
//    ListNode *newHead = sumHelper(head1, head2, carry);
//
//    val += carry;
//
//    carry = val / 10;
//    val = val % 10;
//
//    newHead = insertBefore(newHead, val);
//    return newHead;
//}
//
//ListNode* deletePadding(ListNode* head, int n) {
//    ListNode *next;
//    for(int i = 0; i < n; i++) {
//        next = head->next;
//        delete(head);
//        head = next;
//    }
//
//    return head;
//}
//
//ListNode* addTwoNumbers(ListNode* head1, ListNode* head2) {
//
//    int carry;
//
//    int len1 = length(head1), len2 = length(head2);
//
//    if(len1 < len2)
//        head1 = padding(head1, len2 - len1);
//    else if(len2 < len1)
//        head2 = padding(head2, len1 - len2);
//
//    ListNode *newHead = sumHelper(head1, head2, carry);
//
//    if(carry)
//        newHead = insertBefore(newHead, carry);
//
//    if (len1 < len2)
//        deletePadding(head1, len2 - len1);
//    else if (len2 < len1)
//        deletePadding(head2, len1 - len2);
//
//    return newHead;
//}
//
//ListNode* addTwoNumbers2(ListNode* head1, ListNode* head2) {
//
//    stack<int> st1, st2;
//
//    while(head1) {
//        st1.push(head1->val);
//        head1 = head1->next;
//    }
//
//    while(head2) {
//        st2.push(head2->val);
//        head2 = head2->next;
//    }
//
//    int sum = 0;
//    ListNode *head = nullptr;
//
//    while(!st1.empty() || !st2.empty() || sum) {
//
//        if(!st1.empty()) {
//            sum += st1.top();
//            st1.pop();
//        }
//
//        if(!st2.empty()) {
//            sum += st2.top();
//            st2.pop();
//        }
//
//        ListNode *node = new ListNode(sum % 10);
//        node->next = head;
//        head = node;
//        sum /= 10;
//    }
//
//    return head;
//}
//
//ListNode* addToFront( int val, ListNode* head ){
//    ListNode* temp = new ListNode(val);
//    temp->next = head;
//    return temp;
//}
//
//ListNode* addToFront(ListNode *node, ListNode *head) {
//    node->next = head;
//    return node;
//}
//
//ListNode* addTwoNumbers3(ListNode* l1, ListNode* l2) {
//    int n1 = 0, n2 = 0, carry = 0;
//    ListNode *curr1 = l1, *curr2 = l2, *res = NULL;
//    while( curr1 ){ curr1=curr1->next; n1++; }
//    while( curr2 ){ curr2=curr2->next; n2++; }
//    curr1 = l1; curr2 = l2;
//    while( n1 > 0 && n2 > 0){
//        int sum = 0;
//        if( n1 >= n2 ){ sum += curr1->val; curr1=curr1->next; n1--;}
//        if( n2 > n1 ){ sum += curr2->val; curr2=curr2->next; n2--;}
//        res = addToFront( sum, res );
//    }
//
//    ListNode *next, *curr = res;
//    res = nullptr;
//
//    while( curr ){
//        next = curr->next;
//
//        curr->val += carry;
//        carry = curr->val/10;
//        curr->val %= 10;
//
//        res = addToFront( curr, res );
//        curr = next;
//    }
//
//    if( carry ) res = addToFront( 1, res );
//    return res;
//}
//
//vector<int> killProcess(vector<int>& pid, vector<int>& ppid, int kill) {
//
//    int n = pid.size();
//    vector<int> res;
//    unordered_map<int, vector<int>> mymap;
//
//    for(int i = 0; i < n; i++)
//        if(ppid[i])
//            mymap[ppid[i]].push_back(pid[i]);
//
//    queue<int> process;
//    process.push(kill);
//
//    while(!process.empty()) {
//
//        int p = process.front();
//        process.pop();
//
//        res.push_back(p);
//
//        for(auto& x: mymap[p])
//            process.push(x);
//    }
//
//    return res;
//}
//
//class Solution2 {
//public:
//    vector<int> nums;
//
//    Solution2(vector<int>& n) {
//        nums = n;
//        srand(time(NULL));
//    }
//
//    /** Resets the array to its original configuration and return it. */
//    vector<int> reset() {
//        return nums;
//    }
//
//    /** Returns a random shuffling of the array. */
//    vector<int> shuffle() {
//
//        int n = nums.size();
//        vector<int> shuffled = nums;
//
//        for(int i = n - 1; i > 0; i--) {
//
//            int j = rand() % (i + 1);
//
//            if(i != j)
//                swap(shuffled[i], shuffled[j]);
//
//        }
//
//        return shuffled;
//    }
//};
//
//int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
//
//    int res = 0, sum;
//    unordered_map<int, int> freqAB;
//
//    for(int x: A)
//        for(int y: B)
//            freqAB[x + y]++;
//
//    for(int x: C)
//        for(int y: D) {
//            sum = - ( x + y );
//            if (freqAB.find(sum) != freqAB.end())
//                res += freqAB[sum];
//        }
//
//    return res;
//}
//
//int countNumbersWithUniqueDigits(int n) {
//
//    int res = 10, digits = 9, sum = 9;
//
//    if(n == 0)
//        return 1;
//
//    for(int i = 2; i <= n; i++) {
//        sum *= digits;
//        res += sum;
//        digits--;
//    }
//
//    return res;
//}
//
//struct Node {
//    int data;
//    Node * right, * left;
//};
//
//void deleteSubtree(Node *root) {
//
//    if(root == nullptr)
//        return;
//
//    deleteSubtree(root->left);
//    deleteSubtree(root->right);
//    delete(root);
//}
//
//
//Node* deleteNode(Node* root, int key)
//{
//    //Your code here
//
//    if(root == nullptr)
//        return nullptr;
//
//    if(root->data < key) {
//        root->right = deleteNode(root->right, key);
//        return root;
//    }
//
//    Node *left = root->left;
//
//    deleteSubtree(root->right);
//    delete(root);
//
//    return deleteNode(left, key);
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
//vector<int> preorderTraversal(TreeNode* root) {
//
//    vector<int> res;
//    stack<TreeNode*>st;
//
//    if(root) {
//        st.push(root);
//
//        while (!st.empty()) {
//
//            root = st.top();
//            st.pop();
//
//            res.push_back(root->val);
//
//            if (root->right)
//                st.push(root->right);
//
//            if (root->left)
//                st.push(root->left);
//        }
//    }
//
//    return res;
//}
//
//vector<int> inorderTraversal(TreeNode* root) {
//
//    TreeNode* curr = root;
//    stack<TreeNode*> st;
//    vector<int> res;
//
//    while(1) {
//
//        while(curr) {
//            st.push(curr);
//            curr = curr->left;
//        }
//
//        if(st.empty())
//            break;
//
//        curr = st.top();
//        st.pop();
//
//        res.push_back(curr->val);
//
//        curr = curr->right;
//    }
//
//    return res;
//
//}
//
//int kthSmallest(vector<vector<int>>& matrix, int k) {
//    int n = matrix.size();
//
//    int left = matrix[0][0];
//    int right = matrix[n-1][n-1];
//
//    while (left < right) {
//        int midv = (left + right) / 2;
//        int col = n;
//
//        int count = 0;  // number of elements no bigger than midv
//
//        for (int i = 0; i < n; i++) {
//            vector<int>& row = matrix[i];
//            col = std::upper_bound(row.begin(), row.begin() + col, midv) - row.begin();
//
//            if(col == 0)
//                break;
//
//            count += col;
//        }
//
//        if (count < k)
//            left = midv + 1;
//        else
//            right = midv;
//
//
//    }
//
//    return left;
//}
//
//int totalHammingDistance(vector<int>& nums) {
//
//
//    int mask = 1, n = nums.size(), k, dist = 0;
//
//    for(int i = 0; i < sizeof(int) * 8; i++) {
//
//        k = 0;
//
//        for(int j = 0; j < n; j++)
//
//            if(mask & nums[j])
//                k++;
//
//        dist += k * (n - k);
//
//        mask <<= 1;
//    }
//
//    return dist;
//
//}
//
//void printList(ListNode* head) {
//    while(head) {
//        cout << head->val << " ";
//        head = head->next;
//    }
//    cout << endl;
//}
//
//vector<int> getTime(string& s) {
//
//    vector<int> v(2, -1);
//
//    int i = s.find(':');
//    v[0] = atoi(s.substr(0, i).c_str());
//    v[1] = atoi(s.substr(i + 1).c_str());
//    return v;
//
//}
//
//int findMinDifference(vector<string>& timePoints) {
//
//    int i, n = timePoints.size();
//    vector<int> v;
//    bool time[24 * 60] = {0};
//
//    for(string s: timePoints) {
//        v = getTime(s);
//        i = v[0] * 60 + v[1];
//
//        if(time[i])
//            return 0;
//
//        time[i] = true;
//    }
//
//    int minDiff = 24 * 60, first = -1, last, prev = -1;
//
//    for(i = 0; i < 24 * 60; i++) {
//
//        if(time[i]) {
//
//            if(first == -1)
//                first = i;
//
//            if(prev != -1)
//                minDiff = min(minDiff, i - prev);
//
//            prev = i;
//        }
//
//    }
//
//    last = prev;
//
//    minDiff = min(minDiff, 24 * 60 - (last - first));
//    return minDiff;
//}
//
//int findMaximumXOR(vector<int>& nums) {
//
//    int max = 0, mask = 0;
//
//    for(int i = 31; i >= 0; i--) {
//
//        mask |= 1 << i;
//
//        unordered_set<int> limited_bits;
//
//        for(int num: nums)
//            limited_bits.insert(num & mask);
//
//        int tmp = max | (1 << i);
//
//        for(int num: limited_bits)
//            if(limited_bits.find(num ^ tmp) != limited_bits.end()) {
//                max = tmp;
//                break;
//            }
//    }
//
//    return max;
//}
//
//int predictHelper(vector<int>& nums, int i, int j) {
//
//    if(i == j)
//        return nums[i];
//
//    return max( nums[i] - predictHelper(nums, i + 1, j),
//                nums[j] - predictHelper(nums, i, j - 1) );
//
//}
//
//bool PredictTheWinner(vector<int>& nums) {
//
//    return predictHelper(nums, 0, nums.size() - 1) >= 0;
//}
//
//
//bool PredictTheWinner2(vector<int>& nums) {
//
//    int n = nums.size();
//    if ((n & 1) == 0) { return true; } // Improved with hot13399's comment.
//    int dp[n];
//    for (int i = n - 1; i >= 0; i--) {
//        dp[i] = nums[i];
//
//        for (int j = i + 1; j < n; j++)
//            dp[j] = max(nums[i] - dp[j], nums[j] - dp[j - 1]);
//
//    }
//    return dp[n - 1] >= 0;
//}
//
//bool isSubsequence(string s, string t) {
//
//    int i = 0, n = s.size();
//
//    if(n == 0)
//        return true;
//
//    for(int j = 0; j < t.size(); j++) {
//
//        if(s[i] == t[j]) {
//            i++;
//
//            if(i == n)
//                return true;
//        }
//    }
//
//    return false;
//}
//
//int findNextGreater(int k, vector<int>& v) {
//
//    int i = 0, j = v.size() - 1, mid, index = -1;
//
//    while(i <= j) {
//
//        mid = (i + j) / 2;
//
//        if(v[mid] > k) {
//
//            index = v[mid];
//
//            j = mid - 1;
//
//        } else
//            i = mid + 1;
//
//    }
//
//    return index;
//}
//
//void combinationHelper(vector<int>& nums, int i, int rem, int k, vector<vector<int>>& res) {
//
//    int n = nums.size();
//
//    if (n == k) {
//        if (rem == 0)
//            res.push_back(nums);
//        return;
//    }
//
////    if (i > 9 || rem < (k - n) * i || rem > (k - n) * 9)
////        return;
//
//    for (int j = i; j <= 9; j++) {
//        nums.push_back(j);
//        combinationHelper(nums, j + 1, rem - j, k, res);
//        nums.pop_back();
//    }
//
//}
//
//vector<vector<int>> combinationSum3(int k, int n) {
//
//    vector<int> nums;
//    vector<vector<int>> res;
//
//    combinationHelper(nums, 1, n, k, res);
//
//    return res;
//}
//
//int minDistance3(string word1, string word2) {
//
//    int n1 = word1.size(), n2 = word2.size();
//
//    int c[n2 + 1], tmp[n2 + 1];
//
//    for(int i = 0; i <= n1; i++) {
//
//        for (int j = 0; j <= n2; j++) {
//
//            if(i == 0 || j == 0)
//                c[j] = i + j;
//            else if (word1[i - 1] == word2[j - 1])
//                c[j] = tmp[j - 1];
//            else
//                c[j] = 1 + min(c[j - 1], tmp[j]);
//
//        }
//
//        copy(c, c + n2 + 1, tmp);
//    }
//
//    return c[n2];
//}
//
//int findTargetSumWaysDP(vector<int>& nums, int S) {
//
//    int n = nums.size();
//    int c[n][2001] = {0};
//
//    c[0][nums[0] + 1000] = 1;
//    c[0][-nums[0] + 1000] += 1;
//
//    for(int i = 1; i < n; i++)
//        for(int j = -1000; j <= 1000; j++)
//            if(c[i - 1][j + 1000]) {
//                c[i][j + nums[i] + 1000] += c[i - 1][j + 1000];
//                c[i][j - nums[i] + 1000] += c[i - 1][j + 1000];
//            }
//
//    return c[n - 1][S + 1000];
//}
//
//void generateHelp(string& s, int left, int right, int n, vector<string>& res) {
//
//    int index = left + right;
//
//    if(left == n && right == n) {
//        res.push_back(s);
//        return;
//    }
//
//    if(left != n) {
//        s[index] = '(';
//        generateHelp(s, left + 1, right, n, res);
//    }
//
//    if(left > right) {
//        s[index] = ')';
//        generateHelp(s, left, right + 1, n, res);
//    }
//}
//
//vector<string> generateParenthesis(int n) {
//
//    string s(2 * n, ')');
//    vector<string> res;
//    generateHelp(s, 0, 0, n, res);
//    return res;
//
//}
//
//int findHelper(vector<int>& nums, int index, int sum) {
//
//    if(index == nums.size()) { return sum == 0; }
//
//    return findHelper(nums, index + 1, sum - nums[index]) +
//           findHelper(nums, index + 1, sum + nums[index]);
//
//}
//
//int findTargetSumWays(vector<int>& nums, int S) {
//
//    return findHelper(nums, 0, S);
//}
//
//int minDistance2(string word1, string word2) {
//
//    int n1 = word1.size(), n2= word2.size();
//
//    int c[n1 + 1][n2 + 1];
//
//    for(int i = 0; i <= n1; i++)
//
//        for(int j = 0; j <= n2; j++) {
//
//            if(word1[i - 1] == word2[j - 1])
//                c[i][j] = c[i - 1][j - 1];
//            else
//                c[i][j] = 1 + min(c[i - 1][j], c[i][j - 1]);
//
//        }
//
//    return c[n1][n2];
//}
//
//int minDistance(string word1, string word2) {
//
//    int n1 = word1.size(), n2= word2.size();
//
//    int c[n1 + 1][n2 + 1];
//
//    for(int i = 0; i <= n1; i++)
//
//        for(int j = 0; j <= n2; j++) {
//
//            if(i == 0 || j == 0)
//                c[i][j] = 0;
//            else if(word1[i - 1] == word2[j - 1])
//                c[i][j] = 1 + c[i - 1][j - 1];
//            else
//                c[i][j] = max(c[i - 1][j], c[i][j - 1]);
//
//        }
//
//    return n1 +  n2 - 2 * c[n1][n2];
//
//}
//
//bool isSubsequence2(string s, string t) {
//
//    unordered_map<char, vector<int>> charToIndex;
//
//    for(int i = 0; i < t.size(); i++)
//        charToIndex[t[i]].push_back(i);
//
//    int index = -1;
//
//    for(int i = 0; i < s.size(); i++) {
//
//        char ch = s[i];
//
//        if(charToIndex.find(ch) == charToIndex.end())
//            return false;
//
//        index = findNextGreater(index, charToIndex[ch]);
//
//        if(index == -1)
//            return false;
//    }
//
//    return true;
//
//}
//
//class Trie {
//public:
//    Trie* children[2];
//    Trie() {
//        children[0] = children[1] = nullptr;
//    }
//};
//
//int findMax(Trie *node1, Trie *node2, int pos) {
//
//    if(node1 == nullptr && node2 == nullptr)
//        return 0;
//
//    if(node1 == nullptr)
//        return findMax(node2->children[0], node2->children[1], pos - 1);
//
//    if(node2 == nullptr)
//        return findMax(node1->children[0], node1->children[1], pos - 1);
//
//    int res = 1 << pos;
//
//    res |= max( findMax(node1->children[0], node2->children[1], pos - 1),
//                findMax(node1->children[1], node2->children[0], pos - 1) );
//
//    return res;
//}
//
//int findMaximumXOR2(vector<int>& nums) {
//
//    int curr_bit;
//
//    Trie *root = new Trie(), *currrNode;
//
////    trie formation
//    for(int num: nums) {
//
//        currrNode = root;
//
//        for(int i = 31; i >= 0; i--) {
//
//            curr_bit = (num >> i) & 1;
//
//            if(currrNode->children[curr_bit] == nullptr)
//                currrNode->children[curr_bit] = new Trie();
//
//            currrNode = currrNode->children[curr_bit];
//        }
//    }
//
//    return findMax(root->children[0], root->children[1], 31);
//}
//
//
//int main() {
//
////    int loot[] = {4, 1, 2, 7, 5, 3, 1};
////    int n = sizeof(loot) / sizeof(loot[0]);
////
////    cout << findLootDP(loot, n);
//
////    string a = "1+-1i", b = "1+-1i";
////    cout << complexNumberMultiply(a, b);
//
////    vector<vector<char>> board = { {'X', '.', '.', 'X'},
////                                   {'.', '.', '.', 'X'},
////                                   {'.', '.', '.', 'X'}};
////    cout << countBattleships(board);
//
////    vector<int> slices = {1,2,3,8,9,10};
////    cout << numberOfArithmeticSlices(slices);
//
////    string s = "dacca";
////    cout << frequencySort(s);
//
////    vector<int> nums = {1,1,1,2,2,3};
////    topKFrequent(nums, 2);
//
////    vector<int> nums = {1,2,1};
////    nextGreaterElements(nums);
//
////    ListNode *l1 = new ListNode(7);
////    l1->next = new ListNode(2);
////    l1->next->next = new ListNode(4);
////    l1->next->next->next = new ListNode(3);
////    printList(l1);
////
////    ListNode *l2 = new ListNode(5);
////    l2->next = new ListNode(6);
////    l2->next->next = new ListNode(4);
////    printList(l2);
////
////    ListNode *l3 = addTwoNumbers3(l1, l2);
////    printList(l3);
//
////    vector<int> A = {1, 2};
////    vector<int> B = {-2, -1};
////    vector<int> C = {-1, 2};
////    vector<int> D = {0, 2};
////
////    cout << fourSumCount(A, B, C, D);
//
////    cout << countNumbersWithUniqueDigits(2);
//
////    vector<string> v = {"23:59","00:00"};
////    cout << findMinDifference(v);
//
////    vector<int> nums = {3, 10, 5, 25, 2, 8};
////    cout << findMaximumXOR2(nums);
//
////    vector<int> nums = {3, 5, 2, 7, 4};
////    cout << PredictTheWinner2(nums);
//
////    cout << isSubsequence2("acb", "ahbgdc");
//
////    vector<vector<int>>matrix = {
////            {6, 8, 8},
////            {6, 7, 10},
////            {10, 10, 12}
////    };
////    cout << kthSmallest(matrix, 6);
//
////    combinationSum3(3, 9);
//
////    string w1 = "sea", w2 = "eat";
////    cout << minDistance3(w1, w2);
//
////    vector<int> nums = {1, 1, 1, 1, 1};
////    cout << findTargetSumWaysDP(nums, 3);
//
//    generateParenthesis(3);
//
//
//    return 0;
//}
