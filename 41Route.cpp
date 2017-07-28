////
//// Created by jeevan on 12/26/16.
////
//#include <iostream>
//#include <vector>
//#include <string>
//#include <unordered_map>
//#include <stack>
//#include <set>
//
//using namespace std;
//class Node {
//private:
//    string name;
//    vector<string> neigh;
//
//public:
//    Node() {}
//
//    Node(string s) {
//        name = s;
//    }
//
//    Node(string s, vector<string> n) {
//        name = s;
//        neigh = n;
//    }
//
//    string getName() {
//        return name;
//    }
//
//    vector<string> getNeigh() {
//        return neigh;
//    }
//
//};
//
//class Graph {
//private:
//    unordered_map<string, Node> nodemap;
//
//public:
//    Node getNode(string key) {
//        return nodemap[key];
//    }
//
//    void addNode(Node node) {
//        nodemap.insert(pair<string, Node>(node.getName(), node));
//    }
//
//    bool pathExist(string s1, string s2) {
//
//        set<string> visited;
//        vector<string> neigh;
//        stack<string> st;
//
//        visited.insert(s1);
//        st.push(s1);
//
//        while(!st.empty()) {
//                neigh = getNode(st.top()).getNeigh();
//                st.pop();
//                for(auto x: neigh) {
//                    if ( x == s2 )
//                        return true;
//
//                    if ( visited.find(x) == visited.end() ) {
//                        st.push(x);
//                        visited.insert(x);
//                    }
//                }
//        }
//        return false;
//    }
//};
//
//int main() {
//    Graph g;
//    Node node1 ("1", {"2", "5"});
//    Node node2 ("2", {"3", "4"});
//    Node node3 ("3", {});
//    Node node4 ("4", {});
//    Node node5 ("5", {});
//
//    g.addNode(node1);
//    g.addNode(node2);
//    g.addNode(node3);
//    g.addNode(node4);
//    g.addNode(node5);
//
//    cout << boolalpha;
//    cout << g.pathExist("1", "2");
//
//
//    return 0;
//}
//
//
