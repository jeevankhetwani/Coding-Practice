////
//// Created by jeevan on 4/12/17.
////
//#include <iostream>
//#include <unordered_map>
//
//using namespace std;
//
//class Node {
//public:
//    int data;
//    Node *left, *right, *random;
//
//    Node(int d): data(d), left(nullptr), right(nullptr), random(nullptr) {}
//};
//
//void inorder(Node *root) {
//    if(root) {
//        inorder(root->left);
//
//        cout << "[" << root->data << " ";
//        if (root->random == nullptr)
//            cout << "NULL], ";
//        else
//            cout << root->random->data << "], ";
//
//        inorder(root->right);
//    }
//}
//
//Node* copy(Node *root, unordered_map<Node*, Node*>& mymap) {
//
//    if(root == nullptr)
//        return nullptr;
//
//    Node *node = new Node(root->data);
//    node->left = copy(root->left, mymap);
//    node->right = copy(root->right, mymap);
//    mymap[root] = node;
//    return node;
//}
//
//void copyRandom(Node *root, unordered_map<Node*, Node*>& mymap) {
//    if(root == nullptr)
//        return;
//
//    mymap[root]->random = mymap[root->random];
//    copyRandom(root->left, mymap);
//    copyRandom(root->right, mymap);
//}
//
//Node* cloneNodes(Node *root) {
//
//    if(root == nullptr)
//        return nullptr;
//
//    Node *left = root->left;
//
//    Node *node = new Node(root->data);
//    root->left = node;
//    node->left = left;
//
//    node->right = cloneNodes(root->right);
//
//    cloneNodes(left);
//
//    return node;
//}
//
//void copyRandomLinks(Node *root) {
//    if(root == nullptr)
//        return;
//
//    if(root->random)
//        root->left->random = root->random->left;
//
//    copyRandomLinks(root->left->left);
//
//    copyRandomLinks(root->right);
//}
//
//void split(Node *root1) {
//
//    if(root1 == nullptr)
//        return;
//
//    Node *root2 = root1->left;
//
//    root1->left = root1->left->left;
//
//    if(root2->left)
//        root2->left = root2->left->left;
//
//    split(root1->left);
//    split(root1->right);
//}
//
//Node* cloneTree(Node* root) {
//
//    cloneNodes(root);
//    copyRandomLinks(root);
//    Node *root2 = root->left;
//    split(root);
//    return root2;
//}
//
//int main() {
//
////    unordered_map<Node*, Node*> mymap;
//
////Test No 1
////    Node *tree = new Node(1);
////    tree->left = new Node(2);
////    tree->right = new Node(3);
////    tree->left->left = new Node(4);
////    tree->left->right = new Node(5);
////    tree->random = tree->left->right;
////    tree->left->left->random = tree;
////    tree->left->right->random = tree->right;
//
////  Test No 2
////  Node *tree = NULL;
//
////  Test No 3
////    Node *tree = new Node(1);
//
////  Test No 4
////    Node *tree = new Node(1);
////    tree->left = new Node(2);
////    tree->right = new Node(3);
////    tree->random = tree->right;
////    tree->left->random = tree;
//
////  Test No 5
////    Node *tree = new Node(1);
////    tree->left = new Node(2);
////    tree->right = new Node(3);
////    tree->left->left = new Node(4);
////    tree->left->right = new Node(5);
////    tree->right->left = new Node(6);
////    tree->right->right = new Node(7);
////    tree->random = tree->left;
//
////  Test No 6
////    Node *tree = new Node(10);
////    Node *n2 = new Node(6);
////    Node *n3 = new Node(12);
////    Node *n4 = new Node(5);
////    Node *n5 = new Node(8);
////    Node *n6 = new Node(11);
////    Node *n7 = new Node(13);
////    Node *n8 = new Node(7);
////    Node *n9 = new Node(9);
////    tree->left = n2;
////    tree->right = n3;
////    tree->random = n2;
////    n2->left = n4;
////    n2->right = n5;
////    n2->random = n8;
////    n3->left = n6;
////    n3->right = n7;
////    n3->random = n5;
////    n4->random = n9;
////    n5->left = n8;
////    n5->right = n9;
////    n5->random = tree;
////    n6->random = n9;
////    n9->random = n8;
//
////  Test No 7
//    Node *tree = new Node(1);
//    tree->left = new Node(2);
//    tree->right = new Node(3);
//    tree->left->random = tree;
//    tree->right->random = tree->left;
//
//    cout << "Inorder traversal of original binary tree is: \n";
//    inorder(tree);
//
////    Node *clone = copy(tree, mymap);
////    copyRandom(tree, mymap);
//
//    Node *clone = cloneTree(tree);
//    cout << "\n\nInorder traversal of cloned binary tree is: \n";
//    inorder(clone);
//    return 0;
//}
//
//
