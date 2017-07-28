////
//// Created by jeevan on 4/14/17.
////
//#include <iostream>
//#include <unordered_map>
//
//using namespace std;
//
//class Cache {
//
//    class Node {
//    public:
//        int key, value;
//        Node *prev, *next;
//
//        Node (int k, int v): key(k), value(v), prev(nullptr), next(nullptr) {}
//
//        void display() { printf("(%d, %d) ", key, value); }
//    };
//
//    int capacity;
//    Node *head, *tail;
//    unordered_map<int, Node*> map;
//
//public:
//    Cache(int m) : capacity(m), head(nullptr), tail(nullptr){}
//
//    Node* getValue(int key) {
//
//        Node *node = map[key];
//
//        if(node == nullptr)
//            return nullptr;
//
//        if(head != node) {
//            removeList(node);
//            insertFront(node);
//        }
//
//        return node;
//    }
//
//    void removeList(Node *node) {
//        if(node == nullptr)
//            return;
//
//        if(node->prev) node->prev->next = node->next;
//        if(node->next) node->next->prev = node->prev;
//        if(head == node) head = head->next;
//        if(tail = node) tail = tail->prev;
//    }
//
//    void insertFront(Node *node) {
//
//        if(head == nullptr) {
//            head = node;
//            tail = node;
//            return;
//        }
//
//        node->next = head;
//        head->prev = node;
//        head = node;
//    }
//
//    void removeKey(int key) {
//
//
//        if(map.find(key) == map.end())
//            return;
//
//        Node *node = map[key];
//
//        removeList(node);
//        map.erase(key);
//    }
//
//
//    void setKeyValue(int key, int value) {
//
//        removeKey(key);
//
//        Node *node = new Node(key, value);
//
//        if(map.size() == capacity)
//            removeKey(tail->key);
//
//        insertFront(node);
//        map[key] = node;
//    }
//
//    void printList() {
//        Node *curr = head;
//        while(curr) {
//            curr->display();
//            curr = curr->next;
//        }
//        cout << endl;
//    }
//};
//
//int main() {
//
//    Cache cache(4);
//    cache.setKeyValue(1, 1);
//    cache.setKeyValue(2, 2);
//    cache.setKeyValue(3, 3);
//    cache.setKeyValue(4, 4);
//    cache.printList();
//
//    cache.getValue(3);
//    cache.printList();
//
//    cache.setKeyValue(5, 5);
//    cache.printList();
//
//    return 0;
//}
