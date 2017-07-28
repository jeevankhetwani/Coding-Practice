////
//// Created by jeevan on 4/2/17.
////
//#include <iostream>
//#include <stack>
//using namespace std;
//
//
//
//void sort(stack<int>& st1) {
//
//    stack<int> st2;
//
//    while(!st1.empty()) {
//
//        int top1 = st1.top();
//        st1.pop();
//
//        while(!st2.empty() && top1 < st2.top()) {
//            int temp = st2.top();
//            st2.pop();
//            st1.push(temp);
//        }
//
//        st2.push(top1);
//
//    }
//
//    while(!st2.empty()) {
//        int temp = st2.top();
//        st2.pop();
//        st1.push(temp);
//    }
//
//}
//
//
//int main() {
//    stack<int> st1;
//
//}
