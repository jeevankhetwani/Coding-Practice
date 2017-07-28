////
//// Created by jeevan on 5/20/17.
////
//#include <iostream>
//#include <vector>
//#include <stack>
//#include <unordered_map>
//
//using namespace std;
//
//class Graph {
//    int V;
//    vector<int> *adj;
//
//public:
//    Graph(int v) {
//        V = v;
//        adj = new vector<int>[V];
//    }
//
//    void addEdge(int i, int j) {
//        adj[i].push_back(j);
//    }
//
//    void visit(int i, bool visited[], stack<int>& st) {
//
//        visited[i] = true;
//
//        for(int x: adj[i])
//            if(!visited[x])
//                visit(x, visited, st);
//
//        st.push(i);
//    }
//
//    vector<int>* topologicalSort() {
//
//        stack<int> st;
//        bool visited[V];
//
//        for(int i = 0; i < V; i++)
//            visited[i] = false;
//
//        for(int i = 0; i < V; i++)
//            if(!visited[i])
//                visit(i, visited, st);
//
//        vector<int> *v = new vector<int>();
//        v->reserve(V);
//
//        while(!st.empty()) {
//            int top = st.top();
//            v->push_back(top);
//            st.pop();
//        }
//
//        return v;
//    }
//};
//
//int findMismatchIndex(string& s1, string& s2) {
//
//    int i, n = min(s1.size(), s2.size());
//
//    for(i = 0; i < n; i++)
//        if(s1[i] != s2[i])
//            break;
//
//    if(i == n)
//        return -1;
//
//    return i;
//}
//
//
//string printOrder(string dict[], int N, int k) {
//
//    int i = 0;
//    char chars[k], ch1, ch2;
//    unordered_map<int, int> charToGraph;
//
//    Graph graph(k);
//
//    for(int j = 1; j < N; j++) {
//
//        int index = findMismatchIndex(dict[j - 1], dict[j]);
//
//        if(index == -1)
//            continue;
//
//        ch1 = dict[j - 1][index];
//        ch2 = dict[j][index];
//
//        if(charToGraph.find(ch1) == charToGraph.end()) {
//            charToGraph[ch1] = i;
//            chars[i++] = ch1;
//        }
//
//        if(charToGraph.find(ch2) == charToGraph.end()) {
//            charToGraph[ch2] = i;
//            chars[i++] = ch2;
//        }
//
//        graph.addEdge(charToGraph[ch1], charToGraph[ch2]);
//
//    }
//
//    vector<int> *v = graph.topologicalSort();
//
//    string s = "";
//    for(int i: *v)
//        s.push_back(chars[i]);
//
//    return s;
//}
//
//int main() {
//
//
//    string words[] = {"caa", "aaa", "aab"};
//    int n = sizeof(words) / sizeof(words[0]);
//
//    cout << printOrder(words, n, 3);
//    return 0;
//
//}
