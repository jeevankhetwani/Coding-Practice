////
//// Created by jeevan on 12/25/16.
////
//#include<iostream>
//#include<stack>
//using namespace std;
//
//class MyQueue {
//private:
//    stack<int> enqueue;
//    stack<int> deque;
//
//public:
//    void insert(int k) {
//        enqueue.push(k);
//    }
//
//    void move() {
//        int t;
//        while(!enqueue.empty()) {
//            t = enqueue.top();
//            enqueue.pop();
//            deque.push(t);
//        }
//    }
//
//    int remove() {
//        if(deque.empty())
//            move();
//
//        if(deque.empty())
//            return -1;
//
//        int t = deque.top();
//        deque.pop();
//        return t;
//    }
//
//    void display() {
//        int t;
//        stack<int> temp1 = enqueue;
//        stack<int> temp2 = deque;
//
//        while(!deque.empty()) {
//            t = deque.top();
//            cout << t << " ";
//            deque.pop();
//        }
//
//        move();
//
//        while(!deque.empty()) {
//            t = deque.top();
//            cout << t << " ";
//            deque.pop();
//        }
//        cout << endl;
//        enqueue = temp1;
//        deque = temp2;
//    }
//
//};
//
//
//int main() {
//
//    MyQueue *queue = new MyQueue();
//
//    queue->insert(1);
//    queue->insert(2);
//    queue->insert(3);
//    queue->insert(4);
//    queue->insert(5);
//    queue->display();
//
//    queue->remove();
//    queue->display();
//
//    queue->remove();
//    queue->display();
//
//
//
//    return 0;
//}