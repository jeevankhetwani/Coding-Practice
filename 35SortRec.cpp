////
//// Created by jeevan on 12/25/16.
////
//#include<iostream>
//#include<stack>
//
//using namespace std;
//
//
//void display(const stack<int>* st) {
//    int t;
//    stack<int> temp = *st;
//    while(!temp.empty()) {
//        t = temp.top();
//        cout << t << " ";
//        temp.pop();
//    }
//
//    cout << endl;
//}
//
//
//void insertInOrder(stack<int>* st, int t) {
//
//    if( st->empty() || st->top() >= t ) {
//        st->push(t);
//        return;
//    }
//
//    int temp = st->top();
//    st->pop();
//    insertInOrder(st, t);
//    st->push(temp);
//}
//
//void sort(stack<int>* st) {
//
//    if(st->empty())
//        return;
//
//    int t = st->top();
//    st->pop();
//    sort(st);
//    insertInOrder(st, t);
//}
//
//void sortNonRec(stack<int>* st) {
//    int t1, t2;
//    stack<int> temp;
//
//    while(!st->empty()) {
//
//          t1 = st->top();
//          st->pop();
//
//        while ( ! ( temp.empty() || temp.top() <= t1 ) ) {
//            t2 = temp.top();
//            temp.pop();
//            st->push(t2);
//        }
//
//        temp.push(t1);
//    }
//
//    while(!temp.empty()) {
//        t1 = temp.top();
//        temp.pop();
//        st->push(t1);
//    }
//
//}
//
//int main() {
//
//    stack<int> st;
//    st.push(3);
//    st.push(2);
//    st.push(5);
//    st.push(4);
//    st.push(1);
//    display(&st);
//
////    sort(&st);
////    display(&st);
//
//    sortNonRec(&st);
//    display(&st);
//    return 0;
//}
