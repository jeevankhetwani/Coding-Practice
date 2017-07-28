////
//// Created by jeevan on 5/6/17.
////
//#include <iostream>
//#include <vector>
//#include <cstring>
//#include <stack>
//
//using namespace std;
//
//class Graph{
//    int V;
//    vector<int> *adj;
//
//    bool isCyclicUtil(int v, bool visited[], bool stack[]) {
//
//        visited[v] = stack[v] = true;
//
//        for(int x: adj[v]) {
//            if(!visited[x] && isCyclicUtil(x, visited, stack))
//                return true;
//
//            if(stack[x])
//                return true;
//        }
//
//        stack[v] = false;
//        return false;
//    }
//
//    void visit(int v, bool visited[], stack<int>& st) {
//
//        visited[v] = true;
//
//        for(int x: adj[v])
//            if(!visited[x])
//                visit(x, visited, st);
//
//        st.push(v);
//    }
//
//    void dfs(int v, bool visited[]) {
//
//        visited[v] = true;
//
//        for(int x: adj[v])
//            if(!visited[x])
//                dfs(x, visited);
//    }
//
//    void reverseEdges() {
//
//        vector<int> *adjReversed = new vector<int>[V];
//
//        for(int i = 0; i < V; i++)
//            for(int x: adj[i])
//                adjReversed[x].push_back(i);
//
//        delete [] adj;
//        adj = adjReversed;
//    }
//
//    bool canReachAll(int v) {
//
//        bool visited[V];
//
//        for(int i = 0; i < V; i++)
//            visited[i] = false;
//
//        dfs(v, visited);
//
//        for(int i = 0; i < V; i++)
//            if(!visited[i] && !adj[i].empty())
//                return false;
//
//        return true;
//    }
//
//    bool stronglyConnectedUsingKosarajuDFS() {
//        int i;
//
//// find non zero degree vertex
//        for(i = 0; i < V; i++)
//            if(!adj[i].empty())
//                break;
//
//        if(i == V)
//            return true;
//
//        if(!canReachAll(i))
//            return false;
//
////        reverse Graph
//        reverseEdges();
//
//        if(!canReachAll(i))
//            return false;
//
//        reverseEdges();
//
//        return true;
//    }
//
//    bool isDegreeEqual() {
//
//        int degree[V];
//
//        for(int i = 0; i < V; i++)
//            degree[i] = adj[i].size();
//
//        for(int i = 0; i < V; i++)
//            for(int x: adj[i])
//                degree[x]--;
//
//        for(int i = 0; i < V; i++)
//            if(degree[i])
//                return false;
//
//        return true;
//
//    }
//
//public:
//    Graph(int v) {
//        V = v;
//        adj = new vector<int>[V];
//    }
//
//    void addEdge(int v1, int v2) {
//        adj[v1].push_back(v2);
//    }
//
//    bool isCyclic() {
//
//        bool visited[V], stack[V];
//
//        for(int i = 0; i < V; i++)
//            visited[i] = stack[i] = false;
//
//        for(int i = 0; i < V; i++)
//            if(!visited[i] && isCyclicUtil(i, visited, stack))
//                return true;
//
//        return false;
//    }
//
//    void topologicalSort() {
//        stack<int> st;
//        bool visited[V];
//
//        if(isCyclic()) {
//            cout << "Cyclic";
//            return;
//        }
//
//        for(int i = 0; i < V; i++)
//            visited[i] = false;
//
//        for(int i = 0; i < V; i++)
//            if(!visited[i])
//                visit(i, visited, st);
//
//        while(!st.empty()) {
//            cout << st.top() << " ";
//            st.pop();
//        }
//    }
//
//    bool isEuler() {
//        return stronglyConnectedUsingKosarajuDFS() && isDegreeEqual();
//    }
//
//};
//
//bool canBeChained(vector<string>& words) {
//
//    Graph g(26);
//
//    for(string word: words)
//        g.addEdge(word[0] - 'a', word[word.size() - 1] - 'a');
//
//    return g.isEuler();
//
//}
//
//int main() {
//
//    Graph g(5);
////    g.addEdge(1, 0);
////    g.addEdge(0, 2);
////    g.addEdge(2, 1);
////    g.addEdge(0, 3);
////    g.addEdge(3, 4);
////    g.addEdge(4, 0);
////
////    if (g.isEuler())
////        cout << "Given directed graph is eulerian \n";
////    else
////        cout << "Given directed graph is NOT eulerian \n";
//
////    if(g.isCyclic())
////        cout << "Graph contains cycle";
////    else
////        cout << "Graph doesn't contain cycle";
//
////    g.topologicalSort();
//
//    vector<string> words = {"cba", "abc", "kji", "ijk"};
//    cout << canBeChained(words);
//    return 0;
//}
//
