////
//// Created by jeevan on 4/12/17.
////
//#include <iostream>
//using namespace std;
//
//class Node {
//public:
//    int data;
//    Node *next, *rand;
//
//    Node(int d) : data(d), next(nullptr), rand(nullptr) {}
//};
//
//void cloneNode(Node *head) {
//
//    Node *curr = head;
//
//    while(curr) {
//        Node *tmp = curr->next;
//
//        Node *node = new Node(curr->data);
//        node->next = tmp;
//        curr->next = node;
//
//        curr = tmp;
//    }
//
////    copy rand links, cannot copy before since clone node is not created
//    curr = head;
//    while(curr) {
//        curr->next->rand = curr->rand->next;
//        curr = curr->next->next;
//    }
//}
//
//Node* split(Node *head) {
//
//    Node *curr1 = head, *head2 = head->next, *curr2 = head2;
//
//
//    while(curr2->next) {
//        curr1->next = curr1->next->next;
//        curr2->next = curr2->next->next;
//        curr1 = curr1->next;
//        curr2 = curr2->next;
//    }
//
//    curr1->next = nullptr;
//
//    return head2;
//}
//
//Node* cloneList(Node *head) {
//
//    cloneNode(head);
//    return split(head);
//
//}
//
//void print(Node *head) {
//
//    while(head) {
//        cout << "Data = " << head->data << ", Random  = "
//             << head->rand->data << endl;
//        head = head->next;
//    }
//
//    cout << endl;
//}
//
//int main() {
//
//    Node* start = new Node(1);
//    start->next = new Node(2);
//    start->next->next = new Node(3);
//    start->next->next->next = new Node(4);
//    start->next->next->next->next = new Node(5);
//
//    // 1's random points to 3
//    start->rand = start->next->next;
//
//    // 2's random points to 1
//    start->next->rand = start;
//
//    // 3's and 4's random points to 5
//    start->next->next->rand =
//            start->next->next->next->next;
//    start->next->next->next->rand =
//            start->next->next->next->next;
//
//    // 5's random points to 2
//    start->next->next->next->next->rand =
//            start->next;
//
//    cout << "Original list : \n";
//    print(start);
//
//    cout << "\nCloned list : \n";
//    Node *cloned_list = cloneList(start);
//    print(cloned_list);
//
//
//    return 0;
//}
