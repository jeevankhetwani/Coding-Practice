////
//// Created by jeevan on 4/23/17.
////
//#include <bits/stdc++.h>
//#include <string>
//using namespace std;
//
//template <class T>
//class Stack {
//    int top, capacity;
//    T *arr;
//public:
//    Stack(int c) {
//        capacity = c;
//        arr = new T[capacity];
//        top = -1;
//    }
//
//    bool  isEmpty() {
//        return top == -1;
//    }
//
//    T peek();
//
//    T pop() {
//        if(isEmpty()) {
//            cout << "Stack Empty";
//            return nullptr;
//        }
//
//        return arr[top--];
//    }
//
//    bool push(T x) {
//        if(top == capacity - 1) {
//            cout << "Stack Full";
//            return false;
//        }
//
//        arr[++top] = x;
//        return true;
//    }
//};
//
//template <class T>
//T Stack<T>::peek() {
//    if(isEmpty()) {
//        cout << "Stack Empty";
//        return nullptr;
//    }
//
//    return arr[top];
//}
//
//
//int main() {
//
//    Stack<string> st(3);
//    string s =  st.peek();
//
//    st.push("a");
//    st.push("b");
//    st.push("c");
//    st.push("d");
//
//    cout << st.pop();
//
//
//    return 0;
//}