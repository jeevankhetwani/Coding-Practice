////
//// Created by jeevan on 4/2/17.
////
//#include<iostream>
//#include <stack>
//
//using namespace std;
//
//
//class MyQueue {
//public:
//    void enqueue(int x) {
//        st1.push(x);
//    }
//
//    int dequeue() {
//
//        if(empty()) {
//            cout << "Queue empty";
//            return -1;
//        }
//
//        if(st2.empty())
//            shift();
//
//        int temp = st2.top(); st2.pop();
//        return temp;
//    }
//
//
//    bool empty() {
//        return st1.empty() && st2.empty();
//    }
//
//
//    int front() {
//
//        if(empty()) {
//            cout << "Queue empty";
//            return -1;
//        }
//
//        if(st2.empty())
//            shift();
//
//        return st2.top();
//    }
//
//private:
//
//    stack<int> st1, st2;
//
//    void shift() {
//        int temp;
//
//        while(!st1.empty()) {
//            temp = st1.top(); st1.pop();
//            st2.push(temp);
//        }
//    }
//
//};
//
//
//int main() {
//
//    MyQueue mq;
//
//
//    return 0;
//}
