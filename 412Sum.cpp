////
//// Created by jeevan on 12/30/16.
////
//#include <iostream>
//#include <unordered_map>
//
//using namespace std;
//
//class TreeNode {
//
//public:
//    int data;
//    TreeNode *left, *right;
//
//    TreeNode(int d) {
//        data = d;
//        left = right = nullptr;
//    }
//};
//
//int cnt = 0;
//unordered_map<int, int> mymap;
//
//
//void findPathHelper(TreeNode* root, int k, int rs) {
//    if (root == nullptr)
//        return;
//
//    int rsnew = rs + root->data;
//
//    if ( mymap.find(rsnew - k) != mymap.end() && mymap[rsnew - k] != 0)
//        cnt++;
//
//    if (mymap.find(rsnew) == mymap.end())
//        mymap[rsnew] = 1;
//    else
//        mymap[rsnew] += 1;
//
//    findPathHelper(root->left, k, rsnew);
//    findPathHelper(root->right, k, rsnew);
//
//    mymap[rsnew] -= 1;
//}
//
//void findPath(TreeNode* root, int k) {
//    mymap[0] = 1;
//    findPathHelper(root, k, 0);
//}
//
//int main() {
//    TreeNode* root = new TreeNode(5);
//    root->left = new TreeNode(3);
//    root->left->left = new TreeNode(4);
//    root->left->right = new TreeNode(-1);
//
//    root->right = new TreeNode(2);
//    root->right->right = new TreeNode(7);
//    root->right->left = new TreeNode(7);
//    findPath(root, 7);
//    cout << cnt;
//
//    return 0;
//}
//
//
//
//
