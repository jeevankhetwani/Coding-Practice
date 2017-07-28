////
//// Created by jeevan on 4/16/17.
////
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//typedef pair<int, int> mypair;
//
//
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
//bool comparator(const mypair& p1, const mypair& p2) {
//
//    if(p1.first == p2.first)
//        return p1.second < p2.second;
//
//    return p1.first < p2.first;
//
//}
//
//mypair smallestAndShortest(Node *root) {
//
////    first gives height, second gives dist from root
//
//    mypair ans (root->data, 0);
//
//    for(auto itr = root->children.begin(); itr != root->children.end(); itr++) {
//
//        Node *child = *itr;
//
//        if ( child->data < root->data) {
//            ans = min(ans, smallestAndShortest(child));
//            ans.second += 1;
//        }
//
//    }
//
//    return ans;
//}
//
//int main() {
//
//    Node *root = new Node(6);
//
//    Node *child1 = new Node(7);
//    child1->addChild(3);
//    child1->addChild(7);
//    child1->addChild(8);
//
//    Node *child2 = new Node(9);
//    child2->addChild(2);
//    child2->addChild(4);
//
//
//    Node *child3 = new Node(8);
//    child3->addChild(5);
//    child3->addChild(7);
//    child3->addChild(3);
//    child3->children[2]->addChild(2);
//    child3->children[2]->children[0]->addChild(1);
//
//
//    root->addChild(child1);
//    root->addChild(child2);
//    root->addChild(child3);
//
//    mypair p = smallestAndShortest(root);
//    printf("%d %d", p.first, p.second);
//    return 0;
//}
//
