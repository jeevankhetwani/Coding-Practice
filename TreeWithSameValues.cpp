////
//// Created by jeevan on 3/10/17.
////
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int count = 0;
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
//bool check(Node *root) {
//    if(root->left == nullptr && root->right == nullptr) {
//        count++;
//        return true;
//    }
//
//    bool left = check(root->left);
//    bool right = check(root->right);
//
//    if(left && right && root->data == root->left->data && root->data == root->right->data) {
//        count++;
//        return true;
//    }
//
//    return false;
//
//}
//
//int main() {
//
//    struct Node* root = new Node(5);
//    root->left = new Node(5);
//    root->left->left = new Node(5);
//    root->left->right = new Node(5);
//
//    root->right = new Node(8);
//    root->right->left = new Node(6);
//    root->right->right = new Node(6);
////    root->left->left = new Node(4);
////    root->left->right = new Node(5);
////    root->right->left = new Node(6);
////    root->right->right = new Node(7);
////    root->left->left->left = new Node(8);
////    root->left->right->right = new Node(9);
////    root->right->right->left = new Node(10);
//
//    check(root);
//    cout << count;
//
//}
//
