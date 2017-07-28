////
//// Created by jeevan on 4/16/17.
////
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Node {
//public:
//    int data;
//    vector<Node*> children;
//
//    Node(int d) : data(d) {
//        cout << children.size() ;
//    }
//
//    void addChild(int n) {
//        children.push_back(new Node(n));
//    }
//
//    void addChild(Node *node) {
//        children.push_back(node);
//    }
//};
//
//int longest(Node *root) {
//
//    if(!root)
//        return 0;
//
//    int ans = 0;
//
//    for(auto child = root->children.begin(); child != root->children.end(); child++) {
//
//        if (root->data <= (*child)->data)
//            ans = max(ans, longest(*child));
//
//    }
//    return ans + 1;
//}
//
//int main() {
//
//    Node *root = new Node(3);
//
//    Node *child1 = new Node(1);
//    child1->addChild(3);
//    child1->addChild(7);
//    child1->addChild(8);
//
//    Node *child2 = new Node(3);
//    child2->addChild(2);
//    child2->addChild(4);
////    child2->children[1]->addChild(5);
//
//    Node *child3 = new Node(4);
//    child3->addChild(5);
//    child3->addChild(7);
////
//    root->addChild(child1);
//    root->addChild(child2);
//    root->addChild(child3);
//
//    cout << longest(root);
//    return 0;
//}
