////
//// Created by jeevan on 3/25/17.
////
//#include <iostream>
//#include <stack>
//
//using namespace std;
//
//const int MAX = 100;
//
//class Node {
//public:
//    char data;
//    Node *left, *right;
//
//    Node(char d) : data(d) {
//        left = right = nullptr;
//    }
//};
//
//int storePreorder(Node *root, char a[]) {
//
//    int size = 0;
//    Node *curr = root;
//    stack<Node*> st;
//
//    while(1) {
//
//        while(1) {
//
//            if(curr == nullptr) {
//                a[size++] = '$';
//                break;
//            }
//
//            a[size++] = curr->data;
//            st.push(curr);
//            curr = curr->left;
//        }
//
//
//        if(st.empty())
//            break;
//
//        curr = st.top()->right;
//        st.pop();
//    }
//
//    return size;
//}
//
//int storeInorder(Node* root, char a[]) {
//
//    int size = 0;
//    Node *curr = root;
//    stack<Node*> st;
//
//    while(1) {
//
//        while(1) {
//
//            if(curr == nullptr) {
//                a[size++] = '$';
//                break;
//            }
//
//            st.push(curr);
//            curr = curr->left;
//        }
//
//
//        if(st.empty())
//            break;
//
//        curr = st.top();
//        st.pop();
//
//        a[size++] = curr->data;
//        curr = curr->right;
//
//    }
//
//    return size;
//
//}
//
//void inOrder(Node *root) {
//
//    if(root == nullptr) {
//        cout << '$' << " ";
//        return;
//    }
//
//    inOrder(root->left);
//    cout << (char) root->data << " ";
//    inOrder(root->right);
//}
//
//bool isSubArray(char a[], char b[], int sizeA, int sizeB) {
//
//    int i, j;
//
//    for(int start = 0; start <= sizeA - sizeB; start++) {
//
//        i = start;
//        j = 0;
//
//        while (j < sizeB && a[i] == b[j]) {
//            i++;
//            j++;
//        }
//
//        if(j == sizeB)
//            return true;
//    }
//
//    return false;
//}
//
//bool isSubtree(Node *T, Node *S) {
//
//    char inOrderT[MAX], inOrderS[MAX], preOrderT[MAX], preOrderS[MAX];
//
//    int sizeT = 0, sizeS = 0;
//
//    sizeT = storeInorder(T, inOrderT);
//    storePreorder(T, preOrderT);
//
//    sizeS = storeInorder(S, inOrderS);
//    storePreorder(S, preOrderS);
//
//    return isSubArray(inOrderT, inOrderS, sizeT, sizeS) &&
//            isSubArray(preOrderT, preOrderS, sizeT, sizeS);
//
//}
//
//int main() {
//
//    Node *T = new Node('a');
//    T->left = new Node('b');
//    T->right = new Node('d');
//    T->left->left = new Node('c');
//    T->right->right = new Node('e');
//
//    Node *S = new Node('b');
//    S->left = new Node('c');
////    S->left->left = new Node('c');
////    S->right = new Node('d');
//
//    if (isSubtree(T, S))
//        cout << "Yes: S is a subtree of T";
//    else
//        cout << "No: S is NOT a subtree of T";
//
//    return 0;
//
//    return 0;
//}
//
//
//
//
