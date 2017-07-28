////
//// Created by jeevan on 5/21/17.
////
//#include <iostream>
//#include <vector>
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
//Node *lca(Node *root, int n1, int n2) {
////    fails whn only one node is present
//    if(root == nullptr)
//        return nullptr;
//
//    if(root->data == n1 || root->data == n2)
//        return root;
//
//    Node *left = lca(root->left, n1, n2);
//    Node *right = lca(root->right, n1, n2);
//
//    if(left && right)
//        return root;
//
//    return left ? left : right;
//}
//
//Node *lca2Util(Node *root, int n1, int n2, bool &v1, bool &v2) {
////    works also whn only one node is present
//    if(root == nullptr)
//        return nullptr;
//
//    if(root->data == n1) {
//        v1 = true;
//        return root;
//    }
//
//    if(root->data == n2) {
//        v2 = true;
//        return root;
//    }
//
//    Node *left = lca2Util(root->left, n1, n2, v1, v2);
//    Node *right = lca2Util(root->right, n1, n2, v1, v2);
//
//    if(left && right)
//        return root;
//
//    return left ? left : right;
//}
//
//bool findNode(Node *root, int n) {
//
//    if(root == nullptr)
//        return false;
//
//    return (root->data == n || findNode(root->left, n) || findNode(root->right, n));
//}
//
//Node* lca2(Node *root, int n1, int n2) {
//
//    bool v1 = false, v2 = false;
//
//    Node *ances = lca2Util(root, n1, n2, v1, v2);
//
//    if(v1 && v2 || v1 && findNode(root, n2) || v2 && findNode(root, n1))
//        return ances;
//
//    return nullptr;
//}
//
//int  main() {
//
//    Node *root = new Node(1);
//    root->left = new Node(2);
//    root->right = new Node(3);
//    root->left->left = new Node(4);
//    root->left->right = new Node(5);
//    root->right->left = new Node(6);
//    root->right->right = new Node(7);
//    Node *ances =  lca2(root, 2, 10);
//
//    if(ances)
//        cout << ances->data;
//    else
//        cout << "not presetn";
//
//    return 0;
//}
