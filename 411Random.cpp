//
////
//// Created by jeevan on 12/29/16.
////
//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//#include <unordered_map>
//
//using namespace std;
//
//class TreeNode {
//
//public:
//    int data, m, n ;
//    TreeNode *left, *right;
//
//    TreeNode(int d) {
//        m = n = 0;
//        data = d;
//        left = right = nullptr;
//    }
//
//    void addLeft() {
//        m++;
//    }
//
//    void addRight() {
//        n++;
//    }
//
//    int getLeft() {
//        return m;
//    }
//
//    int getRight() {
//        return n;
//    }
//};
//
//
//class BST {
//private:
//    TreeNode* root;
//
//public:
//
//    BST() : root (nullptr) {
//        srand(time(NULL));
//    }
//
//    void insertHelper(TreeNode* root, TreeNode* node) {
//        if(node->data <= root->data) {
//            root->addLeft();
//            if (root->left == nullptr)
//                root->left = node;
//            else
//                insertHelper(root->left, node);
//        }
//        else {
//            root->addRight();
//            if (root->right == nullptr)
//                root->right = node;
//            else
//                insertHelper(root->right, node);
//        }
//    }
//
//    void insert(int k) {
//        TreeNode* newNode = new TreeNode(k);
//
//        if(root == nullptr) {
//            root = newNode;
//            return;
//        }
//
//        insertHelper(root, newNode);
//    }
//
//    void inorderHelper(TreeNode* root) {
//        if(root == nullptr)
//            return;
//        inorderHelper(root->left);
//        cout << root->data << " ";
//        inorderHelper(root->right);
//    }
//
//    void inorder() {
//        inorderHelper(root);
//        cout << endl;
//    }
//
//    TreeNode* getNode(TreeNode* root, int k) {
//        if (k < root->getLeft())
//            return getNode(root->left, k);
//        else if (k > root->getLeft())
//            return getNode(root->right, k - root->getLeft() - 1);
//        else
//            return root;
//    }
//
//    TreeNode* getRandom() {
//        int t = root->getLeft() + root->getRight() + 1;
//        int random = rand() % t;
//        return getNode(root, random);
//    }
//
//    TreeNode* findMin(TreeNode* root) {
//        while(root->left != nullptr)
//            root = root->left;
//        return root;
//    }
//
//    TreeNode* deleteHelper(TreeNode* root, int k) {
//        TreeNode* temp;
//        if (root == nullptr)
//            return root;
//
//        if (k < root->data)
//            root->left = deleteHelper(root->left, k);
//        else if ( k > root->data )
//            root->right = deleteHelper(root->right, k);
//        else {
//            if (root->left == nullptr) {
//                 temp = root->right;
//                free(root);
//                return temp;
//            } else if (root->right == nullptr) {
//                 temp = root->left;
//                free(root);
//                return temp;
//            } else {
//                temp = findMin(root->right);
//                root->data = temp->data;
//                root->right = deleteHelper(root->right, temp->data);
//            }
//
//        }
//    }
//
//
//    void deleteNode(int k) {
//        root = deleteHelper(root, k);
//    }
//};
//
//
//int main() {
//    int n;
//    BST btree;
//    btree.insert(5);
//    btree.insert(7);
//    btree.insert(1);
//    btree.insert(3);
//    btree.insert(2);
//    btree.inorder();
//
//    btree.deleteNode(1);
//    btree.inorder();
//
//    btree.deleteNode(4);
//    btree.inorder();
//
//
////    unordered_map<int, int> count;
////    for (int i = 0; i < 50000; i++) {
////        n = btree.getRandom()->data;
////        if (count.find(n) == count.end())
////            count[n] = 1;
////        else
////            count[n] += 1;
////    }
////
////    unordered_map<int, int>::const_iterator itr = count.begin();
////    while(itr != count.end()) {
////        cout << itr->first << " " << itr->second << endl;
////        itr++;
////    }
//
//    return 0;
//}
