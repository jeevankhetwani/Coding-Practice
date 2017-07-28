////
//// Created by jeevan on 3/26/17.
////
//#include<bits/stdc++.h>
//using namespace std;
//
//// Structure for a binary tree node
//struct Node
//{
//    int data;
//    Node *left, *right;
//};
//
//// A utility function to create a new node
//Node* newNode(int d)
//{
//    Node* node = new Node;
//    node->data = d;
//    node->left = node->right = NULL;
//    return node;
//}
//
//long long findSum(Node *root, long long int sum_so_far) {
//
//    if(root == nullptr)
//        return 0;
//
//    sum_so_far = sum_so_far * 10 + root->data;
//
//    if( root->left == nullptr && root->right == nullptr )
//        return sum_so_far;
//
//
//    return findSum(root->left, sum_so_far) + findSum(root->right, sum_so_far);
//
//}
//
//long long treePathsSum(Node *root)
//{
//    //Your code here
//
//    return findSum(root, 0);
//}
//
//
//// Driver program to test above functions
//int main()
//{
//    Node *root = newNode(1);
//    root->right = newNode(2);
//    root->right->right = newNode(4);
//    root->right->right->right = newNode(5);
//    root->right->right->right->right = newNode(6);
//    root->right->right->right->right->right = newNode(7);
//    root->right->right->right->right->right->left = newNode(8);
//
//    cout << treePathsSum(root);
//
//    return 0;
//}
//
