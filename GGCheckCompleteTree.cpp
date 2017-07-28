////
//// Created by jeevan on 2/25/17.
////
//#include <iostream>
//#include <string>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//class Node {
//public:
//    int data;
//    Node *left, *right;
//    Node(int data): data(data) {}
//
//    void insertLeft(Node *node) {left = node;}
//    void insertRight(Node *node) {right = node;}
//};
//
//bool check(Node* root) {
//
//    if(!root)
//        return true;
//
//    queue<Node*> myqueue;
//    myqueue.push(root);
//
//    while(!myqueue.empty()) {
//
//        Node *node = myqueue.front();
//        myqueue.pop();
//
//        if(node->left == nullptr)
//        {
//            if(node->right != nullptr)
//                return false;
//            break;
//        }
//
//        myqueue.push(node->left);
//
//        if(node->right == nullptr)
//            break;
//
//        myqueue.push(node->right);
//
//    }
//
//
//    while(!myqueue.empty()) {
//        Node *node = myqueue.front();
//        myqueue.pop();
//
//        if(node->left || node->right)
//            return false;
//    }
//
//    return true;
//}
//
//int main() {
//
//    Node *root = new Node(1);
//    root->left = new Node(2);
//    root->right = new Node(3);
////    root->left->left = new Node(4);
////    root->left->right = new Node(4);
//
//    root->right->left = new Node(5);
//    root->right->right = new Node(6);
//
//
//    cout << boolalpha;
//    cout << check(root);
//
//
//    return 0;
//}
