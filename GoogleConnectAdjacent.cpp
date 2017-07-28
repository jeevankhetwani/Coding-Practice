////
//// Created by jeevan on 4/12/17.
////
//#include <iostream>
//#include <queue>
//using namespace std;
//
//class Node {
//public:
//    int data;
//    Node  *left, *right, *nextRight;
//
//    Node(int d): data(d), left(nullptr), right(nullptr), nextRight(nullptr) {}
//};
//
//void connect(Node *root) {
//
//    queue<Node*> myqueue;
//    myqueue.push(root);
//    myqueue.push(nullptr);
//
//    while(!myqueue.empty()) {
//        Node *front = myqueue.front();
//        myqueue.pop();
//
//        if(front) {
//            front->nextRight = myqueue.front();
//
//            if(front->left)
//                myqueue.push(front->left);
//
//            if(front->right)
//                myqueue.push(front->right);
//
//        } else if(!myqueue.empty())
//            myqueue.push(nullptr);
//    }
//
//}
//
//int main() {
//
//    Node *root = new Node(10);
//    root->left        = new Node(8);
//    root->right       = new Node(2);
//    root->left->left  = new Node(3);
//
//    // Populates nextRight pointer in all nodes
//    connect(root);
//
//    // Let us check the values of nextRight pointers
//    printf("Following are populated nextRight pointers in the tree "
//                   "(-1 is printed if there is no nextRight) \n");
//    printf("nextRight of %d is %d \n", root->data,
//           root->nextRight? root->nextRight->data: -1);
//    printf("nextRight of %d is %d \n", root->left->data,
//           root->left->nextRight? root->left->nextRight->data: -1);
//    printf("nextRight of %d is %d \n", root->right->data,
//           root->right->nextRight? root->right->nextRight->data: -1);
//    printf("nextRight of %d is %d \n", root->left->left->data,
//           root->left->left->nextRight? root->left->left->nextRight->data: -1);
//
//    return 0;
//}
