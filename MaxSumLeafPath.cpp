////
//// Created by jeevan on 4/16/17.
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
//bool printPath(Node *root, Node *leaf) {
//    if(root == nullptr)
//        return false;
//
//    if(root == leaf || printPath(root->left, leaf) || printPath(root->right, leaf)) {
//        cout << root->data << " ";
//        return true;
//    }
//
//    return false;
//}
//
//void findLeaf(Node *root, int currSum, int& maxSum, Node **leaf) {
//
//    if(root == nullptr)
//        return;
//
//    currSum += root->data;
//
//    if(root->left == nullptr && root->right == nullptr) {
//        if(currSum > maxSum) {
//            maxSum = currSum;
//            *leaf = root;
//        }
//
//        return;
//    }
//
//    findLeaf(root->left, currSum, maxSum, leaf);
//    findLeaf(root->right, currSum, maxSum, leaf);
//
//}
//
//void maxPath(Node *root) {
//
//    if(root == nullptr)
//        return;
//
//    Node *leaf;
//    int currSum = 0, maxSum = INT32_MIN;
//
//    findLeaf(root, currSum, maxSum, &leaf);
//
//    printPath(root, leaf);
//
//    printf("Max Sum: %d\n", maxSum);
//
//}
//
//int main() {
//
//    Node *root;
//    root = new Node(10);
//    root->left = new Node(-2);
//    root->right = new Node(7);
//    root->left->left = new Node(10);
//    root->left->right = new Node(-4);
//    maxPath(root);
//
//    return 0;
//}
//
//
