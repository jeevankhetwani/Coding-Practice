////
//// Created by jeevan on 1/14/17.
////
//
//#include<iostream>
//#include<unordered_map>
//
//using namespace std;
//
//class cache {
//    class Node {
//    public:
//        int key, val;
//        Node *prev, *next;
//
//        Node(int k, int v) {
//            key = k;
//            val = v;
//            prev = next = nullptr;
//        }
//
//    };
//
//    Node *head, *tail;
//    unordered_map<int, Node*> map;
//    int maxCapacity;
//
//public:
//    cache(int m) {
//        maxCapacity = m;
//        head = tail = nullptr;
//    }
//
//    void insertFront(Node* node) {
//
//        if ( head == nullptr )
//            head = tail = node;
//        else {
//            head->prev = node;
//            node->next = head;
//            head = node;
//        }
//
//        head->prev = nullptr;
//    }
//
//    void remove(Node *node) {
//
//        if ( node == tail ) {
//            tail = tail->prev;
//            tail->next = nullptr;
//        } else {
//            node->next->prev = node->prev;
//            node->prev->next = node->next;
//        }
//
//    }
//
//    void insert(int key, int val) {
//
//        if ( map.find(key) != map.end() ) {
//            Node* node = map[key];
//            remove(node);
//            insertFront(node);
//        } else {
//
//            if ( map.size() == maxCapacity ) {
//                int key = tail->key;
//                map.erase(key);
//                remove(tail);
//            }
//
//            Node* node = new Node(key, val);
//            insertFront(node);
//            map[key] = node;
//        }
//    }
//
//    Node* retrieve(int key) {
//        if ( map.find(key) == map.end() )
//            return nullptr;
//
//        Node *node = map[key];
//        remove(node);
//        insertFront(node);
//        return node;
//    }
//
//    void display() {
//        Node* curr = head;
//
//        while ( curr != nullptr ) {
//            cout << curr->key << "," << curr->val << " ";
//            curr = curr->next;
//        }
//        cout << endl;
//    }
//};
//
//int main() {
//
//    cache lc(3);
//    lc.insert(0, 10);
//    lc.insert(1, 11);
//    lc.display();
//
////    lc.insert(0, 10);
////    lc.display();
//
//    lc.insert(2, 12);
//    lc.insert(3, 13);
//    lc.display();
//
//    return 0;
//}