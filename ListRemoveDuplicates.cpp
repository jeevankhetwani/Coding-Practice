////
//// Created by jeevan on 5/14/17.
////
//#include <iostream>
//#include <unordered_set>
//
//using namespace std;
//
//class Node {
//public:
//    string data;
//    Node *next;
//    Node(string s) : data(s), next(nullptr) {}
//};
//
//void push(Node** head, string s) {
//    Node* node = new Node(s);
//    node->next = *head;
//    *head = node;
//}
//
//void removeDup(Node *head) {
////    using 2 loops
//
//    for(Node* node = head; node->next != nullptr; node = node->next) {
//
//        for(Node *curr = node->next, *prev = node; curr; curr = prev->next) {
//
//            if(curr->data == node->data) {
//                prev->next = curr->next;
//                delete(curr);
//            }
//            else
//                prev = curr;
//        }
//    }
//}
//
//void removeDuplicates(struct Node *start)
//{
//    // Hash to store seen values
//    unordered_set<string> seen;
//
//    /* Pick elements one by one */
//    Node *curr = start;
//    Node *prev = NULL;
//    while (curr != NULL)
//    {
//        // If current value is seen before
//        if (seen.find(curr->data) != seen.end())
//        {
//            prev->next = curr->next;
//            delete (curr);
//        }
//        else
//        {
//            seen.insert(curr->data);
//            prev = curr;
//        }
//        curr = prev->next;
//    }
//}
//
//void removeSortedDup(Node* head) {
//
//    if(!head)
//        return;
//
//    Node *prev = head, *curr = prev->next;
//
//    while(curr) {
//
//        if(prev->data == curr->data) {
//            prev->next = curr->next;
//            delete(curr);
//        } else
//            prev = curr;
//
//        curr = prev->next;
//    }
//}
//
//void printList(Node *head) {
//
//    while(head) {
//        cout << head->data << " ";
//        head = head->next;
//    }
//
//    cout << endl;
//}
//
//int main() {
//
//    Node *head = nullptr;
//    push(&head, "xyz");
//    push(&head, "lmn");
//    push(&head, "lmn");
//    push(&head, "def");
//    push(&head, "abc");
//    push(&head, "abc");
//    printList(head);
//
////    removeDup(head);
//    removeSortedDup(head);
//    printList(head);
//}