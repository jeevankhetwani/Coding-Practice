////
//// Created by jeevan on 6/2/17.
////
//#include <iostream>
//#include <unordered_map>
//#include <unordered_set>
//#include <vector>
//#include <queue>
//#include <string>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//int characterReplacement(string s, int k) {
//
//    int count[128] = {0};
//    int start = 0, maxCount = 0, n = s.size();
//
//    for(int i = 0; i < n; i++) {
//
//        maxCount = max(maxCount, ++count[s[i]]);
//
//        if(maxCount + k <= i - start)
////            if  current valid string <= longest valid string(current window), shift the window
//            count[s[start++]]--;
///*
//      Since we are only interested in the longest valid substring, our sliding windows need not shrink,
//      even if a window may cover an invalid substring. We either grow the window by appending one char on the right,
//      or shift the whole window to the right by one. And we only grow the window when the count of the new char
//      exceeds the historical max count (from a previous window that covers a valid substring).
//      That is, we do not need the accurate max count of the current window; we only care if the max count
//       exceeds the historical max count; and that can only happen because of the new char.
//       */
//    }
//
//    return n - start;
//}
//
//int minPathSumHelper(vector<vector<int>>& grid, int i, int j) {
//
//    int m = grid.size(), n = grid[0].size();
//
//    if(i == m - 1 && j == n - 1)
//        return grid[i][j];
//
//    int dist = INT32_MAX;
//
//    if(i < m - 1)
//        dist = min(dist, grid[i][j] + minPathSumHelper(grid, i + 1, j));
//
//    if(j < n - 1)
//        dist = min(dist, grid[i][j] + minPathSumHelper(grid, i, j + 1));
//
//    return dist;
//}
//
//int minPathSum(vector<vector<int>>& grid) {
//
//    if(grid.size() == 0)
//        return -1;
//
//    return minPathSumHelper(grid, 0, 0);
//}
//
//int minPathSum2(vector<vector<int>>& grid) {
//
//    int m = grid.size(), n = grid[0].size();
//
//    int dp[n] = {grid[0][0]};
//
//    for(int j = 1; j < n; j++)
//        dp[j] = grid[0][j] + dp[j - 1];
//
//    for(int i = 1; i < m; i++) {
//        dp[0] += grid[i][0];
//
//        for(int j = 1; j < n; j++)
//            dp[j] = grid[i][j] + min(dp[j], dp[j - 1]);
//    }
//
//    return dp[n - 1];
//}
//
//void combinationHelper(int index, int rem, vector<int>& nums, vector<int>& tmp,
//                       vector<vector<int>>& res) {
//
//
//    if(rem == 0) {
//        res.push_back(tmp);
//        return;
//    }
//
//    for(int i = index; i < nums.size() && rem >= nums[i]; i++) {
//
//        tmp.push_back(nums[i]);
//
//        combinationHelper(i, rem - nums[i], nums, tmp, res);
//
//        while(nums[i + 1] == tmp.back())
//            i++;
//
//        tmp.pop_back();
//    }
//
//}
//
//vector<vector<int>> combinationSum(vector<int>&& candidates, int target) {
//
//    sort(candidates.begin(), candidates.end());
//    vector<vector<int>> res;
//    vector<int> tmp;
//    combinationHelper(0, target, candidates, tmp, res);
//    return res;
//}
//
//
//int combinationSum4(vector<int>&& nums, int target) {
//
//    sort(nums.begin(), nums.end());
//
//    int dp[target + 1] = {0};
//
//    if(!nums.empty() &&  target >= nums[0]) {
//        dp[0] = 1;
//
//        for(int num: nums)
//            for(int i = num; i <= target; i++)
//                dp[i] += dp[i - num];
//    }
//
//    return dp[target];
//}
//
//int combinationSum42(vector<int>&& nums, int target) {
//
////    no need to sort except when target is 0
//
//    sort(nums.begin(), nums.end());
//
//    int dp[target + 1] = {0};
//
//    if(!nums.empty() &&  target >= nums[0]) {
//        dp[0] = 1;
//
//        for(int i = 1; i <= target; i++)
//            for(int num: nums)
//                if(i >= num)
//                    dp[i] += dp[i - num];
//    }
//
//    return dp[target];
//}
//
//int findPeakElement(vector<int>& nums) {
//
////    int mid, i = 0, j = nums.size() - 1;
////
////    while(i <= j) {
////
////        mid = (i + j) / 2;
////
////        if( i == j || ( ( mid == 0 || nums[mid] > nums[mid - 1] ) && nums[mid] > nums[mid + 1]  ) )
////            break;
////        else if( mid > 0 && nums[mid - 1] > nums[mid])
////            j = mid - 1;
////        else
////            i = mid + 1;
////    }
////
////    return mid;
//
////    binary
////    int low = 0;
////    int high = nums.size()-1;
////
////    while(low < high)
////    {
////        int mid1 = (low+high)/2;
////        int mid2 = mid1+1;
////        if(nums[mid1] < nums[mid2])
////            low = mid2;
////        else
////            high = mid1;
////    }
////    return low;
//
////    sequential
//
//    for(int i = 0; i < nums.size() - 1; i++)
//        if(nums[i] > nums[i + 1])
//            return i;
//
//    return nums.size() - 1;
//}
//
//void sortColors2(vector<int>& nums) {
//
//    int i = -1, j = nums.size(), k = 0;
//
//    while(k < j) {
//
//        if(nums[k] == 0 && k != ++i)
//            swap(nums[i], nums[k]);
//        else if(nums[k] == 2 && k != --j)
//            swap(nums[j], nums[k]);
//        else
//            k++;
//
//    }
//}
//
//void sortColors(vector<int>& nums) {
//
//    int k = 3;
//    int n = nums.size();
//    int freq[k] = {0};
//    vector<int> tmp(n);
//
//
//    for(int num: nums)
//        freq[num]++;
//
//    for(int i = 1; i < k; i++)
//        freq[i] += freq[i - 1];
//
//    for(int i = n - 1; i >= 0; i--) {
//        tmp[freq[nums[i]] - 1] = nums[i];
//        freq[nums[i]]--;
//    }
//
//    nums = tmp;
//}
//
//int findMaxLength(vector<int>& nums) {
//
//    int sum = 0, maxLen = 0;
//    unordered_map<int, int> sumToIndex;
//
//    sumToIndex[sum] = -1;
//
//    for(int i = 0; i < nums.size(); i++) {
//
//        sum += nums[i] ? 1 : -1;
//
//        if(sumToIndex.find(sum) == sumToIndex.end())
//            sumToIndex[sum] = i;
//        else
//            maxLen = max(maxLen, i - sumToIndex[sum]);
//
//    }
//
//    return maxLen;
//}
//
//int removeDuplicates(vector<int>& nums) {
//
//    int i = 0;
//
//    for(int num: nums)
//        if(i < 1 || num > nums[i - 1])
//            nums[i++] = num;
//
//    return i;
//}
//
//int removeDuplicates2(vector<int>& nums) {
//    int i = 0;
//
//    for(int num: nums)
//        if(i < 2 || num > nums[i - 1])
//            nums[i++] = num;
//
//    return i;
//}
//
//bool checkInclusion(string s1, string s2) {
//
//    const int CHARS = 26;
//
//    int n1 = s1.size(), n2 = s2.size();
//
//    if(n1 > n2)
//        return false;
//
//    int freq[CHARS] = {0};
//
//    for(int i = 0; i < n1; i++) {
//        freq[s1[i] - 'a']++;
//        freq[s2[i] - 'a']--;
//    }
//
//    int numZeros = 0;
//
//    for(int x: freq)
//        if(!x)
//            numZeros++;
//
//    for(int i = n1; i < n2; i++) {
//
//        if(numZeros == CHARS)
//            return true;
//
//        int tmp = freq[s2[i] - 'a']--;
//
//        if(tmp == 1)
//            numZeros++;
//        else if(tmp == 0)
//            numZeros--;
//
//
//        tmp = freq[s2[i - n1] - 'a']++;
//
//        if(tmp == -1)
//            numZeros++;
//        else if(tmp == 0)
//            numZeros--;
//    }
//
//    return numZeros == CHARS;
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
//int sumNumbersHelper(TreeNode* root, int sum) {
//
//    if(!root)
//        return 0;
//
//    sum = sum * 10 + root->val;
//
//    if(!root->left && !root->right)
//        return sum;
//
//    return sumNumbersHelper(root->left, sum) + sumNumbersHelper(root->right, sum);
//}
//
//
//int sumNumbers(TreeNode* root) {
//    return sumNumbersHelper(root, 0);
//}
//
//int numSquares2(int n) {
//
//    static vector<int> dp{0};
//
//    while(dp.size() <= n) {
//
//        int m = dp.size(), squares = INT32_MAX;
//
//        for(int i = 1; i * i <= m; i++)
//            squares = min(squares, dp[m - i * i]);
//
//        dp.push_back(squares);
//    }
//
//    return dp[n];
//}
//
//int numSquares(int n) {
//
//    static vector<int> dp {0};
//
//    int m = dp.size();
//
//    if(m < n + 1) {
//
//        dp.resize(n + 1, INT32_MAX);
//
//        for(int i = 1, i2; (i2 = i * i) <= n; i++)
//
//            for(int j = max(m, i2); j <= n; j++)
//
//                dp[j] = min(dp[j], dp[j - i2] + 1);
//    }
//
//    return dp[n];
//
//}
//
//TreeNode* deleteNode(TreeNode* root, int key) {
//
//    if(root == nullptr)
//        return root;
//
//    if(key < root->val)
//        root->left = deleteNode(root->left, key);
//    else if(key > root->val)
//        root->right = deleteNode(root->right, key);
//    else {
//
//        if(root->right == nullptr)
//            root = root->left;
//        else {
//
//            TreeNode* succ = root->right;
//
//            while(succ->left)
//                succ = succ->left;
//
//            root->val = succ->val;
//
//            root->right = deleteNode(root->right, root->val);
//        }
//    }
//
//    return root;
//}
//
//TreeNode* deleteNode(TreeNode* root) {
//
//    if(root == nullptr)
//        return nullptr;
//
//    if(root->right == nullptr)
//        return root->left;
//
//    TreeNode *succ = root->right, *prev = nullptr;
//
//    while(succ->left) {
//        prev = succ;
//        succ = succ->left;
//    }
//
////    bypass succ
//    if(prev == nullptr)
//        root->right = succ->right;
//    else
//        prev->left = succ->right;
//
////    copy succ to root
//    root->val = succ->val;
//
//    return root;
//}
//
//TreeNode* deleteNode2(TreeNode* root, int key) {
//// recursive
//
//    if(root == nullptr)
//        return root;
//
//    TreeNode *curr = root, *prev = nullptr;
//
//    while(curr && curr->val != key) {
//
//        prev = curr;
//
//        if(key < curr->val)
//            curr = curr->left;
//        else if(key > curr->val)
//            curr = curr->right;
//    }
//
//    if(prev == nullptr)
//        root = deleteNode(root);
//    else if(prev->left == curr)
//        prev->left = deleteNode(curr);
//    else
//        prev->right = deleteNode(curr);
//
//    return root;
//}
//
//int maxArea(vector<int>& height) {
//
//    int maxWater = 0, i = 0, j = height.size() - 1;
//
//    int currHeight;
//
//    while(i < j) {
//
//        currHeight = min(height[i], height[j]);
//
//        maxWater = max(maxWater, currHeight * (j - i));
//
//        if(height[i] < height[j])
//            i++;
//        else
//            j--;
//    }
//
//    return maxWater;
//}
//
//int countLives(vector<vector<int>>& board, int i, int j) {
//
//    int lives = - board[i][j];
//
//    int m = board.size(), n = board[i].size();
//
//    for(int row = max(0, i - 1); row <= min(m - 1, i + 1); row++)
//        for(int col = max(0, j - 1); col <= min(n - 1, j + 1); col++)
//            lives += board[row][col] & 1;
//
//
//
//    return lives;
//}
//
//void gameOfLife(vector<vector<int>>& board) {
//
//    int m = board.size(), n = m ? board[0].size() : 0;
//
//
//    for(int i = 0; i < m; i++)
//        for(int j = 0; j < n; j++) {
//
////            int lives = countLives(board, i, j);
//            int lives = - board[i][j];
//
//            for(int row = max(0, i - 1); row <= min(m - 1, i + 1); row++)
//                for(int col = max(0, j - 1); col <= min(n - 1, j + 1); col++)
//                    lives += board[row][col] & 1;
//
//            if( (lives | board[i][j]) == 3)
//                board[i][j] |= 2;
//        }
//
//    for(int i = 0; i < m; i++)
//        for(int j = 0; j < n; j++)
//            board[i][j] >>= 1;
//}
//
//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode(int x) : val(x), next(NULL) {}
//};
//
//ListNode* deleteDuplicates(ListNode* head) {
//
//    if(head) {
//        ListNode *prev = head, *curr = head->next;
//
//        while(curr) {
//
//            if(prev->val != curr->val) {
//                prev->next = curr;
//                prev = curr;
//            }
//
//            curr = curr->next;
//        }
//
//        prev->next = nullptr;
//    }
//
//    return head;
//}
//
//
//vector<string> split(const string &text, char sep) {
//
//    vector<std::string> tokens;
//    size_t start = 0, end = 0, n = text.size();
//
//    while ( start < n && (end = text.find(sep, start)) != std::string::npos) {
//
//        if (end != start)
//            tokens.push_back(text.substr(start, end - start));
//
//        start = end + 1;
//    }
//
//    if (start < n) {
//        tokens.push_back(text.substr(start));
//    }
//
//    return tokens;
//}
//
//int longestSubstring(string s, int k) {
//
//    int maxLen = 0;
//
//    unordered_set<char> chars(s.begin(), s.end());
//
//    for(char ch: chars)
//
//        if(count(s.begin(), s.end(), ch) < k) {
//
//            vector<string> substrs = split(s, ch);
//
//            for(string& str: substrs)
//                maxLen = max(maxLen, longestSubstring(str, k));
//
//            return maxLen;
//
//        }
//
//    return s.size();
//}
//
//void subsetsWithDupHelper(vector<int>& tmp, int start, vector<int>& nums, vector<vector<int>>& res) {
//
//    if(start == nums.size()) {
//        res.push_back(tmp);
//        return;
//    }
//
//    int next = start + 1;
//
//    while(next < nums.size() && nums[next] == nums[start])
//        next++;
//
//    int count = next - start;
//
//    subsetsWithDupHelper(tmp, next, nums, res);
//
//    for(int i = 1;i <= count; i++) {
//
//        tmp.push_back(nums[start]);
//
//        subsetsWithDupHelper(tmp, next, nums, res);
//
//    }
//
//    tmp.resize(tmp.size() - count);
//}
//
////int hIndex(vector<int>& citations) {
////
////    int n = citations.size();
////
////    int freq[n + 1] = {0}, cum[n + 1] = {0};
////
////    for(int x: citations)
////        if(x <= n)
////            freq[x]++;
////
////    for(int i = 1; i <= n; i++)
////        cum[i] = cum[i - 1] + freq[i - 1];
////
////    int i = 0, j = n, res;
////
////    while(i < j) {
////
////        int mid = (i + j) / 2;
////
////        if(n - cum[mid] >= )
////
////    }
////
////}
//
//string findNumber(vector < int > arr, int k) {
//
//    int n = arr.size();
//
//    if(n == 0)
//        return "NO";
//
//    int i = 0, j = n - 1;
//
//    if(arr[i] == arr[j])
//        if(arr[i] == k)
//            return "YES";
//        else
//            return "NO";
//
//    else if(arr[i] < arr[j]) {
//
//        while (i <= j) {
//
//            int mid = (i + j) / 2;
//
//            if (k < arr[mid]) {
//
//                j = mid - 1;
//
//            } else if (k > arr[mid]) {
//
//                i = mid + 1;
//
//            } else
//                return "YES";
//
//        }
//    }
//    else {
//
//        while (i <= j) {
//
//            int mid = (i + j) / 2;
//
//            if (k < arr[mid]) {
//
//                i = mid + 1;
//
//            } else if (k > arr[mid]) {
//
//                j = mid - 1;
//
//            } else
//                return "YES";
//        }
//
//    }
//
//    return "NO";
//}
//
//vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
//
//    bool leftToRight = true;
//    queue<TreeNode*> que;
//    vector<vector<int>> res;
//
//    if(root) {
//
//        que.push(root);
//
//        while(!que.empty()) {
//
//            int n = que.size();
//            vector<int> tmp(n);
//
//            for(int i = 0; i < n; i++) {
//
//                root = que.front();
//                que.pop();
//
//                if(leftToRight)
//                    tmp[i] = root->val;
//                else
//                    tmp[n - 1 - i] = root->val;
//
//
//                if(root->left)
//                    que.push(root->left);
//
//                if(root->right)
//                    que.push(root->right);
//            }
//
//            res.push_back(tmp);
//
//            leftToRight = !leftToRight;
//        }
//    }
//
//    return res;
//}
//
//struct TreeLinkNode {
//    int val;
//    TreeLinkNode *left, *right, *next;
//    TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
//};
//
//void connect(TreeLinkNode *root) {
//
//    if(root == nullptr || root->left == nullptr && root->right == nullptr)
//        return;
//
//    root->left->next = root->right;
//
//    if(root->next)
//        root->right->next = root->next->left;
//
//    connect(root->left);
//    connect(root->right);
//}
//
//void connect2(TreeLinkNode *root) {
//
//    while(root) {
//
//        TreeLinkNode *tmpChild = new TreeLinkNode(0);
//        TreeLinkNode *currChild = tmpChild;
//
//        while(root) {
//
//            if(root->left) {
//                currChild->next = root->left;
//                currChild = currChild->next;
//            }
//
//            if(root->right) {
//                currChild->next = root->right;
//                currChild = currChild->next;
//            }
//
//            root = root->next;
//        }
//
//        root = tmpChild->next;
//    }
//}
//
//int rangeBitwiseAnd(int m, int n) {
//
////    int x = 0, mask = 1 << 31;
////
////    for(int i = 31; i >= 0; i--) {
////
////        int M = mask & m, N = mask & n;
////
////        if(M != N)
////            break;
////
////        x |= M;
////
////        mask >>= 1;
////    }
////
////    return x;
//
//    int step = 0;
//
//    while(m != n) {
//
//        m >>= 1;
//        n >>= 1;
//        step++;
//    }
//
//    return m << step;
//}
//
//int rob(vector<int>& nums) {
//
//    int prev = 0, curr = 0;
//
//    for(int x: nums) {
//
//        int tmp = max(x + prev, curr);
//        prev = curr;
//        curr = tmp;
//    }
//
//    return curr;
//}
//
//int robCircular(vector<int>& nums, int low, int high) {
//
//    int prev = 0, curr = 0;
//
//    for(int i = low; i <= high; i++) {
//
//        int tmp = max(nums[i] + prev, curr);
//        prev = curr;
//        curr = tmp;
//    }
//
//    return curr;
//}
//
//
//int robCircular(vector<int>& nums) {
//
//    int n = nums.size();
//
//    if(n == 0) return 0;
////    if(n == 1) return nums[0];
////    if(n == 2) return max(nums[0], nums[1]);
//
////    0 is robbed or not
//    return max(nums[0] + robCircular(nums, 2, n - 2), robCircular(nums, 1, n - 1));
//
//}
//
//vector < int > oddNumbers(int l, int r) {
//
//    l |= 1;
//    vector<int> res;
//
//    for(int i = l; i <= r; i += 2)
//        res.push_back(i);
//
//    return res;
//}
//
//vector<vector<int>> subsetsWithDup(vector<int>& nums) {
//
//    vector<int> tmp;
//    vector<vector<int>> res;
//    sort(nums.begin(), nums.end());
//    subsetsWithDupHelper(tmp, 0, nums, res);
//    return res;
//}
//
//void setZeroes(vector<vector<int>>& matrix) {
//
//    bool col0 = 1;
//    int m = matrix.size(), n = m ? matrix[0].size() : 0;
//
//    for(int i = 0; i < m ; i++) {
//
//        if(matrix[i][0] == 0)
//            col0 = 0;
//
//        for(int j = 1; j < n; j++)
//
//            if(matrix[i][j] == 0) {
//                matrix[i][0] = 0;
//                matrix[0][j] = 0;
//            }
//    }
//
////    for(int i = m - 1; i >= 0; i--)
////
////        if(matrix[i][0] = 0)
////            for(int j = 1; j < n; j++)
////                matrix[i][j] = 0;
////
////
////    for(int j = n - 1; j > 0; j--)
////
////        if(matrix[0][j] = 0)
////            for(int i = 1; i < n; i++)
////                matrix[i][j] = 0;
////
////    if(col0 == 0)
////        for(int i = 1; i < m; i++)
////            matrix[i][0] = 0;
//
//    for(int i = m - 1; i >= 0;i--) {
//
//        for(int j = n - 1; j > 0; j--)
//
//            if(matrix[i][0] == 0 || matrix[0][j] == 0)
//                matrix[i][j] = 0;
//
//        if(col0 == 0)
//            matrix[i][0] = 0;
//    }
//
//}
//
//vector<vector<int>> subsetsWithDup2(vector<int>& nums) {
////    iterative
//
//    sort(nums.begin(), nums.end());
//
//    vector<vector<int>> res { vector<int>() };
//
//
//    for(int i = 0; i < nums.size(); i++) {
//
//        int count = 1;
//
//        while(i + 1 < nums.size() && nums[i + 1] == nums[i]) {
//            i++;
//            count++;
//        }
//
//        int n = res.size();
//
//        for(int j = 0; j < n; j++) {
//
//            vector<int> tmp = res[j];
//
//            for(int k = 0; k < count; k++) {
//                tmp.push_back(nums[i]);
//                res.push_back(tmp);
//            }
//        }
//    }
//
//    return res;
//}
//
//int bSearchCol(vector<vector<int>>& matrix, int col, int target) {
//
//    int low = 0, high = matrix.size() - 1;
//
//    while(low < high) {
//
//        int mid = (low + high) / 2;
//
//        if( target <= matrix[mid][col])
//            high = mid;
//        else
//            low = mid + 1;
//    }
//
//    return low;
//}
//
//int bSearch(vector<vector<int>>& matrix, int row, int target) {
//
//    int low = 0, high = matrix[row].size() - 1;
//
//    while(low <= high) {
//
//        int mid = (low + high) / 2;
//
//        if( target < matrix[row][mid] )
//            high = mid - 1;
//        else if ( target > matrix[row][mid])
//            low = mid + 1;
//        else
//            return mid;
//    }
//
//    return -1;
//}
//
//bool searchMatrix(vector<vector<int>>& matrix, int target) {
//
//    int m = matrix.size(), n = m ? matrix[0].size() : 0;
//
//    if(m == 0 || n == 0)
//        return false;
//
//    int row = bSearchCol(matrix, n - 1, target);
//
//    return bSearch(matrix, row, target);
//}
//
//class Solution {
//
//    TreeNode *prev = nullptr;
//
//    void flatten(TreeNode *root) {
//        if (root == nullptr)
//            return;
//        flatten(root->right);
//        flatten(root->left);
//        root->right = prev;
//        root->left = nullptr;
//        prev = root;
//    }
//
//    void flatten2(TreeNode *root) {
//
//        while(root) {
//
//            if(root->left) {
//                //Find current node's prenode that links to current node's right subtree
//                TreeNode *pred = root->left;
//
//                while(pred->right)
//                    pred = pred->right;
//
//                pred->right = root->right;
//
//                //Use current node's left subtree to replace its right subtree(original right
//                //subtree is already linked by current node's prenode
//                root->right = root->left;
//                root->left = nullptr;
//            }
//
//            root = root->right;
//        }
//    }
//};
//
//int getMoneyHelper(int low, int high) {
//
//    if(low >= high)
//        return 0;
//
//    int minAmount = INT32_MAX;
//
//    for(int i = low; i <= high; i++)
//        minAmount = min(minAmount, i + max(getMoneyHelper(low, i - 1), getMoneyHelper(i + 1, high)));
//
//    return minAmount;
//}
//
//int getMoneyAmount(int n) {
//
////    return getMoneyHelper(1, n);
//
//    int dp[n + 2][n + 2] = {0};
//
//    for(int i = n - 1; i > 0; i--)
//
//        for(int j = i + 1; j <= n; j++) {
//
//            dp[i][j] = INT32_MAX;
//
//            for (int k = i; k <= j; k++)
//                dp[i][j] = min(dp[i][j], k + max(dp[i][k - 1], dp[k + 1][j]));
//        }
//
//    return dp[1][n];
//}
//
//string getHint(string secret, string guess) {
//
//    const int DIGITS = 10;
//    int bulls = 0, cows = 0;
//    int freq1[DIGITS] = {0}, freq2[DIGITS] = {0};
//
//    for(int i = 0; i < secret.size(); i++) {
//
//        if(secret[i] == guess[i])
//            bulls++;
//        else {
//            freq1[secret[i] - '0']++;
//            freq2[guess[i] - '0']++;
//        }
//
//    }
//
//    for(int i = 0; i < DIGITS; i++)
//        cows += min(freq1[i], freq2[i]);
//
//    return to_string(bulls) + 'A' + to_string(cows) + 'B';
//}
//
//int main() {
//
////    cout << characterReplacement("AABABBA", 1);
////    combinationSum4(vector<int> {1, 2, 3}, 4);
////    vector<int> nums = {1, 0};
////    sortColors2(nums);
//
////    cout << checkInclusion("ab", "eidbaooo");
//
////    cout << numSquares(2);
//
////    cout << longestSubstring("aaabb", 3);
//
////    vector<int> nums = {1, 2, 3};
////    subsetsWithDup(nums);
//
//    TreeNode *root = new TreeNode(1);
//    root->left = new TreeNode(2);
//    root->right = new TreeNode(3);
//
////    flatten(root);
//    return 0;
//
//
//}
