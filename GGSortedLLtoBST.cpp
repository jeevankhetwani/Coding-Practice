////
//// Created by jeevan on 4/8/17.
////
//#include <iostream>
//using namespace std;
//
//class Lnode {
//public:
//    int data;
//    Lnode *next;
//
//    Lnode(int d): data(d), next(nullptr) {}
//};
//
//
//class Bnode {
//public:
//    int data;
//    Bnode *left, *right;
//
//    Bnode(int d): data(d), left(nullptr), right(nullptr) {}
//};
//
//void push(Lnode **root, int data) {
//    Lnode *node = new Lnode(data);
//
//    node->next = *root;
//    *root = node;
//}
//
//void inorder(Bnode *root) {
//    if(root) {
//        inorder(root->left);
//        cout << root->data;
//        inorder(root->right);
//    }
//}
//
//Lnode* split(Lnode *head) {
//
//    Lnode *slow = head, *fast = head->next;
//
//    while(fast) {
//
//        fast = fast->next;
//
//        if(fast) {
//            fast = fast->next;
//            slow = slow->next;
//        }
//    }
//
//    return slow;
//}
//
//
//
//Bnode* convert(Lnode* head) {
//
//    if(!head)
//        return nullptr;
//
//    if(head->next == nullptr)
//        return new Bnode(head->data);
//
//    Lnode *leftEnd = split(head);
//    Lnode *middle = leftEnd->next;
//    Lnode *rightStart = middle->next;
//
//    leftEnd->next = nullptr;
//
//    Bnode *root = new Bnode(middle->data);
//    root->left = convert(head);
//    root->right = convert(rightStart);
//
//    return root;
//}
//
//int countNodes(Lnode *head) {
//
//    int count = 0;
//    while(head) {
//        head = head->next;
//        count++;
//    }
//
//    return count;
//}
//
//Bnode* convert2Recur(Lnode **head, int n) {
//
//    if(n == 0)
//        return nullptr;
//
//    Bnode *left = convert2Recur(head, n / 2);
//
//    Bnode *root = new Bnode((*head)->data);
//    *head = (*head)->next;
//
//    root->left = left;
//    root->right = convert2Recur(head, n - n / 2 - 1);
//}
//
//Bnode* convert2(Lnode *head) {
//
//    int n = countNodes(head);
//
//    return convert2Recur(&head, n);
//}
//
//void printList(Lnode *head) {
//
//    while(head) {
//        cout << head->data;
//        head = head->next;
//    }
//
//    cout<< endl;
//}
//
//int main() {
//
//    Lnode *head = nullptr;
//    push(&head, 7);
//    push(&head, 6);
//    push(&head, 5);
//    push(&head, 4);
//    push(&head, 3);
//    push(&head, 2);
//    push(&head, 1);
//
//    printf("\n Given Linked List ");
//    printList(head);
//
//    /* Convert List to BST */
//    Bnode *root = convert2(head);
//    printf("\n PreOrder Traversal of constructed BST ");
//    inorder(root);
//    return 0;
//}