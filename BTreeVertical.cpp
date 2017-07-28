////
//// Created by jeevan on 5/10/17.
////
//#include <iostream>
//#include <unordered_map>
//#include <map>
//#include <vector>
//
//using namespace std;
//
//class Node {
//public:
//    int data;
//    Node *left, *right;
//    Node(int v): data(v), left(nullptr), right(nullptr) {}
//};
//
//void findUtil(Node *root, int d, map<int, vector<int>>& mymap) {
//
//    mymap[d].push_back(root->data);
//
//    if(root->left)
//        findUtil(root->left, d - 1, mymap);
//
//    if(root->right)
//        findUtil(root->right, d + 1, mymap);
//}
//
//void find(Node *root) {
//
//    if(root == nullptr)
//        return;
//
//    map<int, vector<int>> mymap;
//
//    findUtil(root, 0, mymap);
//
//    for(auto entry: mymap) {
//        for(int x: entry.second)
//            cout << x << " ";
//        cout << endl;
//    }
//}
//
//int main() {
//
//    Node *root = new Node(1);
//    root->left = new Node(2);
//    root->right = new Node(3);
//    root->left->left = new Node(4);
//    root->left->right = new Node(5);
//    root->right->left = new Node(6);
//    root->right->right = new Node(7);
//    root->right->left->right = new Node(8);
//    root->right->right->right = new Node(9);
//    cout << "Vertical order traversal is \n";
//    find(root);
//
//    return 0;
//}
