////
//// Created by jeevan on 1/17/17.
////
//#include<iostream>
//
//
//using namespace std;
//
//
//class BiNode {
//public:
//    int data;
//    BiNode *node1, *node2;
//
//    BiNode(int x) {
//        data = x;
//        node1 = node1 = nullptr;
//    }
//
//    BiNode(BiNode* n1, BiNode* n2) {
//        node1 = n1;
//        node2 = n2;
//    }
//};
//
//void merge(BiNode* root, BiNode* left, BiNode* right) {
//
//    root->node1 = left;
//    left->node2 = root;
//
//    root->node2 = right;
//    right->node1 = root;
//
//}
//
//
//
//class BST {
//
//    class NodePair {
//    public:
//        BiNode *head, *tail;
//
//        NodePair(BiNode *h, BiNode *t) {
//            head = h;
//            tail = t;
//        }
//    };
//
//    BiNode *root;
//
//public:
//    BST() { root = nullptr; }
//
//    BiNode* insertHelper(BiNode* root, int k) {
//
//        if (root == nullptr)
//            return new BiNode(k);
//
//        if ( k <= root->data)
//            root->node1 = insertHelper(root->node1, k);
//        else
//            root->node2 = insertHelper(root->node2, k);
//
//        return root;
//    }
//
//    BST* insert(int k) {
//
//        if ( root == nullptr)
//            root = new BiNode(k);
//        else
//            insertHelper(root, k);
//
//        return this;
//    }
//
//
//    void merge(BiNode* left, BiNode* right) {
//        left->node2 = right;
//        right->node1 = left;
//    }
//
//    NodePair* convert(BiNode* root) {
//        if(root == nullptr)
//            return nullptr;
//
//        NodePair *part1 = convert(root->node1);
//        NodePair *part2 = convert(root->node2);
//
//        if (part1 != nullptr)
//            merge(part1->tail, root);
//
//        if (part2 != nullptr)
//            merge(root, part2->head);
//
//        return new NodePair(part1 == nullptr ? root : part1->head,
//                            part2 == nullptr ? root : part2->tail);
//    }
//
//    BiNode* convert() {
//        return convert(root)->head;
//    }
//
//    void display() {
//        Inorder(root);
//        cout << endl;
//    }
//
//    void Inorder(BiNode* root) {
//        if (root == nullptr)
//            return;
//
//        Inorder(root->node1);
//        cout << root->data << " ";
//        Inorder(root->node2);
//    }
//};
//
//int main() {
//
//    BST *bst = new BST;
//    bst->insert(6)->insert(4)->insert(1)->insert(5)->insert(3)->insert(2)->insert(9)->insert(8)->insert(10);
////    bst->insert(6)->insert(4)->insert(7);
//    bst->display();
//
//    BiNode* first = bst->convert();
//
//    while (first != nullptr) {
//        cout << first->data << " ";
//        first = first->node2;
//    }
//
//
//
//
//    return 0;
//}
