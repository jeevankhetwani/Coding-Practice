////
//// Created by jeevan on 5/20/17.
////
//#include <iostream>
//
//using namespace std;
//
//class Node {
//public:
//    int data, lCount;
//    Node *left, *right;
//    Node(int d): data(d), lCount(0), left(nullptr), right(nullptr) {}
//};
//
//void insertNode(Node **root, int x) {
//
//    Node *curr, *parent;
//
//    Node *node = new Node(x);
//
//    if(*root == nullptr) {
//        *root = node;
//        return;
//    }
//
//    curr = *root, parent = nullptr;
//
//    while(curr) {
//
//        parent = curr;
//
//        if( node->data <= curr->data ) {
//            curr->lCount++;
//            curr = curr->left;
//        } else
//            curr = curr->right;
//
//    }
//
//    if(node->data <= parent->data)
//        parent->left = node;
//    else
//        parent->right = node;
//
//}
//
//int kSmallest(Node *root, int k) {
//
//    int ans = -1;
//
//    while(root) {
//
//        if(k == root->lCount + 1) {
//            ans = root->data;
//            break;
//        }
//
//        if(k > root->lCount) {
//            k -= root->lCount + 1;
//            root = root->right;
//        }
//        else
//            root =root->left;
//    }
//
//    return ans;
//}
//
//int main() {
//
//    int a[] = { 20, 8, 22, 4, 12, 10, 14 };
//    int n = sizeof(a) / sizeof(a[0]);
//    Node *root = nullptr;
//
//    for(int i = 0; i < n; i++)
//        insertNode(&root, a[i]);
//
//    cout << kSmallest(root, 4);
//
//    return 0;
//}
//
//
//
//
