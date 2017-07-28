////
//// Created by jeevan on 12/27/16.
////
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Node {
//public:
//     int data;
//    Node *left, *right;
//
//    Node(int d) {
//        data = d;
//        left = right = nullptr;
//    }
//};
//
//Node* createBST(int *a, int m, int n) {
//    if (m > n)
//        return nullptr;
//
//    int middle = ( m + n ) / 2;
//    Node *newNode = new Node(a[middle]);
//    newNode->left = createBST(a, m, middle - 1);
//    newNode->right = createBST(a, middle + 1, n);
//}
//
//void display(Node* root) {
//    if(root == nullptr)
//        return;
//    display(root->left);
//    cout << root->data << " ";
//    display(root->right);
//}
//
//
//int main() {
//    int a[] = {1, 3, 4, 5, 6, 9, 11, 15};
//    Node* root = createBST(a, 0, 7);
//    display(root);
//    return 0;
//}