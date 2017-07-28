////
//// Created by jeevan on 6/7/17.
////
//
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
//
//void reverseWord(string& s, int i, int j) {
//
//    while(i < j) {
//        char tmp = s[i];
//        s[i] = s[j];
//        s[j] = tmp;
//        i++; j--;
//    }
//}
//
//string reverseSentence(string sentence) {
//
//    int n = sentence.size();
//
//    int i = 0, s = -1;
//
//    while(i < n) {
//
//        if(sentence[i] != ' ' && s == -1)
//            s = i;
//        else if(sentence[i] == ' ' && s != -1) {
//            reverseWord(sentence, s, i - 1);
//            s = -1;
//        }
//
//        i++;
//    }
//
//    if(s != -1)
//        reverseWord(sentence, s, n - 1);
//
//    return sentence;
//}
//
//struct avg {
//public:
//    double sum;
//    int count;
//
//    avg(): sum(0), count(0) {}
//
//    avg(double s, int c): sum(s), count(c) {}
//};
//
//int bestAverageGrade(vector < vector < string > > scores) {
//
//    if(scores.empty())
//        return 0;
//
//    double maxAvg = INT32_MIN;
//
//    unordered_map<string, avg> mymap;
//
//    for(vector<string> v: scores) {
//
//        if(mymap.find(v[0]) == mymap.end())
//            mymap[v[0]] = avg(atof(v[1].c_str()), 1);
//        else {
//
//            mymap[v[0]].sum += atof(v[1].c_str());
//            mymap[v[0]].count++;
//        }
//
//    }
//
//    for(auto it = mymap.begin(); it != mymap.end(); it++) {
//
//        double curr = (*it).second.sum / (*it).second.count;
//
//        maxAvg = max(maxAvg, curr);
//    }
//
//    return floor( maxAvg );
//
//}
//
//
//int search2(vector<int>& nums, int target) {
//
////    find min element
//
//    int n = nums.size();
//
//    int low = 0, high = n - 1, mid;
//
//    while(low < high) {
//        mid = (low + high) / 2;
//
//        if(nums[low] <= nums[mid])
//            low = mid + 1;
//        else
//            high = mid;
//    }
//
////    min elem gives offset of array
//    int offset = low;
//
//    low = 0, high = n - 1;
//
//    while(low <= high) {
//
//        mid = (low + high) / 2;
//
//        int offmid = ( mid  + offset ) % n;
//
//        if(target < nums[offmid])
//            high = mid - 1;
//        else if(target > nums[offmid])
//            low = mid + 1;
//        else
//            return offmid;
//    }
//
//    return -1;
//}
//
//
//int search(vector<int>& nums, int target) {
//
//    if(nums.empty())
//        return -1;
//
//    int i = 0, j = nums.size() - 1;
//
//    while(i < j) {
//
//        int mid = (i + j) / 2;
//
//        if(nums[mid] == target)
//            return mid;
//
//        else if(nums[i] <= nums[mid]) {
//
//            if(target >= nums[i] && target < nums[mid])
//                j = mid - 1;
//            else
//                i = mid + 1;
//
//        } else {
//
//            if(target > nums[mid] && target <= nums[j])
//                i = mid + 1;
//            else
//                j = mid - 1;
//        }
//    }
//
//    return nums[i] == target ? i : -1;
//}
//
//bool searchWithDup(vector<int>& nums, int target) {
//// best search in sorted rotated
//    int low = 0, high = nums.size() - 1;
//
//    while(low <= high) {
//
//        int mid = (low + high) / 2;
//
//        if(nums[mid] == target)
//            return true;
//
//        if(nums[low] == nums[mid] && nums[mid] == nums[high]) {
//            low++; high--;
//        } else if (nums[mid] <= nums[high]) {
//
//            if(target > nums[mid] && target <= nums[high])
//                low = mid + 1;
//            else
//                high = mid - 1;
//
//        } else if(nums[mid] > nums[high]) {
//
//            if (target >= nums[low] && target < nums[mid])
//                high = mid - 1;
//            else
//                low = mid + 1;
//        }
//
//    }
//
//    return false;
//}
//
//
//ListNode* insertionSortList(ListNode* head) {
//
//    ListNode *dmy = new ListNode(0);
//
//    while(head) {
//
//        ListNode *prev = dmy;
//
//        while(prev->next && prev->next->val <= head->val)
//            prev = prev->next;
//
//        ListNode *next = head->next;
//
//        head->next = prev->next;
//        prev->next = head;
//        head = next;
//    }
//
//    return dmy->next;
//
//}
//
//ListNode* insertionSortList2(ListNode* head) {
//
//    ListNode *tail, *dmy = new ListNode(INT32_MIN);
//    dmy->next = head;
//
//    head = dmy, tail = head;
//
//    while(tail->next) {
//
//        if(tail->val <= tail->next->val)
//            tail = tail->next;
//        else {
//
//            ListNode *prev = head, *curr = tail->next;
//
//            tail->next = tail->next->next;
//
//            while(prev->next && prev->next->val <= curr->val)
//                prev = prev->next;
//
//            curr->next = prev->next;
//            prev->next = curr;
//        }
//    }
//
//    return head->next;
//}
//
//int maxRotateFunction(vector<int>& A) {
//
//    if(A.empty())
//        return 0;
//
//    int sum = 0, n = A.size(), f = 0;
//
//
//    for(int i = 0; i < n; i++) {
//        sum += A[i];
//        f += i * A[i];
//    }
//
//    int fmax = f;
//
//    for(int i = 1; i < n; i++) {
//
//        f += n * A[i - 1] - sum;
//
//        fmax = max(fmax, f);
//    }
//
//    return fmax;
//}
//
//ListNode* partition(ListNode* head, int x) {
//
//    ListNode node1(1), node2(1);
//    ListNode *p1 = &node1, *p2 = &node2;
//
//    while(head) {
//
//        if(head->val < x) {
//
//            p1->next = head;
//            p1 = head;
//
//        } else {
//
//            p2->next = head;
//            p2 = head;
//        }
//
//        head = head->next;
//    }
//
//    p2->next = nullptr;
//    p1->next = node2.next;
//    return node1.next;
//}
//
//void printList(ListNode *head) {
//
//    while(head) {
//        cout << head->val << " ";
//        head = head->next;
//    }
//    cout << endl;
//}
//
//class Solution {
//
//    int powMod(int a, int b) {
//
//        a %= MOD;
//
//        int res = 1;
//
//        for(int i = 0; i < b; i++)
//            res = (res * a) % MOD;
//
//        return res;
//    }
//
//    int superPow(int a, vector<int>& b, int index) {
//
//        if(index == 0)
//            return powMod(a, b[0]);
//
//        return powMod(superPow(a, b, index - 1), 10) * powMod(a, b[index]) % MOD;
//
//    }
//public:
//
//    const int MOD = 1337;
//
//    int superPow(int a, vector<int> &b) {
//
//        if(b.empty())
//            return 1;
//
//        return superPow(a, b, b.size() - 1);
//    }
//};
//
//
//TreeNode* sortedList(ListNode** head, int n) {
//
//    if(n == 0)
//        return nullptr;
//
//    TreeNode *leftRoot = sortedList(head, n / 2);
//
//    TreeNode *root = new TreeNode((*head)->val);
//    *head = (*head)->next;
//
//    root->left = leftRoot;
//    root->right = sortedList(head, n - n / 2 - 1);
//
//    return root;
//}
//
//
//TreeNode* sortedListToBST(ListNode* head) {
//
//    int len = 0;
//    ListNode *curr = head;
//
//    while(curr) {
//        curr = curr->next;
//        len++;
//    }
//
//    return sortedList(&head, len);
//}
//
//int minimumTotal(vector<vector<int>>& triangle) {
//// using DFS
//    int n = triangle.size();
//
//    int c[n] = {0}, i = 0, sum = 0, minSum = INT32_MAX;
//
//    while(i >= 0) {
//
//        sum += triangle[i][c[i]];
//
//        if(i == n - 1) {
//
//            minSum = min(minSum, sum);
//
//            while( ( i >= 0 && c[i] == triangle[i].size() - 1 ) || ( i > 0 && c[i] != c[i - 1] ) ) {
//                sum -= triangle[i][c[i]];
//                i--;
//            }
//
//            if(i >= 0) {
//                sum -= triangle[i][c[i]];
//                c[i]++;
//            }
//
//        } else {
//            i++;
//            c[i] = c[i - 1];
//        }
//
//    }
//
//    return minSum;
//}
//
//int minimumTotalDP(vector<vector<int>>& triangle) {
//
//    int n = triangle.size();
//
//    if(n == 0)
//        return 0;
//
////    for last level, minSum to reach last level is node itself
//    vector<int> dp = triangle[n - 1];
//
////    for above level, for each node, we can either choose left or right neighbor
//    for(int level = n - 2; level >= 0; level--)
//        for(int node = 0; node <= level; node++)
//            dp[node] = min(dp[node], dp[node + 1]) + triangle[level][node];
//
//    return dp[0];
//}
//
//vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
//
//    int m = matrix.size(), n = m ? matrix[0].size() : 0;
//
//    vector<vector<int>> res(m, vector<int>(n, INT32_MAX - 1));
//
//    for (int i = 0; i < m; i++)
//
//        for (int j = 0; j < n; j++) {
//
//            if (matrix[i][j]) {
//
//                if (i > 0)
//                    res[i][j] = res[i - 1][j] + 1;
//
//                if (j > 0)
//                    res[i][j] = min(res[i][j], res[i][j - 1] + 1);
//
//            } else
//                res[i][j] = 0;
//        }
//
//
//    for (int i = m - 1; i >= 0; i--)
//        for (int j = n - 1; j >= 0; j--)
//
//            if (res[i][j]) {
//
//                if (i < m - 1)
//                    res[i][j] = min(res[i][j], res[i + 1][j] + 1);
//
//                if (j < n - 1)
//                    res[i][j] = min(res[i][j], res[i][j + 1] + 1);
//            }
//
//    return res;
//}
//
//void pathSumHelper(TreeNode *root, int rem, vector<int>& tmp, vector<vector<int>>& res) {
//
//    if(root == nullptr)
//        return;
//
//    rem -= root->val;
//    tmp.push_back(root->val);
//
//    if(root->left == nullptr && root->right == nullptr) {
//
//        if(rem == 0)
//            res.push_back(tmp);
//
//    } else {
//
//        pathSumHelper(root->left, rem, tmp, res);
//        pathSumHelper(root->right, rem, tmp, res);
//    }
//
//    tmp.pop_back();
//}
//
//vector<vector<int>> pathSum(TreeNode* root, int sum) {
//// 113
//    vector<vector<int>> res;
//    vector<int> tmp;
//    pathSumHelper(root, sum, tmp, res);
//    return res;
//}
//
//void permuteHelper(int index, unordered_map<int, int>& freq, vector<int>& tmp, vector<vector<int>>& res) {
//
//    if(index == tmp.size()) {
//        res.push_back(tmp);
//        return;
//    }
//
//    for(auto& it: freq) {
//
//        if(it.second) {
//            tmp[index] = it.first;
//            it.second--;
//            permuteHelper(index + 1, freq, tmp, res);
//            it.second++;
//        }
//    }
//}
//
//vector<vector<int>> permuteUnique(vector<int>& nums) {
//
//    int n = nums.size();
//    vector<int> tmp(n);
//    vector<vector<int>> res;
//    unordered_map<int, int> freq;
//
//    for(int x: nums)
//        if(freq.find(x) == freq.end())
//            freq[x] = 1;
//        else
//            freq[x]++;
//
//    permuteHelper(0, freq, tmp, res);
//
//    return res;
//}
//
//void permuteHelper2(int index, vector<int> nums, vector<vector<int>>& res) {
//
//    if(index == nums.size()) {
//        res.push_back(nums);
//        return;
//    }
//
//    for(int i = index; i < nums.size(); i++) {
//
//        if(i != index && nums[i] == nums[index])
//            continue;
//        swap(nums[i], nums[index]);
//        permuteHelper2(index + 1, nums, res);
//    }
//}
//
//vector<vector<int>> permuteUnique2(vector<int>& nums) {
//
//    int n = nums.size();
//    vector<vector<int>> res;
//
//    sort(nums.begin(), nums.end());
//
//    permuteHelper2(0, nums, res);
//
//    return res;
//}
//
//TreeNode* buildTreeHelper(vector<int>& inorder, int is, int ie, vector<int>& postorder, int pe) {
//
//    int i;
//
//    if(is > ie)
//        return nullptr;
//
//    TreeNode *root = new TreeNode(postorder[pe]);
//
//    for(i = is; i <= ie; i++)
//        if(inorder[i] == postorder[pe])
//            break;
//
//    root->left = buildTreeHelper(inorder, is, i - 1, postorder, pe - 1 - (ie - i));
//    root->right = buildTreeHelper(inorder, i + 1, ie, postorder, pe - 1);
//
//    return root;
//
//}
//
//TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
//// 106
//
//    return buildTreeHelper(inorder, 0, inorder.size() - 1, postorder, postorder.size() - 1);
//
//}
//
//TreeNode* buildTree2(vector<int>& inorder, vector<int>& postorder) {
////    106
//
//    if(inorder.empty())
//        return nullptr;
//
//    TreeNode *root = new TreeNode(postorder.back());
//    postorder.pop_back();
//
//    stack<TreeNode*> st;
//    st.push(root);
//
//    while(1) {
//
//        if(st.top()->val == inorder.back()) {
//
//            TreeNode *top = st.top();
//            st.pop();
//            inorder.pop_back();
//
//            if(inorder.empty())
//                break;
//
////           no left child
//            if(!st.empty() && st.top()->val == inorder.back())
//                continue;
//
//            top->left = new TreeNode(postorder.back());
//            postorder.pop_back();
//            st.push(top->left);
//
//        } else {
//
//            TreeNode *right = new TreeNode(postorder.back());
//            postorder.pop_back();
//
//            st.top()->right = right;
//            st.push(right);
//        }
//
//    }
//
//    return root;
//}
//
//TreeNode* buildTreePreHelper(vector<int>& inorder, int is, int ie, vector<int>& preorder, int ps) {
//
//    int i;
//
//    if(is > ie)
//        return nullptr;
//
//    TreeNode *root = new TreeNode(preorder[ps]);
//
//    for(i = is; i <= ie; i++)
//        if(inorder[i] == preorder[ps])
//            break;
//
//    root->left = buildTreePreHelper(inorder, is, i - 1, preorder, ps + 1);
//    root->right = buildTreePreHelper(inorder, i + 1, ie, preorder, ps + 1 + (i - is));
//
//    return root;
//}
//
//TreeNode* buildTreePre(vector<int>& preorder, vector<int>& inorder) {
//// 105
//    return buildTreePreHelper(inorder, 0, inorder.size() - 1, preorder, 0);
//}
//
//TreeNode* buildTreePre2(vector<int>& preorder, vector<int>& inorder) {
//
//    if(preorder.empty())
//        return nullptr;
//
//    stack<TreeNode*> st;
//    TreeNode *root = new TreeNode(preorder.front());
//    st.push(root);
//    preorder.erase(preorder.begin());
//
////    as leftchild are visited, it is deleted from inorder
//
//    while(1) {
//
//        if(st.top()->val == inorder.front()) {
////            no left child or handled left child
//            TreeNode *top = st.top();
//            st.pop();
//            inorder.erase(inorder.begin());
//
////            check if this is right most child which is last in inorder
//            if(inorder.empty())
//                break;
//
////            if it has no right child, ie next node in inorder is right child or parent, check with st top which
////            contains parent
//            if( !st.empty() && inorder.front() == st.top()->val)
//                continue;
//
////            handle right child
//            TreeNode *right = new TreeNode(preorder.front());
//            top->right = right;
//            st.push(right);
//            preorder.erase(preorder.begin());
//
//        } else {
//
//            TreeNode *left = new TreeNode(preorder.front());
//            st.top()->left = left;
//            st.push(left);
//            preorder.erase(preorder.begin());
//
//        }
//    }
//
//    return root;
//}
//
//int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
//
//    int m = obstacleGrid.size(), n = m ? obstacleGrid[0].size() : 0;
//
//    if(m == 0 || n == 0)
//        return 0;
//
//    vector<int> dist(n, 0);
//
//    dist[0] = 1;
//
//    for(int i = 0; i < m; i++) {
//
//        for(int j = 0; j < n; j++) {
//
//            if(obstacleGrid[i][j])
//                dist[j] = 0;
//            else if(j > 0)
//                dist[j] += dist[j - 1];
//        }
//    }
//
//    return dist[n - 1];
//}
//
//int firstIndex(vector<int>& nums, int target) {
//
//    int low = 0, high = nums.size() - 1;
//
//    while(low <= high) {
//
//        int mid = (low + high) / 2;
//
//        if(nums[mid] == target && (mid == low || nums[mid - 1] < target))
//            return mid;
//
//        if(target <= nums[mid])
//            high = mid - 1;
//        else
//            low = mid + 1;
//    }
//
//    return -1;
//}
//
//int lastIndex(vector<int>& nums, int target) {
//
//    int low = 0, high = nums.size() - 1;
//
//    while(low <= high) {
//
//        int mid = (low + high) / 2;
//
//        if(nums[mid] == target && (mid == high || nums[mid + 1] > target))
//            return mid;
//
//        if(target >= nums[mid])
//            low = mid + 1;
//        else
//            high = mid - 1;
//    }
//
//    return -1;
//}
//
//vector<int> searchRange(vector<int>& nums, int target) {
//
//    vector<int> res(2, -1);
//
//    res[0] = firstIndex(nums, target);
//
//    if(res[0] != -1)
//        res[1] = lastIndex(nums, target);
//
//    return res;
//}
//
//void crosProduct(vector<TreeNode*>& left, vector<TreeNode*>& right, vector<TreeNode*>& roots, int k) {
//
//    for(auto& lchild: left)
//
//        for(auto& rchild: right) {
//
//            TreeNode *root = new TreeNode(k);
//            root->left = lchild;
//            root->right = rchild;
//
//            roots.push_back(root);
//        }
//}
//
//vector<TreeNode*> generateTrees(int low, int  high) {
//
//    vector<TreeNode*> roots, left, right;
//
//    if(low <= high)
//
//        for(int i = low; i <= high; i++) {
//
//            left = generateTrees(low, i - 1);
//
//            right = generateTrees(i + 1, high);
//
//            crosProduct(left, right, roots, i);
//        }
//
//    else
//
//        roots.push_back(nullptr);
//
//    return roots;
//}
//
//vector<TreeNode*> generateTrees(int n) {
//
//    if(n < 1)
//        return vector<TreeNode*>();
//
//    return generateTrees(1, n);
//}
//
//
//struct Graph {
//
//    int V;
//    vector<int> *adj;
//
//    Graph(int v, vector<pair<int, int>>& edges) {
//        V = v;
//        adj = new vector<int>[V];
//
//        for(auto& p: edges) {
//            adj[p.second].push_back(p.first);
//        }
//    }
//
//    bool dfs(int i, bool visited[], bool stack[]) {
//
//        visited[i] = true;
//        stack[i] = true;
//
//        for(int x: adj[i]) {
//
//            if ( !visited[x] ) {
//                if (dfs(x, visited, stack))
//                    return true;
//            } else if(stack[x])
//                return true;
//        }
//
//        stack[i] = false;
//        return false;
//    }
//
//    bool isCyclicDFS() {
//
//        bool visited[V] = {0};
//        bool stack[V] = {0};
//
//        for(int i = 0; i < V; i++)
//            if(!visited[i] && dfs(i, visited, stack))
//                return true;
//
//        return false;
//    }
//
//    vector<int> computeIndegree() {
//
//        vector<int> indegrees(V, 0);
//
//        for(int u = 0; u < V; u++)
//            for(auto& v: adj[u])
//                indegrees[v]++;
//
//        return indegrees;
//    }
//
//    bool isCyclicBFS() {
//
//        int u;
//        vector<int> indegrees =computeIndegree();
//
//        for(int i = 0; i < V; i++) {
////            search node with indegree 0
//
//            for(u = 0; u < V; u++)
//                if(indegrees[u] == 0)
//                    break;
//
//            if(u == V)
//                return true;
//
//            indegrees[u] = -1;
//
//            for(auto& v: adj[u])
//                indegrees[v]--;
//
//        }
//        return false;
//    }
//
//    bool visit(int u, bool visited[], bool inStack[], vector<int>& res) {
//
//        visited[u] = true;
//        inStack[u] = true;
//
//        for(int v: adj[u]) {
//
//            if ( !visited[v] ) {
//                if (!visit(v, visited, inStack, res))
//                    return false;
//            } else if(inStack[v])
//                return false;
//        }
//
//        inStack[u] = false;
//        res.insert(res.begin(), u);
//        return true;
//    }
//
//    vector<int> topologicalSort() {
//
//        int i;
//        vector<int> res;
//        bool visited[V] = {0}, inStack[V] = {0};
//
//        for(i = 0; i < V; i++)
//            if(!visited[i] && !visit(i, visited, inStack, res))
//                break;
//
//
//        if(i < V)
//            return vector<int> ();
//
//        return res;
//    }
//};
//
//
//bool canFinish(int numCourses, vector<pair<int, int>>& prerequisites) {
//
//    Graph graph(numCourses, prerequisites);
//    return !graph.isCyclicDFS();
//}
//
//vector<int> findOrder(int numCourses, vector<pair<int, int>>& prerequisites) {
////    210
//    Graph graph(numCourses, prerequisites);
//    return graph.topologicalSort();
//}
//
//ListNode* detectCycle(ListNode *head) {
//
//    ListNode *fast = head, *slow = head;
//
//    while(fast) {
//
//        fast = fast->next;
//
//        if(fast) {
//            fast = fast->next;
//            slow = slow->next;
//        }
//
//        if(fast == slow)
//            break;
//    }
//
//    if(fast) {
//        fast = head;
//
//        while(fast != slow) {
//            fast = fast->next;
//            slow = slow->next;
//        }
//    }
//
//    return fast;
//}
//
//int threeSumClosest(vector<int>& nums, int target) {
//
//    int n = nums.size(), minDiff = INT32_MAX, diff;
//    sort(nums.begin(), nums.end());
//
//    for(int k = 0; k < n - 2; k++) {
//
//        int i = k + 1, j = n - 1;
//
//        while(i < j) {
//
//            diff = nums[k] + nums[i] + nums[j] - target;
//
//            if(abs(diff) < abs(minDiff))
//                minDiff = diff;
//
//            if(diff < 0)
//                i++;
//            else if(diff > 0)
//                j--;
//            else
//                break;
//        }
//    }
//
//    return minDiff + target;
//}
//
//vector<string> findRepeatedDnaSequences(string s) {
////  187 see I did it in 10 lines
//    int v = 0;
//    unordered_map<int, bool> contains;
//    vector<string> res;
//
//    for(int i = 0; i < s.size(); i++) {
//
//        v = v << 3 & 0x3FFFFFFF | s[i] & 7;
//
//        if(contains.find(v) == contains.end())
//            contains[v] = true;
//        else if(contains[v]) {
//            res.push_back(s.substr(i - 9, 10));
//            contains[v] = false;
//        }
//    }
//
//    return res;
//}
//
//ListNode* reverseBetween(ListNode* head, int m, int n) {
//
//    ListNode *newhead = new ListNode(0);
//    newhead->next = head;
//
//    ListNode *prev = newhead;
//
//    for(int i = 0; i < m - 1; i++)
//        prev = prev->next;
//
//    ListNode *move, *curr = prev->next;
//
//    for(int i = 0; i < n - m; i++) {
//
//        move = curr->next;
//        curr->next = move->next;
//        move->next = prev->next;
//        prev->next = move;
//    }
//
//    return newhead->next;
//}
//
//int findSubstringInWraproundString(string p) {
//
//    int len[26] = {0}, currlen = 0, k;
//
//    for(int i = 0; i < p.size(); i++) {
//
//        if(i && ( p[i] == p[i - 1] + 1 || p[i - 1] == p[i] + 25 ) )
//            currlen++;
//        else
//            currlen = 1;
//
//        k = p[i] - 'a';
//        len[k] = max(len[k], currlen);
//    }
//
//    return accumulate(len, len + 26, 0);
//}
//
//vector<pair<int, int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
////  373
//    int n1 = nums1.size(), n2 = nums2.size();
//
//    vector<pair<int, int>> res;
//
//    if(n1 == 0 || n2 == 0 || k == 0)
//        return res;
//
//    auto comp = [&nums1, &nums2] (pair<int, int>& p1, pair<int, int>& p2) {
//        return nums1[p1.first] + nums2[p1.second] > nums1[p2.first] + nums2[p2.second];
//    };
//
//    priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(comp)> pq(comp);
//    pq.emplace(0, 0);
//
//    while(k-- && !pq.empty()) {
//
//        auto p = pq.top(); pq.pop();
//        res.emplace_back(nums1[p.first], nums2[p.second]);
//
//        if(p.first + 1 < n1)
//            pq.emplace(p.first + 1, p.second);
//
//        if(p.first == 0 && p.second + 1 < n2)
//            pq.emplace(p.first, p.second + 1);
//    }
//
//    return res;
//}
//
//vector<pair<int, int>> kSmallestPairs2(vector<int>& nums1, vector<int>& nums2, int k) {
////  373
//    int n1 = nums1.size(), n2 = nums2.size();
//
//    vector<pair<int, int>> res;
//
//    if(n1 == 0 || n2 == 0 || k == 0)
//        return res;
//
//    auto comp = [&nums1, &nums2] (pair<int, int>& p1, pair<int, int>& p2) {
//        return nums1[p1.first] + nums2[p1.second] > nums1[p2.first] + nums2[p2.second];
//    };
//
//    priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(comp)> pq(comp);
//
//    for(int i = 0; i < min(k, n1); i++)
//        pq.emplace(i, 0);
//
//    while(k-- && !pq.empty()) {
//
//        auto p = pq.top(); pq.pop();
//
//        res.emplace_back(nums1[p.first], nums2[p.second]);
//
//        if(p.second + 1 < n2)
//            pq.emplace(p.first, p.second + 1);
//    }
//
//    return res;
//}
//
//int minSubArrayLen(int s, vector<int>& nums) {
////  209 O(n)
//    int sum = 0, start = 0, n = nums.size();
//    int minlen = n + 1;
//
//    for(int i = 0; i < n; i++) {
//
//        sum += nums[i];
//
//        while (sum  >= s) {
//            minlen = min(minlen, i - start + 1);
//            sum -= nums[start++];
//        }
//    }
//
//    return minlen > n ? 0 : minlen;
//}
//
//int minSubArrayLen2(int s, vector<int>& nums) {
////  209 O(nlogn)
//
//    int n = nums.size();
//
//    if(n == 0)
//        return 0;
//
//    int sum[n] = {0};
//    partial_sum(nums.begin(), nums.end(), sum);
//
//    int minlen = n + 1;
//    for(int i = 0; i < n; i++) {
//
//        if(sum[i] >= s) {
//
//            int j = upper_bound(sum, sum + n, sum[i] - s) - sum;
//            minlen = min(minlen, i - j + 1);
//
//        }
//    }
//
//    return minlen > n ? 0 : minlen;
//}
//
//struct Interval {
//    int start;
//    int end;
//    Interval() : start(0), end(0) {}
//    Interval(int s, int e) : start(s), end(e) {}
//};
//
//vector<Interval> merge(vector<Interval>& intervals) {
//
//    vector<Interval> res;
//
//    if(intervals.empty())
//        return res;
//
//    sort(intervals.begin(), intervals.end(), [] (Interval& a, Interval& b) {
//        return a.start < b.start;
//    });
//
//    res.push_back(intervals[0]);
//
//    for(int i = 1; i < intervals.size(); i++)
//
//        if(res.back().end < intervals[i].start)
//            res.push_back(intervals[i]);
//        else
//            res.back().end = max(res.back().end, intervals[i].end);
//
//    return res;
//}
//
//bool canJump(vector<int>& nums) {
//
//    int reach = 0, n = nums.size();
//
//    for(int i = 0; i < n ; i++) {
//
//        if(i > reach || reach >= n - 1)
//            break;
//
//        reach = max(reach, i + nums[i]);
//
//    }
//
//    return reach >= n - 1;
//}
//
//vector<string> summaryRanges(vector<int>& nums) {
//
//    vector<string> res;
//
//    int start, i = 0, n = nums.size();
//
//    while(i < n) {
//
//        start = i;
//
//        while(i + 1 < n && nums[i + 1] == nums[i] + 1)
//            i++;
//
//        if(start == i)
//            res.push_back(to_string(nums[start]));
//        else
//            res.push_back(to_string(nums[start]) + "->" + to_string(nums[i]));
//
//        i++;
//    }
//
//    return res;
//}
//
//ListNode* deleteDuplicates(ListNode* head) {
//
//    ListNode *newhead = new ListNode(0);
//    newhead->next = head;
//
//    ListNode *prev = newhead;
//
//    while(prev->next) {
//
//        ListNode *curr = prev->next;
//        int x = curr->val;
//
//        while(curr->next && curr->next->val == x)
//            curr = curr->next;
//
//        if(prev->next != curr)
//            prev->next = curr->next;
//        else
//            prev = curr;
//    }
//
//    return newhead->next;
//}
//
//int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
//// find gas station with most deficit and start from next station
//
//    int sum = 0, n = gas.size(), start = 0, minSum = 0;
//
//    for(int i = 0; i < n; i++) {
//
//        sum += gas[i] - cost[i];
//
//        if(sum < minSum) {
//            minSum = sum;
//            start = i + 1;
//        }
//    }
//
//    return sum >= 0 ? start : -1;
//}
//
//int canCompleteCircuit2(vector<int>& gas, vector<int>& cost) {
//
////    as soon as gas is -ve, we know we cannot start from prev stations
////    start from next station with empty tank
//    int tank = 0, n = gas.size(), start = 0, total = 0;
//
//    for(int i = 0; i < n; i++) {
//
//        tank += gas[i] - cost[i];
//
//        total += tank;
//
//        if(tank < 0) {
//            tank = 0;
//            start = i + 1;
//        }
//    }
//
//    return total >= 0 ? start : -1;
//}
//
//int canCompleteCircuit3(vector<int>& gas, vector<int>& cost) {
////    since all stations are in circle, start from any station
////  start(including) and end(excluding)
////   go as far as you can reach
////    if sum < 0, start from prev station
////    since it is an array, to avoid using jump from last index to start index, we use start = n - 1
////    and end = 0
//
//    int n = gas.size(), start = n - 1, end = 0;
//    int sum = gas[start] - cost[start];
//
//    while(start > end) {
//
//        if(sum >= 0) {
//            sum += gas[end] - cost[end];
//            end++;
//        } else {
//            start--;
//            sum += gas[start] - cost[start];
//        }
//    }
//    return sum >= 0 ? start : -1;
//}
//
//int height(TreeNode *root) {
//    int h = -1;
//
//    while(root) {
//        root = root->left;
//        h++;
//    }
//
//    return h;
//}
//
//int countNodes(TreeNode* root) {
//// 222
//    int h = height(root);
//
//    return h <= 0 ? h + 1 :
//           height(root->right) == h - 1 ? ( 1 << h ) + countNodes(root->right) :
//           ( 1 << h - 1 ) + countNodes(root->left);
//}
//
//int countNodes2(TreeNode* root) {
//
//    int h = height(root), n = 0;
//
//    while(root) {
//
//        if(height(root->right) == h - 1) {
//            n += 1 << h;
//            root = root->right;
//        } else {
//            n += 1 << h - 1;
//            root = root->left;
//        }
//
//        h--;
//    }
//
//    return n;
//}
//
//int gcd(int a, int b) {
//
//    while(b) {
//        int t = b;
//        b = a % b;
//        a = t;
//    }
//
//    return a;
//}
//
//bool canMeasureWater(int x, int y, int z) {
////    365
//
//    if(x + y < z)
//        return false;
//
//    if(z == 0)
//        return true;
//
//    return z % gcd(x, y) == 0;
//}
//
//bool isOperator(string s) {
//    return s == "+" || s == "-" || s == "*" || s == "/";
//}
//
//int eval(int a, int b, char ch) {
//
//    switch(ch) {
//        case '+':
//            return a + b;
//        case '-':
//            return a - b;
//        case '*':
//            return a * b;
//        case '/':
//            return a / b;
//    }
//}
//
//int evalRPN(vector<string>& tokens) {
//
//    stack<int> st;
//
//    for(auto& s: tokens) {
//
//        if(isOperator(s)) {
//            int b = st.top(); st.pop();
//            int a = st.top(); st.pop();
//            st.push(eval(a, b, s[0]));
//        } else
//            st.push(atoi(s.c_str()));
//    }
//
//    return st.top();
//}
//
//TreeNode *copyTree(TreeNode* t) {
//
//    if(t == nullptr)
//        return nullptr;
//
//    TreeNode *root = new TreeNode(t->val);
//    root->left = copyTree(t->left);
//    root->right = copyTree(t->right);
//    return root;
//}
//
//TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
//
//    if(t1 == nullptr && t2 == nullptr)
//        return nullptr;
//
//    if(t1 == nullptr)
//        return t2;
//
//    if(t2 == nullptr)
//        return t1;
//
//    TreeNode *root = new TreeNode(t1->val + t2->val);
//    root->left = mergeTrees(t1->left, t2->left);
//    root->right = mergeTrees(t1->right, t2->right);
//
//    return root;
//}
//
//class StringIterator {
//    int n, pos;
//    char curr;
//    string s;
//public:
//    StringIterator(string compressedString) {
//        s = compressedString;
//        n = 0;
//        pos = 0;
//    }
//
//    char next() {
//
//        if(!hasNext())
//            return ' ';
//
//        if(n == 0) {
//            curr = s[pos++];
//
//            while(pos < s.size() && isdigit(s[pos]))
//                n = n *10 + s[pos++] - '0';
//        }
//
//        n--;
//        return curr;
//    }
//
//    bool hasNext() {
//        return n || pos < s.size();
//    }
//};
//
//int triangleNumber(vector<int>& nums) {
//
//    int res = 0, n = nums.size();
//    sort(nums.begin(), nums.end());
//
//    for(int k = n - 1; k > 1; k--) {
//
//        int i = 0, j = k - 1;
//
//        while(i < j) {
//
//            if(nums[i] + nums[j] > nums[k]) {
//                res += j - i;
//                j--;
//            } else
//                i++;
//        }
//    }
//
//    return res;
//}
//
//string addBoldTag(string s, vector<string>& dict) {
//
//    int n = s.size();
//    bool bold[n] = {0};
//
//    sort(dict.begin(), dict.end(), [](string& a, string& b){
//        return a.size() > b.size();
//    });
//
//    for(int i = 0, end = 0; i < n; i++) {
//
//        for(auto& word: dict)
//            if(s.substr(i, word.size()) == word) {
//                end = max(end, (int)( i + word.size() ));
//                break;
//            }
//
//        bold[i] = end > i;
//    }
//
//    string res = "";
//
//    for(int i = 0; i < n; i++) {
//
//        if(!bold[i])
//            res += s[i];
//
//        else {
//
//            int j = i;
//            while(j + 1 < n && bold[j + 1]) j++;
//
//            res += "<b>" + s.substr(i, j - i + 1) + "</b>";
//
//            i = j;
//        }
//    }
//
//    return res;
//}
//
//
//string addBoldTag2(string s, vector<string>& dict) {
//
//    int n = s.size();
//
//    vector<pair<int, int>> d[128];
//
//    for(int i = 0; i < dict.size(); i++)
//        d[dict[i][0]].emplace_back(dict[i].size(), i);
//
//    for(int i = 0; i < 128; i++)
//        if(!d[i].empty())
//            sort(d[i].begin(), d[i].end(), greater<pair<int, int>>());
//
//    int start = 0;
//    string res;
//
//    for(int i = 0, end = -1; i < n; i++) {
//
//        for(auto& p: d[s[i]])
//            if(s.substr(i, p.first) == dict[p.second]) {
//                end = max(end, (int)( i + p.first));
//                break;
//            }
//
//        if(end > i)
//            continue;
//
//        if(end == i)
//            res += "<b>" + s.substr(start, end - start) + "</b>";
//
//        res += s[i];
//        start = i + 1;
//    }
//
//    if(start < n)
//        res += "<b>" + s.substr(start) + "</b>";
//
//    return res;
//}
//
//string addBoldTag3(string s, vector<string>& dict) {
//
//    int n = s.size();
//    bool e[n] = {0};
//
//    for(auto& word: dict) {
//
//        int p = -1;
//
//        while(true) {
//
//            p = s.find(word, p + 1);
//
//            if(p == string::npos)
//                break;
//
//            for(int i = 0; i < word.size(); i++)
//                e[p + i] = true;
//        }
//    }
//
//    ostringstream ss;
//
//    bool b = false;
//
//    for(int i = 0; i < n; i++) {
//
//        if(!b && e[i])
//            ss << "<b>";
//        else if(b && !e[i])
//            ss << "</b>";
//
//        ss << s[i];
//        b = e[i];
//    }
//
//    if(b)
//        ss << "</b>";
//
//    return ss.str();
//}
//
//vector<int> majorityElement2(vector<int>& nums) {
//
//    int n = nums.size();
//    int count1 = 0, count2 = 0, x = 0, y = 1;
//    vector<int> res;
//
//    for(int a: nums)
//
//        if(a == x)
//            count1 += 1;
//        else if(a == y)
//            count2 += 1;
//        else if(count1 == 0) {
//            x = a;
//            count1 = 1;
//        }
//        else if(count2 == 0) {
//            y = a;
//            count2 = 1;
//        }
//        else {
//            count1 -= 1;
//            count2 -= 1;
//        }
//
//    if(3 * count(nums.begin(), nums.end(), x) > n)
//        res.push_back(x);
//
//    if(3 * count(nums.begin(), nums.end(), y) > n)
//        res.push_back(y);
//
//    return res;
//}
//
//int majorityElement(vector<int>& nums) {
//
//    int count = 1, x = nums[0];
//
//    for(int i = 1; i < nums.size(); i++)
//
//        if(!count) {
//            count = 1;
//            x = nums[i];
//        } else
//            count += nums[i] == x ? 1 : -1;
//
//    return x;
//}
//
//int main() {
//
////    vector<int> nums = {3};
////    cout << superPow(2, nums);
////        vector<vector<int>> triangle = {
////            {-10}
////            {3,4},
////            {6,5,7},
////            {4,1,8,3}
////        };
//
////        cout << minimumTotal(triangle);
//
////    vector<vector<int>> matrix = {{0,1,0,1,1},{1,1,0,0,1},{0,0,0,1,0},{1,0,1,1,1},{1,0,0,0,1}};
////    updateMatrix(matrix);
//
////    vector<int> nums = {2,2,2,0,2,2};
////    cout << search2(nums, 0);
//
////    vector<int> A = {4, 3, 2, 6};
////    cout << maxRotateFunction(A);
//
////    ListNode *head = new ListNode(2);
////    head->next = new ListNode(1);
////    head = partition(head, 2);
////
////    printList(head);
//
////    vector<int> nums = {1, 2, 2};
////    permuteUnique2(nums);
//
////    vector<int> inorder = {2, 1};
////    vector<int> postorder = {2, 1};
////    buildTree2(inorder, postorder);
//
////    vector<int> inorder = {1, 2};
////    vector<int> preorder = {1, 2};
////    buildTreePre2(preorder, inorder);
//
////    vector<pair<int, int>> edges = { make_pair(1, 0)};
//////    cout << canFinish(2, edges);
////    findOrder(2, edges);
//
////    ListNode *head = new ListNode(1);
////    head->next = new ListNode(2);
////    head->next->next = new ListNode(3);
////    head->next->next->next = new ListNode(4);
////    head->next->next->next->next = new ListNode(5);
////    head->next->next->next->next->next = new ListNode(6);
////    head->next->next->next->next->next->next = new ListNode(7);
////    reverseBetween(head, 2, 6);
//
////    cout << findSubstringInWraproundString("a");
//
////    vector<int> nums = {3};
////    cout << minSubArrayLen2(3, nums);
//
////    vector<int> gas = {2, 3, 1};
////    vector<int> cost = {3, 1, 2};
////    cout << canCompleteCircuit3(gas, cost);
//
////    TreeNode *root = new TreeNode(1);
////    root->left = new TreeNode(2);
////    root->right = new TreeNode(3);
////    cout << countNodes(root);
//
////    StringIterator iterator("L1e2t1C1o1d1e1");
////    cout << iterator.next() << endl; // return 'L'
////    cout << iterator.next() << endl; // return 'e'
////    cout << iterator.next() << endl; // return 'e'
////    cout << iterator.next() << endl; // return 't'
////    cout << iterator.next() << endl; // return 'C'
////    cout << iterator.next() << endl; // return 'o'
////    cout << iterator.next() << endl; // return 'd'
////    cout << iterator.hasNext() << endl; // return true
////    cout << iterator.next() << endl; // return 'e'
////    cout << iterator.hasNext() << endl; // return false
////    cout << iterator.next() << endl; // return ' '
//
////    vector<int> nums = {2, 2, 3, 4};
////    cout << triangleNumber(nums);
//
////    vector<string> dict = {"aaa","aab","bc"};
////    cout << addBoldTag3("aaabbcc", dict);
//
//    vector<int> nums = {};
//    majorityElement2(nums);
//    return 0;
//}
