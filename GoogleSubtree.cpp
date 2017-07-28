////
//// Created by jeevan on 4/12/17.
////
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//const int MAX = 100;
//
//class Node {
//
//public:
//    int data;
//    Node *left, *right;
//    Node(int d) : data(d), left(nullptr), right(nullptr) {}
//};
//
//bool checkThisSubtree(Node *root1, Node *root2) {
//
//    if(root1 == nullptr && root2 == nullptr)
//        return true;
//
//    if(root1 == nullptr || root2 == nullptr)
//        return false;
//
//    return (root1->data == root2->data) &&
//            checkThisSubtree(root1->left, root2->left) &&
//            checkThisSubtree(root1->right, root2->right);
//
//}
//
//bool checkSubtree(Node *root1, Node *root2) {
//
//    if(root2 == nullptr)
//        return true;
//
//    if(root1 == nullptr)
//        return false;
//
//    return checkThisSubtree(root1, root2) ||
//           checkSubtree(root1->left, root2) || checkSubtree(root2->right, root2);
//}
//
//void storeInorder(Node *root, char *a, int& i) {
//
//    if(root == nullptr) {
//        a[i++] = '$';
//        return;
//    }
//
//    storeInorder(root->left, a, i);
//    a[i++] = root->data;
//    storeInorder(root->right, a, i);
//
//}
//
//void storePreorder(Node *root, char *a, int& i) {
//
//    if(root == nullptr) {
//        a[i++] = '$';
//        return;
//    }
//
//    a[i++] = root->data;
//    storePreorder(root->left, a, i);
//    storePreorder(root->right, a, i);
//
//}
//
//bool isSubtree(Node *T, Node *S) {
//
//    if(S == nullptr)
//        return true;
//
//    if(T == nullptr)
//        return false;
//
//    char inS[MAX], inT[MAX];
//
//    int m = 0, n = 0;
//    storeInorder(T, inT, m);
//    storeInorder(S, inS, n);
//
//    inT[m] = '\0';
//    inS[n] = '\0';
//
//    if(strstr(inT, inS) == nullptr)
//        return false;
//
//    char preS[MAX], preT[MAX];
//
//    m = 0, n = 0;
//    storePreorder(T, preT, m);
//    storePreorder(S, preS, n);
//
//    preT[m] = '\0';
//    preS[n] = '\0';
//
//    return strstr(preT, preS) != nullptr;
//
//}
//
//int main() {
//
//    // TREE 1
//    /* Construct the following tree
//              26
//            /   \
//          10     3
//        /    \     \
//      4      6      3
//       \
//        30
//    */
////    Node *T        = new Node(26);
////    T->right              = new Node(3);
////    T->right->right       = new Node(3);
////    T->left               = new Node(10);
////    T->left->left         = new Node(4);
////    T->left->left->right  = new Node(30);
////    T->left->right        = new Node(6);
////
////    // TREE 2
////    /* Construct the following tree
////          10
////        /    \
////      4      6
////       \
////        30
////    */
////    Node *S    = new Node(10);
////    S->right          = new Node(6);
////    S->left           = new Node(4);
////    S->left->right    = new Node(30);
////
////
////    if (checkSubtree(T, S))
////        printf("Tree 2 is subtree of Tree 1");
////    else
////        printf("Tree 2 is not a subtree of Tree 1");
//
//    Node *T = new Node('a');
//    T->left = new Node('b');
//    T->right = new Node('d');
//    T->left->left = new Node('c');
//    T->right->right = new Node('e');
//
//    Node *S = new Node('a');
//    S->left = new Node('b');
//    S->left->left = new Node('c');
//    S->right = new Node('d');
//
//    if (isSubtree(T, S))
//        cout << "Yes: S is a subtree of T";
//    else
//        cout << "No: S is NOT a subtree of T";
//
//    return 0;
//}
//
