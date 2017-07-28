////
//// Created by jeevan on 2/26/17.
////
////Given an array that stores a complete Binary Search Tree,
//// write a function that efficiently prints the given array in ascending order.
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int a[100], n = 0, index = 0;
//
//class Node {
//public:
//    int data;
//    Node *left, *right;
//    Node(int data): data(data) {}
//
//};
//
//void inorder(int *a, int n, int i = 0) {
//
//    if(i < n) {
//        inorder(a, n, 2 * i + 1);
//        cout << a[i] << " ";
//        inorder(a, n, 2 * i + 2);
//    }
//
//}
//
//
//int main() {
//
//    int n = 5;
//    int a[] = {4, 2, 5, 1, 3};
//    inorder(a, n);
//
//    return 0;
//}
//
