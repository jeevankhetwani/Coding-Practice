////
//// Created by jeevan on 3/19/17.
////
//#include <iostream>
//using namespace std;
//
//class Node {
//public:
//    int data;
//    Node *left, *right;
//
//    Node(int d) : data(d) {}
//};
//
//int find(Node *root, int k, int &minDiff, int &minKey) {
//
//    if(root == nullptr)
//        return minKey;
//
//    int currDiff = abs(root->data - k);
//
////    if( minDiff <= currDiff )
////        return minKey;
//
//    if(root->data == k)
//        return root->data;
//
//    if(currDiff < minDiff) {
//        minKey = root->data;
//        minDiff = currDiff;
//    }
//
//    if(root->data < k)
//        return find(root->right, k, minDiff, minKey);
//    else
//        return find(root->left, k, minDiff, minKey);
//
//}
//
//int find(Node *root, int k) {
//
//    int minKey = -1, minDiff = INT32_MAX;
//    return find(root, k, minDiff, minKey);
//}
//
//int main() {
//
//
//    Node *root = new Node(9);
//    root->left    = new Node(4);
//    root->right   = new Node(17);
//    root->left->left = new Node(3);
//    root->left->right = new Node(6);
//    root->left->right->left = new Node(5);
//    root->left->right->right = new Node(7);
//    root->right->right = new Node(22);
//    root->right->right->left = new Node(20);
//
//    int k = 4;
//    cout << find(root, k);
//    return 0;
//}
