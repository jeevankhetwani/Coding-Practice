////
//// Created by jeevan on 4/13/17.
////
//#include <iostream>
//using namespace std;
//
//class Node {
//public:
//    int data;
//    Node *next;
//
//    Node(int d): data(d), next(nullptr) {}
//};
//
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
//void splitList(Node *head, Node **head1, Node **center, Node **head2) {
//
//    Node *slow = head, *fast = head->next->next;
//
//    while(fast && fast->next) {
//        fast = fast->next->next;
//        slow = slow->next;
//    }
//
//    *center = slow->next;
//    slow->next = nullptr;
//
//    if(fast)
//        *head2 = (*center)->next;
//    else
//        *head2 = *center;
//
//    *head1 = reverseList(head);
//}
//
//bool checkPalindrome(Node *head1, Node *head2) {
//
//    while(head1 && head2) {
//
//        if(head1->data != head2->data)
//            return false;
//
//        head1 = head1->next;
//        head2 = head2->next;
//    }
//
//    return true;
//}
//
//
//bool check(Node *head) {
//
//    Node *head1, *head2, *center;
//
//    if(head == nullptr || head->next == nullptr)
//        return true;
//
//    splitList(head, &head1, &center, &head2);
//
//    bool flag = checkPalindrome(head1, head2);
//
//    head = reverseList(head1);
//    head1->next = center;
//
//    return flag;
//}
//
//void push(Node **head, char data) {
//
//    Node *node = new Node(data);
//    node->next = *head;
//    *head = node;
//}
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
//    Node* head = NULL;
//    char str[] = "abacaba";
//    int i;
//
//    for (i = 0; str[i] != '\0'; i++)
//        push(&head, str[i]);
//
//
//
//    printList(head);
//    check(head)? printf("Is Palindrome\n\n"):
//    printf("Not Palindrome\n\n");
//    printList(head);
//    return 0;
//}
//
