////
//// Created by jeevan on 4/7/17.
////
//#include <iostream>
//using namespace std;
//
//class Node {
//public:
//    int data;
//    Node *next;
//
//    Node (int d) : data(d), next(nullptr) {}
//};
//
//void push(Node **root, int d) {
//    Node *temp = new Node(d);
//    temp->next = *root;
//    *root = temp;
//}
//
//void printList(Node *root) {
//
//    while(root) {
//        printf("%d ", root->data);
//        root = root->next;
//    }
//
//    puts("\n");
//
//}
//
//void splitFrontBack(Node *head, Node **a, Node **b) {
//
//    Node *fast = head->next, *slow = head;
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
//    *a = head;
//    *b = slow->next;
//    slow->next = nullptr;
//}
//
//
//Node* merge(Node *a, Node *b) {
//
//    if(a == nullptr)
//      return b;
//
//    if(b == nullptr)
//        return a;
//
//    Node *head;
//
//    if(a->data <= b->data) {
//        head = a;
//        head->next = merge(a->next, b);
//    } else {
//        head = b;
//        head->next = merge(a, b->next);
//    }
//
//    return head;
//}
//
//void mergeSort(Node **headRef) {
//
//    Node *head = *headRef;
//
//    if(head == nullptr || head->next == nullptr)
//        return;
//
//    Node *a, *b;
//
//    splitFrontBack(head, &a, &b);
//
//    mergeSort(&a);
//    mergeSort(&b);
//
//    *headRef = merge(a, b);
//}
//
//
//int main() {
//
//    Node *root = nullptr;
//    push(&root, 5);
//    push(&root, 20);
//    push(&root, 4);
//    push(&root, 3);
//    push(&root, 40);
//
//    cout << "Before\n";
//    printList(root);
//
//    mergeSort(&root);
//
//    cout << "After\n";
//    printList(root);
//
//
//    return 0;
//}
//
