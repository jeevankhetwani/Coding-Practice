////
//// Created by jeevan on 12/28/16.
////
//#include <iostream>
//#include <stack>
//#include <string>
//#include "TreeNode.h"
//using namespace std;
//
//bool compare(TreeNode* t1, TreeNode* t2) {
//
//    if (t2 == nullptr)
//        return true;
//
//    if ( t1 == nullptr || t1->data != t2->data )
//        return false;
//
//    return compare(t1->left, t2->left) && compare(t1->right, t2->right);
//
//}
//
//
//bool isSubtreeHelper(TreeNode* t1, TreeNode* t2) {
//
//    if (t1 == nullptr)
//        return false;
//
//    if(compare(t1, t2))
//        return true;
//
//    return isSubtreeHelper(t1->left, t2) || isSubtreeHelper(t1->right, t2);
//}
//
//bool isSubtree(TreeNode* t1, TreeNode* t2) {
//
//    if (t2 == nullptr)
//        return true;
//
//    return isSubtreeHelper(t1, t2);
//}
//
//string preorder(TreeNode* root) {
//    stack<TreeNode*> st;
//    string s = "";
//
//    while( root != nullptr ) {
//        st.push(root);
//        s += to_string(root->data);
//        root = root->left;
//    }
//
//    s += "n";
//
//    while(!st.empty()) {
//
//        root = st.top();
//        st.pop();
//
//        if (root->right != nullptr) {
//            root = root->right;
//
//            while (root != nullptr) {
//                st.push(root);
//                s += to_string(root->data);
//                root = root->left;
//            }
//            s += "n";
//
//        } else
//            s += "n";
//    }
//
//    return s;
//}
//
//
//string inorder(TreeNode* root) {
//    stack<TreeNode*> st;
//    string s = "";
//
//    while(root != nullptr) {
//        st.push(root);
//        root = root->left;
//    }
//
//    while(!st.empty()) {
//        root = st.top();
//        st.pop();
//
//        s += to_string(root->data);
//
//        if(root->right != nullptr) {
//            root = root->right;
//
//            while(root != nullptr) {
//                st.push(root);
//                root = root->left;
//            }
//        }
//    }
//
//
//    return s;
//
//
//}
//
//
//
////using preorder traversal
//bool isSubtree2(TreeNode* t1, TreeNode* t2) {
//    string t1String = preorder(t1);
//    string t2String = preorder(t2);
//
//    cout << t1String << endl;
//    cout << t2String<< endl;
//
//    return t1String.find(t2String) != string::npos;
//}
//
//
//int main() {
//
//    TreeNode* t1 = new TreeNode(6);
//    t1->left = new TreeNode(6);
//    t1->left->left = new TreeNode(6);
//    t1->left->right = new TreeNode(6);
//    t1->left->right->right = new TreeNode(6);
//
//    t1->right = new TreeNode(6);
//    t1->right->left = new TreeNode(6);
//    t1->right->right = new TreeNode(6);
//
//    TreeNode* t2 = new TreeNode(6);
//    t2->left = new TreeNode(6);
//    t2->left->left = new TreeNode(6);
//
//    cout << boolalpha;
////    cout << isSubtree(t1, t2);
//
//    cout << isSubtree2(t1, t2);
//
//    return 0;
//}
//
//
//
//
//
//
//
//
//
//// bad inorder
////    while( !st.empty() || root!= nullptr ) {
////
////        st.push(root);
////        s += to_string(root->data);
////
////        while(root->left != nullptr) {
////            root = root->left;
////            st.push(root);
////            s += to_string(root->data);
////        }
////
////        while(!st.empty() && st.top()->right == nullptr)
////            st.pop();
////
////        if (!st.empty()) {
////            root = st.top()->right;
////            st.pop();
////        } else
////            root = nullptr;
////    }
