////
//// Created by jeevan on 4/11/17.
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
//void inorder(Node *root) {
//    if(root) {
//        inorder(root->left);
//        cout << root->data << " ";
//        inorder(root->right);
//    }
//}
//
//Node* copy(Node *root) {
//
//    if(root == nullptr)
//        return nullptr;
//
//    Node *node = new Node(root->data);
//    node->left = copy(root->left);
//    node->right = copy(root->right);
//    return node;
//}
//
//int main() {
//
//    Node *root = new Node(5);
//    root->left = new Node(3);
//    root->left->left = new Node(1);
//    root->left->right = new Node(4);
//    root->right = new Node(6);
//    root->right->right = new Node(7);
//
//    Node *root1 = copy(root);
//
//    root->data = 4;
//    inorder(root);
//    cout << endl;
//
//    inorder(root1);
//
//    return 0;
//}
//
