////
//// Created by jeevan on 2/3/17.
////
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//typedef struct node
//{
//    int freq;
//    char data;
//    node * left;
//    node * right;
//
//}node;
//
//
//
//void decode_huff(node * root,string s)
//{
//    node *curr = root;
//    int i = 0;
//
//    while( i < s.size()) {
//
//        if (curr->data != '\0') {
//            cout << curr->data;
//            curr = root;
//        } else {
//            curr = s[i] == '0' ? curr->left : curr->right;
//        }
//
//        i++;
//
//    }
//}
//
//class MinMax{
//public:
//    int min, max;
//
//    MinMax(int m, int n) : min(m), max(n) {}
//};
//
//class RNode {
//public:
//    bool flag;
//    MinMax* mm;
//
//    RNode(bool f, MinMax* p1 = nullptr) {
//        flag = f;
//        mm = p1;
//    }
//};
//
//RNode* checkBSTHelper(node* root) {
//
//    RNode *left = nullptr, *right = nullptr;
//    if(root->left) {
//       left = checkBSTHelper(root->left);
//        if (!left->flag || (left->mm->max >= root->data))
//            return new RNode(false);
//    }
//
//    if(root->right) {
//        right = checkBSTHelper(root->right);
//        if( !right->flag || ( right->mm->min <= root->data) )
//            return new RNode(false);
//
//    }
//
//    return new RNode(true, new MinMax(left == nullptr ? root->data : left->mm->min,
//                                      right == nullptr ? root->data : right->mm->max));
//
//}
//
//bool checkBST(node* root) {
//
//    return checkBSTHelper(root)->flag;
//
//}
//
//int main() {
//
//
//    return 0;
//}
