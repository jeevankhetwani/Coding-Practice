////
//// Created by jeevan on 12/25/16.
////
//#include<iostream>
//#include<vector>
//#include<stack>
//
//using namespace std;
//class StackPlates {
//    vector<stack<int>*> stacks;
//    const int MAXSIZE = 3;
//
//public:
//    void mypush(int k) {
//
//        stack<int> *st;
//
//        if( stacks.empty() ||   ( st = stacks.back())->size() == MAXSIZE ) {
//            stack<int> *newStack = new stack<int>();
//            newStack->push(k);
//            stacks.push_back(newStack);
//        } else
//            st->push(k);
//    }
//
//    int mypop() {
//        stack<int> *st = stacks.back();
//        int t = st->top();
//        st->pop();
//
//        if(st->empty())
//            stacks.erase(stacks.end() - 1);
//    }
//
//    void display() {
//
//        vector<stack<int>*>::const_iterator itr;
//        stack<int> temp;
//
//        for(itr = stacks.begin(); itr != stacks.end(); itr++) {
//            temp = **itr;
//
//            while(!temp.empty()) {
//                cout << temp.top() << " ";
//                temp.pop();
//            }
//            cout << endl;
//        }
//    }
//
//    int mypop(int i) {
//        if( i >= stacks.size() )
//            return -1;
//
//        stack<int>* st = stacks.at(i);
//        int t = st->top();
//        st->pop();
//    }
//};
//
//
//int main() {
//    StackPlates *stacks = new StackPlates();
//    stacks->mypush(1);
//    stacks->mypush(2);
//    stacks->mypush(3);
//    stacks->mypush(4);
//    stacks->mypush(5);
//    stacks->display();
//
////    stacks->mypop();
////    stacks->display();
//
////    stacks->mypop();
////    stacks->display();
//
////    stacks->mypop();
////    stacks->display();
//
//
//    stacks->mypop(3);
//    stacks->display();
//
//    stacks->mypop(1);
//    stacks->display();
//
//    stacks->mypop(0);
//    stacks->display();
//
//    return 0;
//
//}
