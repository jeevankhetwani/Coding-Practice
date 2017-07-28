////
//// Created by jeevan on 1/8/17.
////
//#include<iostream>
//
//using namespace std;
//
//class TreeNode {
//public:
//
//    int data, lcount;
//    TreeNode *left, *right;
//
//    TreeNode(int v) {
//        data = v;
//        lcount = 0;
//        left = right = nullptr;
//    }
//
//    void addLeftChild() {
//        lcount++;
//    }
//
//};
//
//TreeNode* insert(TreeNode* root, int k) {
//    if (root == nullptr)
//        return new TreeNode(k);
//
//    if ( k <= root->data ) {
//        root->addLeftChild();
//        root->left = insert(root->left, k);
//    }
//    else if(k > root->data)
//        root->right = insert(root->right, k);
//
//    return root;
//}
//
//int search(TreeNode* root, int k, int count = 0) {
//    if (root == nullptr)
//        return -1;
//
//
//    if (k < root->data)
//        return search(root->left, k, count);
//    else if (k > root->data)
//        return search(root->right, k, count + root->lcount + 1);
//    else
//        return count + root->lcount;
//}
//
//void inorder(TreeNode* root) {
//    if (root == nullptr)
//        return;
//    inorder(root->left);
//    cout << root->data << " ";
//    inorder(root->right);
//}
//
//int main() {
//
//    TreeNode* root = nullptr;
//    root = insert(root, 5);
//    insert(root, 3);
//    insert(root, 2);
//    insert(root, 8);
//    insert(root, 6);
//    insert(root, 6);
//    insert(root, 7);
//    insert(root, 9);
//    inorder(root);
//    cout << endl;
//    cout << search(root, 6);
//    return 0;
//}