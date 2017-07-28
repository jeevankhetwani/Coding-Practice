//
// Created by jeevan on 1/20/17.
//

#ifndef TEST1_MINHEAP_H
#define TEST1_MINHEAP_H

#include<vector>

class MinHeap {
    int *a, n;

public:
    MinHeap() {}

    MinHeap(int *arr, int size) {
        a = arr;
        n = size;
    }

    void buildHeap() {

        for (int i = parent(n - 1); i >= 0; i--)
            reHeapDown(i);

    }

    void swap(int& a, int& b) {
        int temp = a;
        a = b;
        b = temp;
    }

    void reHeapUp(int i) {
        int par;

        while ( ( par = parent(i) ) >= 0 && a[par] > a[i] ) {
            swap(a[i], a[par]);
            reHeapUp(par);
        }
    }

//    void insert(int x) {
//        a.push_back(x);
//        reHeapUp(size() - 1);
//    }

    void reHeapDown(int i) {

        int leftChild = getLeftChild(i);
        int rightChild = getRightChild(i);
        int smallest = i;

        if ( leftChild < n & a[leftChild] < a[smallest] )
            smallest = leftChild;

        if ( rightChild < n & a[rightChild] < a[smallest] )
            smallest = rightChild;

        if (smallest != i) {
            swap(a[i], a[smallest]);
            reHeapDown(smallest);
        }
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

//    void remove(int x) {
//
//        int index = search(x);
//
//        if(index  == -1)
//            return;
//
//        swap(a[index], a[size() - 1]);
//        a.erase(a.end() - 1);
//        reHeapDown(index);
//
//    }
//
//    int search(int x, int index = 0) {
//
//        int i;
//
//        if(a[index] == x)
//            return index;
//
//        if(a[index] > x)
//            return -1;
//
//        int leftChild = getLeftChild(index);
//
//        if(leftChild <= size())
//            i = search(x, leftChild);
//
//        if(i != -1) return -1;
//
//        int rightChild = getRightChild(index);
//
//        return rightChild <= size() ? search(x, rightChild) : -1;
//
//    }
//
//    bool empty() { return size() == 0; }
//
//    int top() {
//        return a[0];
//    }
//    void pop() {
//        swap(a[0], a[size() - 1]);
//        a.erase(a.end() - 1);
//        reHeapDown(0);
//    }

    int extractMin() {

        int root = a[0];

        if(n > 1) {
            a[0] = a[n - 1];
            reHeapDown(0);
        }

        n--;
        return root;
    }

    int replaceMin(int x) {

        int root = a[0];

        a[0] = x;

        if( x > root)
            reHeapDown(0);

        return root;
    }

};

#endif //TEST1_MINHEAP_H
