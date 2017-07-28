////
//// Created by jeevan on 3/10/17.
////
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Node
//{
//public:
//    int data;
//    struct Node *left, *right;
//
//    Node(int d) : data(d) {}
//};
//
//bool check(Node *root, int key) {
//    if(root == nullptr)
//        return true;
//
//    if(root->data != key)
//        return false;
//
//    return check(root->left, key) && check(root->right, key);
//
//}
//
//int main() {
//
//    struct Node* root = new Node(6);
//    root->left = new Node(6);
//    root->right = new Node(6);
//    root->left->left = new Node(4);
////    root->left->right = new Node(5);
////    root->right->left = new Node(6);
////    root->right->right = new Node(7);
////    root->left->left->left = new Node(8);
////    root->left->right->right = new Node(9);
////    root->right->right->left = new Node(10);
//
//    cout << boolalpha;
//    cout << check(root, 6);
//
//}
