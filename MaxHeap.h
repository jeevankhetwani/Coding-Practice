//
// Created by jeevan on 1/20/17.
//

#ifndef TEST1_MAXHEAP_H
#define TEST1_MAXHEAP_H

#include<vector>

class MaxHeap {
    std::vector<int> a;

public:
    MaxHeap() {}

    MaxHeap(std::vector<int> b) {
        a = b;
    }

    void buildHeap() {
        for (int i = parent(size()); i >= 0; i--)
            reHeapDown(i);
    }

    void swap(int& a, int& b) {
        int temp = a;
        a = b;
        b = temp;
    }

    void reHeapDown(int i) {

        int leftChild = getLeftChild(i);
        int rightChild = getRightChild(i);
        int largest = i;

        if ( leftChild <= size() & a[leftChild] > a[largest] )
                largest = leftChild;

        if ( rightChild <= size() & a[rightChild] > a[largest] )
            largest = rightChild;

        if (largest != i) {
            swap(a[i], a[largest]);
            reHeapDown(largest);
        }
    }

    void reHeapUp(int i) {
        int par;

        while ( ( par = parent(i) ) >= 0 && a[par] < a[i] ) {
            swap(a[i], a[par]);
            reHeapUp(par);
        }
    }

    void insert(int x) {
        a.push_back(x);
        reHeapUp(size() - 1);
    }

    int getLeftChild(int i) {
        return 2 * i + 1;
    }

    int getRightChild(int i) {
        return 2 * ( i + 1 );
    }

    int parent(int i) {
        return ( i - 1 ) / 2;
    }

    int size() {
        return a.size();
    }

    void remove(int x) {

        int index = search(x);

        if(index  == -1)
            return;

        swap(a[index], a[size() - 1]);
        a.erase(a.end() - 1);
        reHeapDown(index);

    }

    int search(int x, int index = 0) {

        int i;

        if(a[index] == x)
            return index;

        if(a[index] < x)
            return -1;

        int leftChild = getLeftChild(index);

        if(leftChild <= size())
            i = search(x, leftChild);

        if(i != -1) return -1;

        int rightChild = getRightChild(index);

        return rightChild <= size() ? search(x, rightChild) : -1;

    }

    bool empty() { return size() == 0; }
    int top() {
        return a[0];
    }

    void pop() {
        swap(a[0], a[size() - 1]);
        a.erase(a.end() - 1);
        reHeapDown(0);
    }
};
#endif //TEST1_MAXHEAP_H
