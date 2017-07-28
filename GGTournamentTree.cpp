//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//#define rep(i, n) for(int i = 0; i < n; i++)
//#define fi(i, a, b) for(int i = a; i <= b; i++)
//#define fd(i, a, b) for(int i = a; i >= b; i--)
//
//class Node {
//public:
//    int index;
//    Node *left, *right;
//
//    Node(int i) : index(i) {}
//};
//
//void traverse(Node *root, int& second, int a[]) {
//
//    if(root == nullptr || ( root->left == nullptr && root->right == nullptr) )
//        return;
//
//    Node *child1 = root->left->index == root->index ? root->left : root->right;
//    Node *child2 = child1 == root->left ? root->right : root->left;
//
//    if( a[child2->index] < second )
//        second = a[child2->index];
//
//    traverse(child1, second, a);
//}
//
//void find(int a[], int n) {
//
//    queue<Node*> list;
//
//    int i = 0;
//
//    if(n % 2 != 0) {
//        i = 1;
//        Node *node = new Node(0);
//        list.push(node);
//    }
//
//    while(i < n) {
//
//        Node *t1 = new Node(i);
//        Node *t2 = new Node(i + 1);
//
//        Node *root = a[i] < a[i + 1] ? new Node(i) : new Node(i + 1);
//        root->left = t1;
//        root->right = t2;
//        list.push(root);
//        i += 2;
//    }
//
//    while(list.size() != 1) {
//
//        int n1 = list.size();
//
//        int j = 0;
//
//        if(n1 % 2 != 0) {
//            j = 1;
//            Node *t1 = list.front();
//            list.pop();
//        }
//
//        while(j < n1) {
//            Node *t1 = list.front();
//            list.pop();
//            Node *t2 = list.front();
//            list.pop();
//
//            Node *root = a[t1->index] < a[t2->index] ? new Node(t1->index) : new Node(t2->index);
//
//            root->left = t1;
//            root->right = t2;
//            list.push(root);
//            j += 2;
//        }
//    }
//
//    int second = INT32_MAX;
//    traverse(list.front(), second, a);
//    cout << "first: " << a[list.front()->index] << " Second: " << second;
//}
//
//int main() {
//
//    int arr[] = {5, 6, 1, 2, 4, 3};
//    int n = sizeof(arr)/sizeof(arr[0]);
//    find(arr, n);
//    return 0;
//}