////
//// Created by jeevan on 3/18/17.
////
//#include <iostream>
//using namespace std;
//
//class Node {
//
//public:
//    int data;
//    Node *left, *right;
//    Node(int d) : data(d) {}
//
//};
//
//int find(Node *root, bool canInclude = true) {
//
//    if(root == nullptr)
//        return 0;
//
//    if(!canInclude)
//        return find(root->left, true) + find(root->right, true);
//
//    return max( find(root->left, true) + find(root->right, true),
//                1 + find(root->left, false) + find(root->right, false) );
//
//}
//
//int LISS(struct node *root)
//{
//    if (root == NULL)
//        return 0;
//
//    // Caculate size excluding the current node
//    int size_excl = LISS(root->left) + LISS(root->right);
//
//    // Calculate size including the current node
//    int size_incl = 1;
//    if (root->left)
//        size_incl += LISS(root->left->left) + LISS(root->left->right);
//    if (root->right)
//        size_incl += LISS(root->right->left) + LISS(root->right->right);
//
//    // Return the maximum of two sizes
//    return max(size_incl, size_excl);
//}
//int main() {
//
//    Node *root         = new Node(20);
//    root->left                = new Node(8);
//    root->left->left          = new Node(4);
//    root->left->right         = new Node(12);
//    root->left->right->left   = new Node(10);
//    root->left->right->right  = new Node(14);
//    root->right               = new Node(22);
//    root->right->right        = new Node(25);
//
//    printf ("Size of the Largest Independent Set is %d ", find(root));
//
//    return 0;
//
//}
