////
//// Created by jeevan on 5/5/17.
////
//#include <iostream>
//#include <queue>
//#include <unordered_set>
//#include <unordered_map>
//#include <typeinfo>
//#include "TreeNode.h"
//
//using namespace std;
//
//
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//int findBottomLeftValue(TreeNode* root) {
//    int left = root->val;
//    queue<TreeNode*> myqueue;
//    myqueue.push(root);
//    myqueue.push(nullptr);
//
//    while(!myqueue.empty()) {
//        TreeNode* node = myqueue.front();
//        myqueue.pop();
//
//        if(node) {
//            if(node->left)
//                myqueue.push(node->left);
//            if(node->right)
//                myqueue.push(node->right);
//        } else if(!myqueue.empty()) {
//            left = myqueue.front()->val;
//            myqueue.push(nullptr);
//        }
//    }
//
//    return left;
//}
//
//int findBottomLeftValueOp(TreeNode* root) {
//    queue<TreeNode*> myqueue;
//    myqueue.push(root);
//
//    while(!myqueue.empty()) {
//        root = myqueue.front();
//        myqueue.pop();
//
//        if(root->right)
//            myqueue.push(root->right);
//
//
//        if(root->left)
//            myqueue.push(root->left);
//
//    }
//    return root->val;
//}
//
//int findFrequentTreeSumHelper(TreeNode* root, unordered_map<int, int>& freqMap, int& freqMax) {
//
//    if(!root)
//        return 0;
//
//    int sum = root->val;
//    sum += findFrequentTreeSumHelper(root->left, freqMap, freqMax);
//    sum += findFrequentTreeSumHelper(root->right, freqMap, freqMax);
//
//    freqMax = max(freqMax, ++freqMap[sum]);
//
//    return sum;
//}
//
//int minMoves2(vector<int>& nums) {
//// median minimizes the sum of absolute deviations
//    int moves = 0;
//    sort(nums.begin(), nums.end());
//
//    int i = 0, j = nums.size() - 1;
//
//    while(i < j) {
//        moves += nums[j] - nums[i];
//        i++;
//        j--;
//    }
//    return moves;
//
//}
//
////int checkMines(vector<vector<char>>& board, int r, int c) {
////// see solution in leet code
////    return     ( r != 0 && c != 0 && board[r - 1][c - 1] == 'M')
////             + ( r != 0 && board[r - 1][c] == 'M' )
////             + ( r != 0 &&  ( c != board[0].size() - 1 ) && board[r - 1][c + 1] == 'M')
////
////             + ( c != 0 && board[r][c - 1] == 'M' )
////             + ( ( c != board[0].size() - 1 ) && board[r][c + 1] == 'M')
////
////             + ( c != 0 && ( r != board.size() - 1 ) && board[r + 1][c - 1] == 'M' )
////               + ( ( r != board.size() - 1 ) && board[r + 1][c] == 'M')
////               + ( ( r != board.size() - 1 ) && ( c != board[0].size() - 1 ) && board[r + 1][c + 1] == 'M' );
////}
////
////void updateBoardHelper(vector<vector<char>>& board, int r, int c);
////
////void checkAdjacent(vector<vector<char>>& board, int r, int c) {
////
////    updateBoardHelper(board, r - 1, c - 1);
////    updateBoardHelper(board, r - 1, c);
////    updateBoardHelper(board, r - 1, c + 1);
////
////    updateBoardHelper(board, r, c - 1);
////    updateBoardHelper(board, r, c + 1);
////
////
////    updateBoardHelper(board, r + 1, c - 1);
////    updateBoardHelper(board, r + 1, c);
////    updateBoardHelper(board, r + 1, c + 1);
////
////}
////
////void updateBoardHelper(vector<vector<char>>& board, int r, int c) {
////
////    if(r < 0 || r == board.size() || c < 0 || c == board[0].size())
////        return;
////
////    if(board[r][c] != 'M' && board[r][c] != 'E')
////        return;
////
////    if(board[r][c] == 'M') {
////        board[r][c] = 'X';
////        return;
////    }
////
////    int mines = checkMines(board, r, c);
////
////    if(mines == 0) {
////        board[r][c] = 'B';
////        checkAdjacent(board, r, c);
////        return;
////    }
////
////    board[r][c] = mines + '0';
////}
////
////vector<vector<char>> updateBoard(vector<vector<char>>& board, vector<int>& click) {
////    updateBoardHelper(board, click[0], click[1]);
////    return board;
////}
//
//void visit(vector<vector<int>>& M, vector<bool>& visited, int node) {
//
//    queue<int> myqueue;
//
//    visited[node] = true;
//    myqueue.push(node);
//
//    while(!myqueue.empty()) {
//        node = myqueue.front();
//        myqueue.pop();
//
//        for(int j = 0; j < M[node].size(); j++)
//            if(M[node][j] && !visited[j]) {
//                visited[j] = true;
//                myqueue.push(j);
//            }
//    }
//}
//
//int findCircleNum(vector<vector<int>>& M) {
//
//    int n = M.size(), count = 0;
//    vector<bool> visited(n, false);
//
//    for(int i = 0; i < n; i++)
//        if(!visited[i]) {
//            count++;
//            visit(M, visited, i);
//        }
//
//    return count;
//
//}
//
//vector<int> findFrequentTreeSum(TreeNode* root) {
//    int freqMax = 0;
//    vector<int> v;
//    unordered_map<int, int> freqMap;
//    findFrequentTreeSumHelper(root, freqMap, freqMax);
//
//    for(auto it = freqMap.begin(); it != freqMap.end(); ++it)
//        if((*it).second == freqMax)
//            v.push_back((*it).first);
//
//    return v;
//}
//
//vector<int> largestValues(TreeNode* root) {
//
//    int mymax = INT32_MIN;
//    vector<int> ans;
//    queue<TreeNode*> myqueue;
//
//    if(!root)
//        return ans;
//
//    myqueue.push(root);
//    myqueue.push(nullptr);
//
//    while(!myqueue.empty()) {
//
//        TreeNode* front = myqueue.front();
//        myqueue.pop();
//
//        if(front) {
//            mymax = max(mymax, front->val);
//
//            if(front->left)
//                myqueue.push(front->left);
//
//            if(front->right)
//                myqueue.push(front->right);
//
//        } else {
//
//            ans.push_back(mymax);
//            mymax = INT32_MIN;
//
//            if(!myqueue.empty())
//                myqueue.push(nullptr);
//        }
//    }
//
//    return ans;
//
//}
//
//int main() {
//
////    TreeNode *root = new TreeNode(2);
////    root->left = new TreeNode(1);
////    root->right = new TreeNode(3);
////    cout << findBottomLeftValueOp(root);
//
////    const int i = 3;
////    auto x = i;
////    cout << typeid(x).name();
////    x = 4;
//
////    vector<int> a = {1,  0, 0, 8, 6};
////    cout << minMoves2(a);
//
////    vector<vector<char>> board = { {'E', 'E', 'E', 'E', 'E'},
////                                   {'E', 'E', 'M', 'E', 'E'},
////                                   {'E', 'E', 'E', 'E', 'E'},
////                                   {'E', 'E', 'E', 'E', 'E'}
////                                };
////
////    vector<int> click = {3, 0};
////    updateBoard(board, click);
////
////    for(auto a: board) {
////        for (auto ch: a)
////            cout << ch << " ";
////        cout << endl;
////    }
//    int x = 4;
//    int *p;
//    int *k = p + 1;
//    cout << k - p;
//    return 0;
//}
