////
//// Created by jeevan on 5/6/17.
////
//#include <iostream>
//#include <vector>
//#include <cstring>
//
//using namespace std;
//
//class Graph{
//    int V;
//    vector<int> *adj;
//
//    bool isCyclicUtil(int v, bool visited[], int parent) {
//
//        visited[v] = true;
//
//        for(int x: adj[v]) {
//
//            if (x == parent)
//                continue;
//
//            if (visited[x])
//                return true;
//
//            if(isCyclicUtil(x, visited, v))
//                return true;
//        }
//
//        return false;
//    }
//
//    void dfs(int v, bool visited[]) {
//
//        visited[v] = true;
//
//        for(int x: adj[v])
//            if(!visited[x])
//                dfs(x, visited);
//
//    }
//
//    bool isConnected() {
//        int i;
//        bool visited[V];
//
//        for(i = 0; i < V; i++)
//            if(!adj[i].empty())
//                break;
//
//        if(i == V)
//            return true;
//
//        for(int i = 0; i < V; i++)
//            visited[i] = false;
//
//        dfs(i, visited);
//
//        for(i = 0; i < V; i++)
//            if(!visited[i] && !adj[i].empty())
//                return false;
//
//        return true;
//    }
//
//
//public:
//    Graph(int v) {
//        V = v;
//        adj = new vector<int>[V];
//    }
//
//    void addEdge(int v1, int v2) {
//        adj[v1].push_back(v2);
//        adj[v2].push_back(v1);
//    }
//
//    bool isCyclic() {
//
//        bool visited[V];
//
//        for(int i = 0; i < V; i++)
//            visited[i] = false;
//
//        for(int i = 0; i < V; i++)
//            if(!visited[i] && isCyclicUtil(i, visited, -1))
//                return true;
//
//        return false;
//    }
//
//    void isEuler() {
//
//        bool visited[V];
//
//        if(!isConnected()) {
//            cout << "No";
//            return;
//        }
//
//        int odd = 0;
//
//        for(int i = 0; i < V; i++)
//            if(adj[i].size() & 1)
//                odd++;
//
//        if(odd > 2)
//            cout << "No";
//        else if(odd)
//            cout << "Path";
//        else
//            cout << "circuit";
//
//    }
//
//};
//
//int main() {
//
//    Graph g(4);
//    g.addEdge(0, 1);
////    g.addEdge(0, 2);
//    g.addEdge(1, 2);
////    g.addEdge(2, 0);
////    g.addEdge(1, 3);
//    g.addEdge(3, 3);
//
//    if(g.isCyclic())
//        cout << "Graph contains cycle";
//    else
//        cout << "Graph doesn't contain cycle";
//    return 0;
//}
//
//
