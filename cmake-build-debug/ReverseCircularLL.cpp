////
//// Created by jeevan on 2/23/17.
////
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Node {
//public:
//    int data;
//    Node* next;
//
//    Node(int d) : data(d) {}
//};
//
//class CircularLL {
//    Node *head, *tail;
//
//public:
//    CircularLL() {
//        head = nullptr;
//        tail = nullptr;
//    }
//
//    void insert(int x) {
//        Node *node = new Node(x);
//
//        if(head == nullptr)
//            head = node;
//         else
//            tail->next = node;
//
//        tail = node;
//        tail->next = head;
//    }
//
//    void display() {
//        Node *curr = head;
//
//        if(curr == nullptr)
//            return;
//
//        do {
//            cout << curr->data << " ";
//            curr = curr->next;
//        } while(curr != head);
//
//        cout << endl;
//    }
//
//    void reverse() {
//        Node *curr = head, *prev = tail, *temp;
//
//        if(!head)
//            return;
//
//        do {
//            temp = curr->next;
//            curr->next = prev;
//
//            prev = curr;
//            curr = temp;
//        } while(curr != head);
//
//        head = prev;
//        tail = curr;
//    }
//};
//
//int main() {
//
//    CircularLL clist;
//
//    clist.insert(1);
//    clist.display();
//    clist.insert(2);
//    clist.display();
//
//    clist.reverse();
//    clist.display();
//
//    clist.insert(3);
//    clist.display();
//
//    clist.reverse();
//    clist.display();
//
//    return 0;
//}
