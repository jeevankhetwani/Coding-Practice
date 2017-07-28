//
// Created by jeevan on 1/20/17.
//
#include<iostream>
#include<vector>
#include "MaxHeap.h"
#include "MinHeap.h"

using namespace std;

class MinMax {
    MinHeap right;
    MaxHeap left;

public:
    MinMax() {}

    void add(int x) {

        if ( left.size() == 0 ) {
            left.insert(x);
            return;
        }

        if ( x <= left.top() ) {
            left.insert(x);

            if ( left.size() - right.size() > 1 ) {
                int temp = left.top();
                left.pop();
                right.insert(temp);
            }

        } else {
            right.insert(x);

            if ( right.size() > left.size() ) {
                int temp = right.top();
                right.pop();
                left.insert(temp);
            }

        }
    }

    int getMedian() {

        if (left.size() != right.size())
            return left.top();

        return ( left.top() + right.top() ) / 2;

    }


};


int main() {

    MinMax mm;
    mm.add(6); mm.add(8); mm.add(4); mm.add(9); mm.add(7); mm.add(2); mm.add(3); mm.add(0);
     cout << mm.getMedian();
    return 0;
}
