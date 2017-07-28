////
//// Created by jeevan on 4/26/17.
////
//#include <iostream>
//using namespace std;
//
//class Node {
//public:
//    int data;
//    Node *next;
//    Node (int d) : data(d), next(nullptr) {}
//};
//
//void push(Node **root, int x) {
//    Node *node = new Node(x);
//
//    node->next = *root;
//    *root = node;
//}
//
//void printList(Node *head) {
//
//    while(head) {
//        cout << head->data << " ";
//        head = head->next;
//    }
//    cout << endl;
//}
//
//Node* getTail(Node *head) {
//
//    while(head->next)
//        head = head->next;
//
//    return head;
//}
//
//Node* partition(Node *head, Node *tail, Node **newHead, Node **newTail) {
//
//    Node *prev = nullptr, *curr = head, *pivot = tail, *next;
//
//    while(curr != pivot) {
//
//        if(curr->data <= pivot->data) {
//
//            if(*newHead == nullptr)
//                *newHead = curr;
//
//            prev = curr;
//            curr = curr->next;
//        } else {
//
//            next = curr->next;
//
//            if(prev)
//                prev->next = next;
//
//            curr->next = nullptr;
//            tail->next = curr;
//
//            tail = curr;
//            curr = next;
//        }
//    }
//
//    if(*newHead == nullptr)
//        *newHead = pivot;
//
//    *newTail = tail;
//
//    return pivot;
//}
//
//Node* quickSort(Node *head, Node *tail) {
//
//    if(!head || head == tail)
//        return head;
//
//    Node *newHead = nullptr, *newTail = nullptr;
//
//    Node *pivot = partition(head, tail, &newHead, &newTail);
//
////    if left list is non empty
//    if(newHead != pivot) {
//
//        Node *tmp = newHead;
//
//        while(tmp->next != pivot)
//            tmp = tmp->next;
//
//        tmp->next = nullptr;
//        newHead = quickSort(newHead, tmp);
//        Node *leftTail = getTail(newHead);
//        leftTail->next = pivot;
//    }
//
//    pivot->next = quickSort(pivot->next, newTail);
//
//}
//
//void quickSort(Node **head) {
//    Node *tail = getTail(*head);
//    *head = quickSort(*head, tail);
//}
//
//int main() {
//
//    Node *root = nullptr;
//    push(&root, 1);
//    push(&root, 2);
//    push(&root, 3);
//    push(&root, 4);
//    push(&root, 5);
//
//    printList(root);
//
//    quickSort(&root);
//
//    printList(root);
//
//
//    return 0;
//}
