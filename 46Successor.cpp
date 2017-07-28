////
//// Created by jeevan on 12/27/16.
////
//#include<iostream>
//#include <vector>
//
//using namespace std;
//
//class TreeNode {
//public:
//    int data;
//    TreeNode *left, *right, *parent;
//
//
//    TreeNode(int d) {
//        data = d;
//        left = right = nullptr;
//    }
//
//    TreeNode(int d, TreeNode* p) {
//        data = d;
//        parent = p;
//        left = right = nullptr;
//    }
//};
//
//bool isLeftChild(TreeNode* par,TreeNode* child) {
//    return par->left == child;
//}
//
//TreeNode* successor(TreeNode* root) {
//    TreeNode *par, *child;
//    if(root == nullptr)
//        return nullptr;
//
//    if (root->right == nullptr) {
//        par = root->parent;
//        child = root;
//        while( par != nullptr && !isLeftChild(par, child) ) {
//            child = par;
//            par = child->parent;
//        }
//        return par;
//    }
//
//
//    child = root->right;
//    while(child->left!= nullptr)
//        child = child->left;
//
//    return child;
//}
//
//bool find(TreeNode* root, int a) {
//
//    if (root == nullptr)
//        return false;
//
//    if(root->data == a)
//        return true;
//
//    return ( find(root->left, a) || find(root->right, a));
//
//}
//
//TreeNode* commonAncestor1(TreeNode* root, int a, int b) {
//    string subtreeA, subtreeB;
//    subtreeA = find(root->left, a) ? "LEFT" : "RIGHT";
//    subtreeB = find(root->left, b) ? "LEFT" : "RIGHT";
//
//    if (subtreeA != subtreeB)
//        return root;
//
//    if (subtreeA == "LEFT")
//        if ( root->left->data == a || root->left->data == b )
//            return root;
//        else
//            return commonAncestor1(root->left, a, b);
//
//    if (root->right->data == a || root->right->data == b)
//        return root;
//    else
//        return commonAncestor1(root->right, a, b);
//}
//
////TreeNode* commonAncestor2(TreeNode* root, TreeNode* p, TreeNode* q) {
////    if(root == nullptr)
////        return nullptr;
////}
//
//vector<>
//
//int main() {
//    TreeNode* ances;
//    TreeNode* root = new TreeNode(6, nullptr);
//    root->left = new TreeNode(3, root);
//    root->left->left = new TreeNode(2, root->left);
//    root->left->right = new TreeNode(4, root->left);
//    root->left->right->right = new TreeNode(5, root->left);
//
//    root->right = new TreeNode(8, root);
//    root->right->left = new TreeNode(7, root->right);
//    root->right->right = new TreeNode(9, root->right);
//
////    if( succ = successor(root) )
////        cout << succ->data;
////    else
////        cout << "NUll";
//
//    if( ances = commonAncestor1(root, 5, 3) )
//        cout << ances->data;
//    else
//        cout << "NUll";
//
//    return 0;
//
//}
