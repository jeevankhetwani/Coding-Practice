////
//// Created by jeevan on 2/26/17.
////
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int a[100], n = 0, index = 0;
//
//class Node {
//public:
//    int data;
//    Node *left, *right;
//    Node(int data): data(data) {}
//};
//
//void inorderSave(Node *root) {
//
//    if(root != nullptr) {
//        inorderSave(root->left);
//        a[n++] = root->data;
//        inorderSave(root->right);
//    }
//
//}
//
//void inorder(Node *root) {
//
//    if(root != nullptr) {
//        inorder(root->left);
//        cout << root->data << " ";
//        inorder(root->right);
//    }
//
//}
//
//
//void convert(Node *root) {
//
//    if(root != nullptr) {
//        convert(root->left);
//        root->data = a[index++];
//        convert(root->right);
//    }
//
//}
//
//int main() {
//
//    Node *root = new Node(10);
//    root->left = new Node(2);
//    root->left->left = new Node(8);
//    root->left->right = new Node(4);
//    root->right = new Node(7);
//
//    inorderSave(root);
//    sort(a, a + n);
//    convert(root);
//    inorder(root);
//
//    return 0;
//}
