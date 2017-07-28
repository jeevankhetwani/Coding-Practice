////
//// Created by jeevan on 5/20/17.
////
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//const int N = 100;
//
//// you are required to complete this function
//// function should print the required range
//
//class Node {
//public:
//    int data, row, col;
//    Node() {}
//
//    Node(int i, int j, int d): row(i), col(j), data(d) {}
//};
//
//class MinHeap {
//
//public:
//    int heapSize;
//    Node **arr;
//
//    MinHeap(int n) {
//        heapSize = n;
//        arr = new Node*[heapSize];
//    }
//
//    int leftChild(int i) { return 2 * i + 1; }
//
//    int rightChild(int i) { return 2 * i + 2; }
//
//    int parent(int i) { return (i - 1) / 2; }
//
//    void addNode(Node *node) {
//        arr[node->row] = node;
//    }
//
//    void swap(Node*& node1, Node*& node2) {
//        Node *tmp = node1;
//        node1 = node2;
//        node2 = tmp;
//    }
//
//    void heapify(int i) {
//
//        int left = leftChild(i);
//        int right = rightChild(i);
//        int smallest = i;
//
//        if(left < heapSize && arr[left]->data < arr[smallest]->data)
//            smallest = left;
//
//        if(right < heapSize && arr[right]->data < arr[smallest]->data)
//            smallest = right;
//
//        if(smallest != i) {
//            swap(arr[i], arr[smallest]);
//            heapify(smallest);
//        }
//    }
//
//    void buildHeap() {
//
//        for(int i = parent(heapSize - 1); i >= 0; i--)
//            heapify(i);
//    }
//
//    Node* extractMin() {
//        if(heapSize == 0)
//            return nullptr;
//
//        return arr[0];
//    }
//
//    void updateMin(Node* root) {
//        arr[0] = root;
//        heapify(0);
//    }
//};
//
//Node* createNode(int arr[][N], int i, int j) {
//
//    Node *node = new Node(i, j, arr[i][j]);
//    return node;
//}
//
//void findSmallestRange(int arr[][N], int k, int n) {
//
//    int currMin, currMax = INT32_MIN;
//    int rangeMin = 0, rangeMax = INT32_MAX;
//    MinHeap minHeap(k);
//
//    for(int i = 0; i < k; i++) {
//
//        Node *node = createNode(arr, i, 0);
//
//        minHeap.addNode(node);
//
//        if(arr[i][0] > currMax)
//            currMax = arr[i][0];
//    }
//
//    minHeap.buildHeap();
//
//    while(1) {
//
//        Node *root = minHeap.extractMin();
//        currMin = root->data;
//
//        if(currMax - currMin < rangeMax - rangeMin) {
//            rangeMax = currMax;
//            rangeMin = currMin;
//        }
//
//        if(root->col == n - 1)
//            break;
//
//        Node *node = createNode(arr, root->row, root->col + 1);
//
//        if(node->data > currMax)
//            currMax = node->data;
//
//        minHeap.updateMin(node);
//    }
//
//    cout << rangeMin  << " " << rangeMax;
//}
//
//int main() {
//
//    int a[][N] = {
//            {4, 7, 9, 12, 50},
//            {0, 8, 10, 14, 49},
//            {6, 12, 16, 30, 50}
//    };
//
//    findSmallestRange(a, 3, 5);
//
//}
