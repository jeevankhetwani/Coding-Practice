////
//// Created by jeevan on 4/12/17.
////
//#include <iostream>
//using namespace std;
//
//class Node {
//public:
//    int data;
//    Node *left, *right;
//
//    Node(int d): data(d), left(nullptr), right(nullptr) {}
//};
//
//int findSum(Node *root, int prefix = 0) {
//
//    if(root == nullptr)
//        return 0;
//
//    prefix = prefix * 10 + root->data;
//
//    if(root->left == nullptr && root->right == nullptr)
//        return prefix;
//
//    return findSum(root->left, prefix) + findSum(root->right, prefix);
//}
//
//int main() {
//
//    Node *root = new Node(6);
//    root->left        = new Node(3);
//    root->right       = new Node(5);
//    root->left->left  = new Node(2);
//    root->left->right = new Node(5);
//    root->right->right = new Node(4);
//    root->left->right->left = new Node(7);
//    root->left->right->right = new Node(4);
//    printf("Sum of all paths is %d", findSum(root));
//
//    return 0;
//}
//
