////
//// Created by jeevan on 4/14/17.
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
//void push(Node **head, int d) {
//    Node *node = new Node(d);
//    node->next = *head;
//    *head = node;
//}
//
//int findLength(Node *head1, Node *head2) {
//
//    int res = 0;
//
//    while(head1 && head2 && head1->data == head2->data) {
//        res++;
//        head1 = head1->next;
//        head2 = head2->next;
//    }
//
//    return res;
//}
//Node* reverseList(Node *head) {
//
//    Node *prev = nullptr, *curr = head, *tmp;
//
//    while(curr) {
//        tmp = curr->next;
//        curr->next = prev;
//        prev = curr;
//        curr = tmp;
//    }
//
//    return prev;
//}
//
//
//int findLongest(Node *head) {
//
//    int maxLen = 0;
//    Node *prev = nullptr, *curr = head, *next;
//
//    while(curr) {
//        next = curr->next;
//
//        curr->next = prev;
//
//        int even = 2 * findLength(curr, next);
//        int odd  = 2 * findLength(prev, next) + 1;
//
//        maxLen = max(maxLen, max(odd, even));
//
//        prev = curr;
//        curr = next;
//    }
//
//    reverseList(prev);
//
//    return maxLen;
//}
//
//
//void printList(Node *head) {
//    while(head) {
//        cout << head->data << " ";
//        head = head->next;
//    }
//    cout << endl;
//}
//
//
//int main() {
//
//    Node *head = new Node(2);
//    head->next = new Node(4);
//    head->next->next = new Node(3);
//    head->next->next->next = new Node(4);
//    head->next->next->next->next = new Node(2);
//    head->next->next->next->next->next = new Node(15);
//
//    printList(head);
//
//    cout << findLongest(head) << endl;
//
//    printList(head);
//
//    return 0;
//}
