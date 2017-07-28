////
//// Created by jeevan on 4/12/17.
////
//#include <iostream>
//#include <vector>
//#include <unordered_map>
//#include <unordered_set>
//#include <queue>
//
//using namespace std;
//
//class Node
//{
//public:
//    int data;
//    vector<Node*> neighbours;
//
//    Node(int d): data(d) {}
//
//    void addNeighbor(Node* neigh) {
//        neighbours.push_back(neigh);
//    }
//
//};
//
//class Graph {
//
//public:
//    unordered_set<Node*> nodes;
//
//    Graph() {}
//
//    void addNode(Node* node) {
//        nodes.insert(node);
//    }
//
//};
//
//Node* copyNode(Node *root, unordered_map<Node*, Node*>& mymap) {
//// using DFS
//    if(mymap.find(root) != mymap.end())
//        return mymap[root];
//
//    Node *node = new Node(root->data);
//    mymap[root] = node;
//
//    for(auto neigh: root->neighbours)
//        node->neighbours.push_back(copyNode(neigh, mymap));
//
//    return node;
//}
//
//
////Graph* copyGraph(Graph* graph) {
////// using DFS
////    unordered_map<Node*, Node*> mymap;
////
////    Graph *clonedGraph = new Graph();
////
////    for(auto itr = graph->nodes.begin(); itr != graph->nodes.end(); itr++) {
////        Node *clonedNode = copyNode(*itr, mymap);
////        clonedGraph->addNode(clonedNode);
////    }
////
////    return clonedGraph;
////}
//
////Graph* copyGraph2(Graph* graph) {
////// using BFS
////    unordered_map<Node*, Node*> mymap;
////    queue<Node*> myqueue;
////    Graph* clonedGraph = new Graph();
////
////    for(auto itr = graph->nodes.begin(); itr != graph->nodes.end(); itr++) {
////
////        Node *root = *itr;
////
////        if(mymap.find(root) != mymap.end())
////            continue;
////
////        Node *clonedNode = new Node(root->data);
////        mymap[root] = clonedNode;
////        myqueue.push(root);
////
////        while (!myqueue.empty()) {
////
////            Node *front = myqueue.front();
////            myqueue.pop();
////
////            Node *clonedNode = mymap[front];
////
////            for (auto neigh: front->neighbours) {
////
////                if (mymap.find(neigh) == mymap.end()) {
////                    Node *child = new Node(neigh->data);
////                    mymap[neigh] = child;
////                    myqueue.push(neigh);
////                }
////
////                clonedNode->neighbours.push_back(mymap[neigh]);
////            }
////        }
////    }
////
////    return clonedGraph;
////}
//
//Graph* copyGraph(Graph* graph) {
//
//    unordered_map<Node*, Node*> mymap;
//    Graph* clonedGraph = new Graph;
//
////     copy Nodes
//    for(auto itr = graph->nodes.begin(); itr != graph->nodes.end(); itr++) {
//        Node* clonedNode = new Node((*itr)->data);
//        clonedGraph->addNode(clonedNode);
//        mymap[*itr] = clonedNode;
//    }
//
////    copy Neighbors
//
//    for(auto itr = graph->nodes.begin(); itr != graph->nodes.end(); itr++) {
//        Node *node = *itr;
//        Node *clonedNode = mymap[node];
//
//        clonedGraph->addNode(clonedNode);
//
//        for(auto itr2 = node->neighbours.begin(); itr2 != node->neighbours.end(); itr2++) {
//            Node* neigh = *itr2;
//            clonedNode->addNeighbor(mymap[neigh]);
//        }
//    }
//
//    return clonedGraph;
//}
//
//Graph* buildGraph() {
//
//    Node *node1 = new Node(1);
//
//    Node *node2 = new Node(2);
//
//    Node *node3 = new Node(3);
//
//    Node *node4 = new Node(4);
//
//    Node *node5 = new Node(5);
//
//    vector<Node *> v;
//    v.push_back(node2);
//    v.push_back(node4);
//    node1->neighbours = v;
//    v.clear();
//
//    v.push_back(node1);
//    v.push_back(node3);
//    node2->neighbours = v;
//    v.clear();
//
//    v.push_back(node2);
//    v.push_back(node4);
//    node3->neighbours = v;
//    v.clear();
//
//    v.push_back(node3);
//    v.push_back(node1);
//    node4->neighbours = v;
//
//    Graph *graph = new Graph;
//    graph->addNode(node1);
//    graph->addNode(node2);
//    graph->addNode(node3);
//    graph->addNode(node4);
//    graph->addNode(node5);
//
//    return graph;
//}
//
//void bfs(Graph *graph) {
//
//    unordered_set<Node*> visited;
//    queue<Node*> myqueue;
//
//
//    for(auto itr = graph->nodes.begin(); itr != graph->nodes.end(); itr++) {
//
//
//        Node* root = *itr;
//
//        if(visited.find(root) != visited.end())
//            continue;
//
//        myqueue.push(root);
//        visited.insert(root);
//
//        while (!myqueue.empty()) {
//
//            Node *front = myqueue.front();
//            myqueue.pop();
//
//            cout << "Value of Node " << front->data << " Neibors: ";
////            cout << "Address of Node " << front << "\n";
//
//            for (auto neigh: front->neighbours) {
//                cout << neigh->data << " ";
//                if (visited.find(neigh) == visited.end()) {
//                    myqueue.push(neigh);
//                    visited.insert(neigh);
//                }
//            }
//
//            cout << endl;
//        }
//    }
//}
//
//int main() {
//
//    Graph *src = buildGraph();
//    cout << "BFS Traversal before cloning\n";
//    bfs(src);
//    cout << endl;
//
//    Graph *newsrc = copyGraph(src);
//    cout << "BFS Traversal after cloning\n";
//    bfs(newsrc);
//
//    return 0;
//}
