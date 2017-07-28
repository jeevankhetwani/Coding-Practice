////
//// Created by jeevan on 5/21/17.
////
//#include <iostream>
//#include <vector>
//#include <unordered_map>
//#include <unordered_set>
//#include <set>
//#include <stack>
//#include <queue>
//#include <sstream>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//vector<int> twoSum(vector<int>& nums, int target) {
//
//    vector<int> ans(2, -1);
//    unordered_map<int, int> mymap;
//
//    for(int i = 0; i < nums.size(); i++) {
//
//        if (mymap.find(target - nums[i]) != mymap.end()) {
//            ans = {mymap[target - nums[i]], i};
//            break;
//        }
//
//        mymap[nums[i]] = i;
//    }
//
//    return ans;
//}
//
//void paintFill(vector<vector<char>>& grid, int i, int j, char prev, char curr) {
//
//    if(i < 0 || i >= grid.size() || j < 0 || j >= grid[i].size())
//        return;
//
//    if(grid[i][j] != prev)
//        return;
//
//    grid[i][j] = curr;
//
//    paintFill(grid, i - 1, j, prev, curr);
//    paintFill(grid, i + 1, j, prev, curr);
//    paintFill(grid, i, j - 1, prev, curr);
//    paintFill(grid, i, j + 1, prev, curr);
//}
//
//int numIslands(vector<vector<char>>& grid) {
//
//    int count = 0;
//
//    for(int i = 0; i < grid.size(); i++)
//        for(int j = 0; j < grid[i].size(); j++)
//            if(grid[i][j] == '1') {
//                count++;
//                paintFill(grid, i, j, '1', '$');
//            }
//
//    for(int i = 0; i < grid.size(); i++)
//        for(int j = 0; j < grid[i].size(); j++)
//            if(grid[i][j] == '$')
//                grid[i][j] = '1';
//
//    return count;
//}
//
//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode(int x) : val(x), next(NULL) {}
//};
//
//ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//
//    int carry = 0, sum;
//    ListNode* head = nullptr, *tail;
//
//    while(l1 || l2) {
//
//        sum = carry;
//
//        if(l1) {
//            sum += l1->val;
//            l1 = l1->next;
//        }
//
//        if(l2) {
//            sum += l2->val;
//            l2 = l2->next;
//        }
//
//        carry = sum / 10;
//        sum = sum % 10;
//
//        ListNode *node = new ListNode(sum);
//
//        if(head == nullptr)
//            head = tail = node;
//        else {
//            tail->next = node;
//            tail = node;
//        }
//
//    }
//
//    if(carry)
//        tail->next = new ListNode(carry);
//
//    return head;
//}
//
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//bool findNode(TreeNode* root, TreeNode* p) {
//
//    if(root == nullptr)
//        return false;
//
//    return (root == p || findNode(root->left, p) || findNode(root->right, p));
//}
//
//TreeNode* lcaUtil(TreeNode* root, TreeNode* p, TreeNode* q, bool& v1, bool& v2) {
//
//    if(root == nullptr)
//        return nullptr;
//
//    if(root == p) {
//        v1 = true;
//        return root;
//    }
//
//    if(root == q) {
//        v2 = true;
//        return root;
//    }
//
//    TreeNode *left = lcaUtil(root->left, p , q, v1, v2);
//    TreeNode *right = lcaUtil(root->right, p , q, v1, v2);
//
//    if(left && right)
//        return root;
//
//    return left ? left : right;
//
//}
//
//TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//
//    bool v1 = false, v2 = false;
//
//    TreeNode *lca = lcaUtil(root, p, q, v1, v2);
//
//    if(v1 && v2 || v1 && findNode(root, q) || v2 && findNode(root, p))
//        return lca;
//
//    return nullptr;
//}
//
//void swap(int& a, int& b) {
//    int tmp = a;
//    a = b;
//    b = tmp;
//}
//
//void rotate(vector<vector<int>>& matrix) {
//
//    int rows = matrix.size();
//
//    if(rows == 0)
//        return;
//
//    int cols = matrix[0].size();
//
//    int i = 0, j = rows - 1;
//
//    while(i < j) {
//        matrix[i].swap(matrix[j]);
//        i++; j--;
//    }
//
//    for(i = 0; i < rows; i++)
//        for(j = i + 1; j < cols; j++)
//            swap(matrix[i][j], matrix[j][i]);
//
//}
//
//int maxProfit(vector<int>& prices) {
//
//    int minVal = INT32_MAX, maxProfit = 0;
//
//    for(int x: prices) {
//
//        if(x < minVal)
//            minVal = x;
//        else {
//            maxProfit = max(maxProfit, x - minVal);
//        }
//    }
//
//    return maxProfit;
//}
//
//bool wordBreak(string s, vector<string>& wordDict) {
//
//
//    if( find ( wordDict.begin(), wordDict.end(), s ) != wordDict.end() )
//        return true;
//
//    int n = s.size();
//    unordered_set<string> dict(wordDict.begin(), wordDict.end());
//
//    bool c[n + 1];
//    c[0] = true;
//
//    for(int i = 1; i <= n; i++) {
//        c[i] = false;
//
//        for(int j = 0; j < i; j++) {
//
//            string sub = s.substr(j, i - j);
//
//            if(c[j] && dict.find(sub) != dict.end()) {
//                c[i] = true;
//                break;
//            }
//        }
//    }
//    return c[n];
//}
//
//bool validBSTHelper(TreeNode* root, long int low, long int high) {
//
//    if(root == nullptr)
//        return true;
//
//    return ( root->val > low && root->val < high && validBSTHelper(root->left, low, root->val) &&
//             validBSTHelper(root->right, root->val, high));
//}
//
//bool isValidBST(TreeNode* root) {
//
//    return validBSTHelper(root, INT64_MIN, INT64_MAX);
//
//}
//
//vector<vector<int>> threeSum(vector<int>& nums) {
//
//    int n = nums.size(), sum;
//    vector<vector<int>> ans;
//
//    sort(nums.begin(), nums.end());
//
//    int i = 0, j, k;
//
//    while(i < n - 2) {
//
//        j = i + 1, k = n - 1;
//
//        while(j < k) {
//
//            sum = nums[i] + nums[j] + nums[k];
//
//            if(sum < 0)
//                j++;
//            else if(sum > 0)
//                k--;
//            else {
//                ans.push_back(vector<int> {nums[i], nums[j], nums[k]});
//                j++, k--;
//
//                while(j < k && nums[j] == nums[j - 1])
//                    j++;
//
//                while(j < k && nums[k] == nums[k + 1])
//                    k--;
//            }
//        }
//
//        i++;
//
//        while(i < n - 2 && nums[i] == nums[i - 1])
//            i++;
//    }
//
//
//    return ans;
//}
//
//bool hasCycle(ListNode *head) {
//
//    ListNode* fast = head, *slow = head;
//
//    while(fast && fast->next) {
//
//        fast = fast->next->next;
//        slow = slow->next;
//
//        if(fast == slow)
//            break;
//    }
//
//    if(fast == nullptr || fast->next == nullptr)
//        return false;
//
//    return true;
//}
//
//vector<int> productExceptSelf(vector<int>& nums) {
//
//    int n = nums.size();
//
//    vector<int> res (n);
//
//    res[0] = 1;
//
//    for(int i = 1; i < n; i++)
//        res[i] = res[i - 1] * nums[i - 1];
//
//    int right = 1;
//
//    for(int i = n - 1; i >= 0; i--) {
//        res[i] *= right;
//        right *= nums[i];
//    }
//
//    return res;
//
//}
//
//string longestPalindrome(string s) {
//
//    int n = s.size();
//    bool c[n][n];
//
//    if(n == 0)
//        return "";
//
//    for(int i = 0; i < n; i++)
//        c[i][i] = true;
//
//    int maxLen = 1, maxStart = 0;
//
//    for(int len = 2; len <= n; len++)
//        for(int i = 0, j = len - 1; j < n; j++, i++) {
//
//            if(len == 2)
//                c[i][j] = ( s[i] == s[j] );
//            else
//                c[i][j] = ( s[i] == s[j] && c[i + 1][j - 1] );
//
//            if(c[i][j] && maxLen < len) {
//                maxLen = len;
//                maxStart = i;
//            }
//        }
//
//    return s.substr(maxStart, maxLen);
//
//}
//
//ListNode* reverseList(ListNode* head) {
//
//    ListNode *next, *curr = head, *newHead = nullptr;
//
//    while(curr) {
//
//        next = curr->next;
//        curr->next = newHead;
//        newHead = curr;
//        curr = next;
//    }
//
//
//    return newHead;
//}
//
//void subsetsHelper(vector<int>& subset, int index, vector<int>& nums, vector<vector<int>>& subsets) {
//
//    if(index == nums.size()) {
//        subsets.push_back(subset);
//        return;
//    }
//
//    subsetsHelper(subset, index + 1, nums, subsets);
//
//    subset.push_back(nums[index]);
//
//    subsetsHelper(subset, index + 1, nums, subsets);
//
//    subset.pop_back();
//}
//
//vector<vector<int>> subsets(vector<int>& nums) {
//
//    vector<int> subset;
//    vector<vector<int>> subsets;
//    subsetsHelper(subset, 0, nums, subsets);
//    return subsets;
//
//}
//
//int myAtoi(string str) {
//
//    bool overflow = false, sign = true;
//    int n = str.size(), i = 0, num = 0;
//
//    while(i < n && str[i] == ' ')
//        i++;
//
//    if(i < n) {
//
//        if(str[i] == '+')
//            i++;
//        else if(str[i] == '-') {
//            i++;
//            sign = false;
//        }
//
//        while(i < n && str[i] >= '0' && str[i] <= '9') {
//
//            if(num > INT32_MAX / 10) {
//                overflow = true;
//                break;
//            }
//
//            num *= 10;
//
//            int tmp = str[i] - '0';
//
//            if(num > INT32_MAX - tmp) {
//                overflow = true;
//                break;
//            }
//
//            num += tmp;
//
//            i++;
//        }
//    }
//
//    if(overflow)
//        return sign ? INT32_MAX : INT32_MIN;
//
//    return sign ? num : -num;
//}
//
//bool isValid(string s) {
//    stack<char> paren;
//    for (char& c : s) {
//        switch (c) {
//            case '(':
//            case '{':
//            case '[': paren.push(c); break;
//            case ')': if (paren.empty() || paren.top()!='(') return false; else paren.pop(); break;
//            case '}': if (paren.empty() || paren.top()!='{') return false; else paren.pop(); break;
//            case ']': if (paren.empty() || paren.top()!='[') return false; else paren.pop(); break;
//            default: ; // pass
//        }
//    }
//    return paren.empty() ;
//}
//
////bool isValid(string s) {
////
////    stack<char> st;
////    unordered_map<char, char> mymap { {'(', ')'}, {'[', ']'}, {'{', '}'} };
////    for(char ch: s) {
////
////        if(mymap.find(ch) != mymap.end())
////            st.push(ch);
////        else if(!st.empty() && ch == mymap[st.top()])
////            st.pop();
////        else
////            return false;
////    }
////
////    return st.empty();
////}
//
//void serialize(TreeNode* root, ostringstream& out) {
//    if (root) {
//        out << root->val << ' ';
//        serialize(root->left, out);
//        serialize(root->right, out);
//    } else {
//        out << "# ";
//    }
//}
//
//TreeNode* deserialize(istringstream& in) {
//    string val;
//    in >> val;
//    if (val == "#")
//        return nullptr;
//    TreeNode* root = new TreeNode(stoi(val));
//    root->left = deserialize(in);
//    root->right = deserialize(in);
//    return root;
//}
//
//string serialize(TreeNode* root) {
//    ostringstream out;
//    serialize(root, out);
//    return out.str();
//}
//
//TreeNode* deserialize(string data) {
//    istringstream in(data);
//    return deserialize(in);
//}
//
//struct RandomListNode {
//    int label;
//    RandomListNode *next, *random;
//    RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
//};
//
//void duplicateNodes(RandomListNode *head) {
//
//    RandomListNode *next, *copy;
//
//    while(head) {
//
//        copy = new RandomListNode(head->label);
//
//        next = head->next;
//
//        head->next = copy;
//
//        copy->next = next;
//
//        head = next;
//    }
//
//}
//
//void copyRandomLinks(RandomListNode* head) {
//
//    while(head) {
//
//        if(head->random)
//            head->next->random = head->random->next;
//
//        head = head->next->next;
//    }
//}
//
//
//RandomListNode* separateLists(RandomListNode* head) {
//
//    RandomListNode* copyHead = head->next;
//    RandomListNode *curr1 = head, *curr2 = copyHead;
//
//    while(curr2->next) {
//        curr1->next = curr2->next;
//
//        curr2->next = curr1->next;
//
//        curr1 = curr1->next;
//
//        curr2 = curr2->next;
//    }
//
//    curr1->next = nullptr;
//
//    return copyHead;
//}
//
//RandomListNode *copyRandomList(RandomListNode *head) {
//
//    if(head == nullptr)
//        return nullptr;
//
//    duplicateNodes(head);
//    copyRandomLinks(head);
//    return separateLists(head);
//}
//
//int trap(int height[], int n) {
//    int l = 0, r = n-1, level = 0, water = 0;
//    while (l < r) {
//        int lower = height[height[l] < height[r] ? l++ : r--];
//        level = max(level, lower);
//        water += level - lower;
//    }
//    return water;
//}
//
//int lengthOfLongestSubstring(string s) {
//
//    const int CHARS = 256;
//    int indices[CHARS], n = s.size();
//    int start = 0, maxLen = 0;
//
//    for(int i = 0; i < CHARS; i++)
//        indices[i] = -1;
//
//    for(int i = 0; i < n; i++) {
//
//        int index = s[i];
//
//        if (indices[index] != -1 ) {
//            maxLen = max(maxLen, i - start);
//            start = max(start, indices[index] + 1);
//        }
//
//        indices[index] = i;
//    }
//
//    maxLen = max(maxLen, n - start);
//    return maxLen;
//}
//
//bool searchMatrix(vector<vector<int>>& matrix, int target) {
//
//    int m = matrix.size();
//
//    if(m == 0)
//        return false;
//
//    int n = matrix[0].size(), i = 0, j = n - 1;
//
//    while(i < m && j >= 0) {
//
//        if(matrix[i][j] == target)
//            return true;
//        else if(target < matrix[i][j])
//            j--;
//        else
//            i++;
//    }
//
//    return false;
//}
//
//vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//
//    int n = nums.size();
//    vector<int> ans;
//
//    if(n == 0)
//        return ans;
//
//    deque<int> window;
//
//    for(int i = 0; i < k; i++) {
//
//        while(!window.empty() && nums[i] > nums[window.back()])
//            window.pop_back();
//
//        window.push_back(i);
//    }
//
//    ans.push_back(nums[window.front()]);
//
//    for(int i = k; i < n; i++) {
//
//        while(!window.empty() && nums[i] > nums[window.back()])
//            window.pop_back();
//
//        window.push_back(i);
//
//        if(window.front() == i - k)
//            window.pop_front();
//
//        ans.push_back(nums[window.front()]);
//    }
//
//    return ans;
//
//}
//
//int countPrimes(int n) {
//    if (n<=2) return 0;
//    vector<bool> passed(n, false);
//    int sum = 1;
//    int upper = sqrt(n);
//    for (int i=3; i<n; i+=2) {
//        if (!passed[i]) {
//            sum++;
//            //avoid overflow
//            if (i>upper) continue;
//            for (int j=i*i; j<n; j+=i) {
//                passed[j] = true;
//            }
//        }
//    }
//    return sum;
//}
////   int result ;
//
////   bitset<32> bin(number);
//
////   int i = 0, j = 31;
//
////   while(j >= 0 && !bin[j])
////     j++;
//
////   while(i < j && bin[i] == bin[j]) {
////       i++;
////       j--;
////   }
//
//
//int solve(int number){
//
//    deque<int> v;
//
//    while(number) {
//        if(number & 1)
//            v.push_front(1);
//        else
//            v.push_front(0);
//
//        number >>= 1;
//    }
//
//    int i = 0, j = v.size() - 1;
//
//    while(i < j && v[i++] == v[j--]);
//
//    return i >= j;
//}
//class MinStack {
//public:
//    /** initialize your data structure here. */
//    stack<int> elemStack, minStack;
//
//    MinStack() {
//
//    }
//
//    void push(int x) {
//
//        elemStack.push(x);
//
//        if(minStack.empty() || x <= minStack.top())
//            minStack.push(x);
//    }
//
//    void pop() {
//        int x = elemStack.top();
//        elemStack.pop();
//
//        if(x == minStack.top())
//            minStack.pop();
//    }
//
//    int top() {
//        return elemStack.top();
//    }
//
//    int getMin() {
//        return minStack.top();
//    }
//};
//
//vector<vector<string>> groupAnagrams(vector<string>& strs) {
//
//    int count = 0;
//    unordered_map<string, int> mymap;
//    vector<vector<string>> ans;
//
//    for(const string& s: strs) {
//
//        string sorted = s;
//        sort(sorted.begin(), sorted.end());
//
//
//        if(mymap.find(sorted) == mymap.end()) {
//            ans.push_back ( vector<string> {s} );
//            mymap[sorted] = count;
//            count++;
//        } else {
//            int index = mymap[sorted];
//            ans[index].push_back(s);
//        }
//    }
//    return ans;
//}
//
//class MinHeap {
//
//public:
//    int heapSize;
//    ListNode **arr;
//
//    MinHeap(vector<ListNode*>& lists) {
//
//        int n = lists.size();
//        heapSize = 0;
//        arr = new ListNode*[n];
//
//        for(int i = 0; i < n; i++)
//            if(lists[i]) {
//                arr[heapSize] = lists[i];
//                heapSize++;
//            }
//    }
//
//    int leftChild(int i) { return 2 * i + 1; }
//
//    int rightChild(int i) { return 2 * i + 2; }
//
//    int parent(int i) { return (i - 1) / 2; }
//
//    void swap(ListNode*& node1, ListNode*& node2) {
//        ListNode *tmp = node1;
//        node1 = node2;
//        node2 = tmp;
//    }
//
//    void heapify(int i) {
//
//        int left = leftChild(i);
//        int right = rightChild(i);
//        int smallest = i;
//
//        if(left < heapSize && arr[left]->val < arr[smallest]->val)
//            smallest = left;
//
//        if(right < heapSize && arr[right]->val < arr[smallest]->val)
//            smallest = right;
//
//        if(smallest != i) {
//            swap(arr[i], arr[smallest]);
//            heapify(smallest);
//        }
//    }
//
//    void buildHeap() {
//
//        for(int i = parent(heapSize - 1); i >= 0; i--)
//            heapify(i);
//    }
//
//    ListNode* extractMin() {
//        if(empty())
//            return nullptr;
//
//        ListNode* node = arr[0];
//
//        if(node->next == nullptr) {
//
//            heapSize--;
//
//            if(heapSize) {
//                swap(arr[0], arr[heapSize]);
//                heapify(0);
//            }
//
//        } else {
//            arr[0] = node->next;
//            heapify(0);
//        }
//
//        return node;
//    }
//
//    bool empty() { return heapSize == 0; }
//
//};
//
//ListNode* mergeKLists(vector<ListNode*>& lists) {
//
//    MinHeap mp(lists);
//    mp.buildHeap();
//
//    ListNode* head = nullptr, *curr;
//
//
//    while(!mp.empty()) {
//
//        if(head == nullptr)
//            head = curr = mp.extractMin();
//        else {
//            curr->next = mp.extractMin();
//            curr = curr->next;
//        }
//    }
//
//    return head;
//}
//
//bool isAnagram(string s, string t) {
//
//    int freq[26] = {0};
//
//    if(s.size() != t.size())
//        return false;
//
//    for(int i = 0; i < s.size(); i++)
//        freq[s[i] - 'a']++;
//
//    for(int i = 0; i < t.size(); i++) {
//        if(!freq[t[i] - 'a']--)
//            return false;
//    }
//
//    return true;
//}
//
//void printList(ListNode* head) {
//    while(head) {
//        cout << head->val << " ";
//        head = head->next;
//    }
//}
//
//int findLength(ListNode* head) {
//
//    int n = 0;
//    while(head) {
//        head = head->next;
//        n++;
//    }
//    return n;
//}
//
//ListNode* advance(ListNode* head, int n) {
//
//    while(head && n) {
//        head = head->next;
//        n--;
//    }
//
//    return head;
//}
//
//
//ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
//    //boundary check
//    if(headA == NULL || headB == NULL) return NULL;
//
//    ListNode *a = headA;
//    ListNode *b = headB;
//
//    //if a & b have different len, then we will stop the loop after second iteration
//    while( a != b){
//        //for the end of first iteration, we just reset the pointer to the head of another linkedlist
//        a = a == NULL? headB : a->next;
//        b = b == NULL? headA : b->next;
//    }
//
//    return a;
//}
//
//ListNode *getIntersectionNode2(ListNode *headA, ListNode *headB) {
//
//    int n1 = findLength(headA), n2 = findLength(headB);
//
//    if(n1 < n2)
//        headB = advance(headB, n2 - n1);
//    else if(n1 > n2)
//        headA = advance(headA, n1 - n2);
//
//    while(headA && headB && headA != headB) {
//        headA = headA->next;
//        headB = headB->next;
//    }
//
//    if(headA == headB)
//        return headA;
//
//    return nullptr;
//}
//
//bool isPalindrome(ListNode* head) {
//
//    if(head == nullptr || head->next == nullptr)
//        return true;
//
//    ListNode *slow = head, *fast = head->next;
//
//    while(fast && fast->next) {
//        fast = fast->next->next;
//        slow = slow->next;
//    }
//
//    ListNode* head2 = reverseList(slow->next);
//
//    ListNode *curr1 = head, *curr2 = head2;
//
//    while(curr2 && curr1->val == curr2->val) {
//        curr1 = curr1->next;
//        curr2 = curr2->next;
//    }
//
//    slow->next = reverseList(head2);
//
//    return curr2 == nullptr;
//}
//
//
//
//int main() {
//
////    int a[] = {0,1,0,2,1,0,1,3,2,1,2,1};
////    int n = sizeof(a) / sizeof(a[0]);
//
////    cout << trap(a, n);
//
////    string s = "abba";
////    cout << lengthOfLongestSubstring(s);
//
//
////    TreeNode* root = new TreeNode(2147483647);
////    cout << isValidBST(root);
//
////    vector<int> nums {-1, 0, 1, 2, -1, -4};
////    threeSum(nums);
//
////    vector<int> nums = {0, 0};
////    productExceptSelf(nums);
//
////    vector<int> nums = {1};
////    maxSlidingWindow(nums, 1);
//
////    string s = "a", t = "a";
////    isAnagram(s, t);
//
////    vector<string> words = {"a"};
////    groupAnagrams(words);
//
////    ListNode* head1 = new ListNode(1);
////    head1->next = new ListNode(2);
////    head1->next->next = new ListNode(2);
////
////    ListNode* head2 = new ListNode(1);
////    head2->next = new ListNode(1);
////    head2->next->next = new ListNode(2);
////    vector<ListNode*> lists {head1, head2};
////    ListNode* mergeHead =  mergeKLists(lists);
////    printList(mergeHead);
//
////    cout << myAtoi("2147483648");
//
/////**/    cout << countPrimes(500);
//
//    solve(9);
//    return 0;
//
//
//
//}
//
