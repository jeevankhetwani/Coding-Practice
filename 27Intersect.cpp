////
//// Created by jeevan on 12/25/16.
////
//
//#include<iostream>
//#include<string>
//#include "Node.h"
//
//using namespace std;
//
//Node* find(LL* list1, LL* list2) {
//    set<Node*> nodeset;
//    Node* curr1 = list1->head, *curr2 = list2->head;
//
//    while(curr1 != nullptr) {
//        nodeset.insert(curr1);
//        curr1 = curr1->next;
//    }
//
//    while(curr2 != nullptr) {
//        if(nodeset.find(curr2)!= nodeset.end())
//            return curr2;
//        curr2 = curr2->next;
//    }
//
//    return nullptr;
//}
//
//Node* findLoop(LL* list) {
//    set<Node*> nodeset;
//
//    Node* curr = list->head;
//    while(curr != nullptr) {
//        if(nodeset.find(curr) != nodeset.end())
//            return curr;
//        nodeset.insert(curr);
//        curr = curr->next;
//    }
//
//    return nullptr;
//}
//
//int main() {
//
//    LL* list1 = new LL();
////   Node* node =  list1->insert(1);
////    list1->insert(2);
////    list1->insert(3);
////    list1->insert(4);
////
////
////
////    LL* list2 = new LL();
////    list2->insert(node);
////    list2->insert(6);
////    list2->insert(7);
////    list2->insert(4);
////
////    Node* intersect = find(list1, list2);
////    if(intersect == nullptr)
////        cout << "No";
////    else
////        cout << "Intersect = "<< intersect->data;
//
//
//    Node* nodes[10];
//    for(int i = 0; i < 10; i++)
//        nodes[i] = new Node(i);
//
//    LL* list = new LL();
//    list->insert(nodes[0]);
//    list->insert(nodes[1]);
//    list->insert(nodes[2]);
//    list->insert(nodes[3]);
//    list->insert(nodes[4]);
//    list->insert(nodes[5]);
//    list->insert(nodes[6]);
//    list->insert(nodes[7]);
//
//    Node* loop = findLoop(list);
//    if(loop== nullptr)
//        cout << "No";
//    else
//        cout << "Loop = " << loop->data;
//
//    return 0;
//}