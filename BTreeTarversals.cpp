////
//// Created by jeevan on 5/20/17.
////
//#include <iostream>
//#include <stack>
//using namespace std;
//
//class Node {
//public:
//    int data;
//    Node *left, *right;
//
//    Node(int d) : data(d) {
//        left = right = nullptr;
//    }
//};
//
//void printCommon(Node *root1, Node *root2) {
//
//    stack<Node*> st1, st2;
//
//    if(root1 == nullptr || root2 == nullptr)
//        return;
//
//    while(1) {
//
//        if(root1) {
//
//            st1.push(root1);
//            root1 = root1->left;
//
//        } else if(root2) {
//
//            st2.push(root2);
//            root2 = root2->left;
//
//        } else {
//
//            if(st1.empty() || st2.empty())
//                break;
//
//            root1 = st1.top();
//            root2 = st2.top();
//
//            if(root1->data == root2->data) {
//
//                cout << root1->data << " ";
//                st1.pop();
//                st2.pop();
//
////                move both to inorder successor
//                root1 = root1->right;
//                root2 = root2->right;
//
//            } else if(root1->data < root2->data) {
//
////                move to root1 inorder successor
//                st1.pop();
//                root1  = root1->right;
//
////                stay on root2
//                root2 = nullptr;
//
//            } else {
//
////                move to root2 inorder successor
//                st2.pop();
//                root2  = root2->right;
//
////                stay on root1
//                root1 = nullptr;
//            }
//        }
//    }
//
//    cout << endl;
//}
//
////void printCommon(Node *root1, Node *root2)
////{
////    //Your code here
//// prints common nodes multiple times
////
////    if(root1 == nullptr || root2 == nullptr)
////        return;
////
////    if(root1->data == root2->data) {
////        cout << root1->data << " ";
////        printCommon(root1->left, root2->left);
////        printCommon(root1->right, root2->right);
////    } else if (root1->data < root2->data) {
////        printCommon(root1, root2->left);
////        printCommon(root1->right, root2);
////    } else {
////        printCommon(root1, root2->right);
////        printCommon(root1->left, root2);
////    }
////}
//
////void levelOrder(Node* node)
////{
////    //Your code here
////    queue<Node*> myqueue;
////    myqueue.push(node);
////
////    while(!myqueue.empty()) {
////
////        node = myqueue.front();
////        myqueue.pop();
////
////        cout << node->data << " ";
////
////        if(node->left)
////            myqueue.push(node->left);
////
////        if(node->right)
////            myqueue.push(node->right);
////    }
////
////}
//
//Node* insert(struct Node* node, int key)
//{
//    /* If the tree is empty, return a new Node */
//    if (node == NULL) return new Node(key);
//
//    /* Otherwise, recur down the tree */
//    if (key < node->data)
//        node->left  = insert(node->left, key);
//    else if (key > node->data)
//        node->right = insert(node->right, key);
//
//    /* return the (unchanged) Node pointer */
//    return node;
//}
//
//void inOrder(Node *root) {
//
//    stack<Node*> st;
//    Node *curr = root;
//
//    while(1) {
//
//        if(curr) {
//
//            st.push(curr);
//            curr = curr->left;
//
//        } else {
//
//            if(st.empty())
//                break;
//
//            curr = st.top();
//            st.pop();
//
//            cout << curr->data << " ";
//            curr = curr->right;
//
//        }
//    }
//
//    cout << endl;
//}
//
//void preOrder(Node *root) {
//
//    stack<Node*> st;
//    Node *curr = root;
//
//    while(1) {
//
//        if(curr) {
//            cout << curr->data << " ";
//            st.push(curr);
//            curr = curr->left;
//        } else {
//
//            if(st.empty())
//                break;
//
//            curr = st.top();
//            st.pop();
//
//            curr = curr->right;
//        }
//
//    }
//
//    cout << endl;
//}
//
//void preOrder2(Node *root) {
//
//    stack<Node*> st;
//    st.push(root);
//
//    while (!st.empty()) {
//        root = st.top();
//        st.pop();
//
//        cout << root->data << " ";
//
//        if(root->right)
//            st.push(root->right);
//
//        if(root->left)
//            st.push(root->left);
//    }
//
//    cout << endl;
//}
//
//void postOrder(Node* root) {
////    using 2 stacks
//    stack<Node*> st1, st2;
//
//    if(root == nullptr)
//        return;
//
//    st1.push(root);
//
//    while(!st1.empty()) {
//
//        root = st1.top();
//        st1.pop();
//
//        st2.push(root);
//
//        if(root->left)
//            st1.push(root->left);
//
//        if(root->right)
//            st1.push(root->right);
//    }
//
//    while(!st2.empty()) {
//        cout << st2.top()->data << " ";
//        st2.pop();
//    }
//
//    cout << endl;
//}
//
//
//void KthSmallestElement(Node *root, int k)
//{
//    //add code here.
//
//    stack<Node*> st;
//
//    while(1) {
//
//        if(root) {
//            st.push(root);
//            root = root->left;
//        } else {
//
//            if(st.empty() || k == 1)
//                break;
//
//            root = st.top();
//            st.pop();
//            k--;
//
//            root = root->right;
//        }
//    }
//
//    if(st.empty())
//        cout << "K more than size";
//    else
//        cout << st.top()->data << endl;
//
//}
//
//void postOrder2(Node *root) {
////    using one stack
//    stack<Node*> st;
//
//    while(1) {
//
//        if(root) {
//
//            if(root->right)
//                st.push(root->right);
//
//            st.push(root);
//            root = root->left;
//
//        } else {
//
//            if(st.empty())
//                break;
//
//            root = st.top();
//            st.pop();
//
//            if(root->right == nullptr || st.empty() || root->right != st.top()) {
//                cout << root->data << " ";
//                root = nullptr;
//            } else {
//                st.pop();
//                st.push(root);
//                root = root->right;
//            }
//        }
//    }
//    cout << endl;
//}
//
//int main() {
//
////    Node *root = new Node(1);
////    root->left        = new Node(2);
////    root->right       = new Node(3);
////    root->left->left  = new Node(4);
////    root->left->right = new Node(5);
////    root->right->left = new Node(6);
////    root->right->right = new Node(7);
////    preOrder(root);
////    postOrder(root);
////    postOrder2(root);
////    preOrder2(root);
////    inOrder(root);
//
//    Node *root1 = NULL;
//    root1 = insert(root1, 5);
//    root1 = insert(root1, 1);
//    root1 = insert(root1, 10);
//    root1 = insert(root1,  0);
//    root1 = insert(root1,  4);
//    root1 = insert(root1,  7);
//    root1 = insert(root1,  9);
//
//    // Create second tree as shown in example
//    Node *root2 = NULL;
//    root2 = insert(root2, 10);
//    root2 = insert(root2, 7);
//    root2 = insert(root2, 20);
//    root2 = insert(root2, 4);
//    root2 = insert(root2, 9);
//
//    cout << "Tree 1 : ";
//    inOrder(root1);
//    cout << endl;
//
//    cout << "Tree 2 : ";
//    inOrder(root2);
//
//    cout << "\nCommon Nodes: ";
//    printCommon(root1, root2);
//    return 0;
//
//}
