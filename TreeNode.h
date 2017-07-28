//
// Created by jeevan on 12/27/16.
//

#ifndef TEST1_TREENODE_H
#define TEST1_TREENODE_H

////
//// Created by jeevan on 12/27/16.
////
#include<iostream>
#include<vector>
#include<algorithm>
#include <climits>

class TreeNode {
public:
     int data;
    TreeNode *left, *right;

    TreeNode(int d) {
        data = d;
        left = right = nullptr;
    }
};
//
//TreeNode* createBST(int *a, int m, int n) {
//    if (m > n)
//        return nullptr;
//
//    int middle = ( m + n ) / 2;
//    TreeNode *newNode = new TreeNode(a[middle]);
//    newNode->left = createBST(a, m, middle - 1);
//    newNode->right = createBST(a, middle + 1, n);
//}
//
//void display(TreeNode* root) {
//    if(root == nullptr)
//        return;
//    display(root->left);
//    std::cout << root->data << " ";
//    display(root->right);
//}
//
//
//int getHeightDiff(TreeNode* root, int h) {
//    if (root == nullptr)
//        return h;
//
//    int left = getHeightDiff(root->left, h+1);
//    if (left == -1)
//        return -1;
//
//    int right = getHeightDiff(root->right, h+1);
//    if (right == -1)
//        return -1;
//
//    if (abs(left - right) > 1)
//    return -1;
//
//    return std::max(left, right);
//
//}
//
//bool isBalanced(TreeNode* root) {
//    return getHeightDiff(root, 0) != -1;
//}
//
//bool checkRange(TreeNode* root, int min, int max) {
//    if (root == nullptr)
//        return true;
//
//    if ( root->data <= min || root->data > max)
//        return false;
//
//    return ( checkRange(root->left, min, root->data) && checkRange(root->right, root->data, max));
//
//}
//
//bool checkBST(TreeNode* root) {
//    return checkRange(root, INT_MIN, INT_MAX);
//}


#endif //TEST1_TREENODE_H
