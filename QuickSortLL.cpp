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
//Node* getTail(Node * node) {
//
//    while(node->next)
//        node = node->next;
//    return node;
//}
//
//Node* partition(Node* head, Node* tail, Node** newHead, Node** newEnd) {
//
//    Node *prev = nullptr, *curr = head, *pivot = tail;
//
//    while(curr != pivot) {
//
//        if(curr->data <= pivot->data) {
//
//            if(*newHead == nullptr)
//                *newHead = curr;
//            prev = curr;
//            curr = curr->next;
//
//        } else {
//
//            Node *tmp = curr->next;
//
//            if(prev)
//                prev->next = tmp;
//
////            append curr at tail
//            curr->next = nullptr;
//            tail->next = curr;
//
////            update tail & curr
//            tail = curr;
//            curr = tmp;
//
//        }
//
//    }
//
//    if(*newHead == nullptr)
//        *newHead = pivot;
//
//    *newEnd = tail;
//
//    return pivot;
//}
//
//Node* quickSort(Node *head, Node* tail) {
//
//    if( !head || head == tail)
//        return head;
//
//    Node *newHead = nullptr, *newEnd = nullptr;
//
//    Node* pivot = partition(head, tail, &newHead, &newEnd);
//
//    if(newHead != pivot) {
//
//        Node *tmp = newHead;
//
//        while(tmp->next != pivot)
//            tmp = tmp->next;
//
//        tmp->next = nullptr;
//
//        newHead = quickSort(newHead, tmp);
//        tmp = getTail(newHead);
//
//        tmp->next = pivot;
//    }
//
//    pivot->next = quickSort(pivot->next, newEnd);
//
//    return newHead;
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
//}
//
//
//void quickSort(Node **head) {
//    *head = quickSort(*head, getTail(*head));
//}
//
//int main() {
//
//    Node *root = nullptr;
//    push(&root, 5);
//    push(&root, 6);
//    push(&root, 7);
//    push(&root, 8);
//    push(&root, 9);
//
//    cout << "Before\n";
//    printList(root);
//
//    quickSort(&root);
//
//    cout << "After\n";
//    printList(root);
//
//
//    return 0;
//}
