////
//// Created by jeevan on 4/15/17.
////
//#include <iostream>
//using namespace std;
//
//class Node {
//public:
//    int data;
//    Node *left, *right;
//
//    Node(int d) : data(d), left(nullptr), right(nullptr) {}
//};
//
//int count(Node *root) {
//
//    if(root == nullptr)
//        return 1;
//
//    if(root->left == nullptr && root->right == nullptr)
//        return 0;
//
//    return count(root->left) + count(root->right);
//}
//
//int main() {
//
//    Node *root = new Node(2);
//    root->left    = new Node(7);
//    root->right   = new Node(5);
//    root->left->right = new Node(6);
//    root->left->right->left = new Node(1);
//    root->left->right->right = new Node(11);
//    root->right->right = new Node(9);
//    root->right->right->left = new Node(4);
//
//    cout << count(root);
//
//
//
//    return 0;
//}
