//
// Created by jeevan on 12/25/16.
//

#ifndef TEST1_MYSTACK_H
#define TEST1_MYSTACK_H
#include<iostream>
#include<stack>

class myStack {
public:
    myStack() {}

    std::stack<int> values, min;

    void display() {
        if (values.empty()) {
            std::cout << std::endl;
            return;
        }

        int t = values.top();
        std::cout << t << " ";
        values.pop();
        display();
        values.push(t);
    }

    bool isEmpty() {
        return values.empty();
    }

    void mypush(int k) {
        values.push(k);
        if ( min.empty() ||  k <= min.top() )
            min.push(k);
    }

    int mypop() {
        int t = values.top();
        values.pop();

        if(t==min.top())
            min.pop();
    }

    int getMin() {
        return min.top();
    }
};

#endif //TEST1_MYSTACK_H
