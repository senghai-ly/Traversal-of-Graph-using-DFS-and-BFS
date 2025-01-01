#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <unordered_map>
using namespace std;

// Graph represented using an adjacency list
class Graph {
private:
    unordered_map<int, vector<int>> adjList;

public:
    // Add an edge to the graph
    void addEdge(int u, int v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u); // Assuming the graph is undirected
    }

    // Perform BFS traversal
    void BFS(int startNode) {
        unordered_map<int, bool> visited; // Track visited nodes
        queue<int> q;

        visited[startNode] = true;
        q.push(startNode);

        cout << "BFS Traversal: ";
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            cout << node << " ";

            // Visit all neighbors of the current node
            for (int neighbor : adjList[node]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
        cout << endl;
    }

    // Perform DFS traversal
    void DFS(int startNode) {
        unordered_map<int, bool> visited; // Track visited nodes
        stack<int> s;

        s.push(startNode);

        cout << "DFS Traversal: ";
        while (!s.empty()) {
            int node = s.top();
            s.pop();

            // If the node is not visited, process it
            if (!visited[node]) {
                visited[node] = true;
                cout << node << " ";

                // Push all unvisited neighbors to the stack
                for (auto it = adjList[node].rbegin(); it != adjList[node].rend(); ++it) {
                    if (!visited[*it]) {
                        s.push(*it);
                    }
                }
            }
        }
        cout << endl;
    }
};

int main() {
    Graph g;
    g.addEdge(0, 7);
    g.addEdge(7, 6);
    g.addEdge(6, 5);
    g.addEdge(7, 11);
    g.addEdge(7, 3);
    g.addEdge(3, 2);
    g.addEdge(3, 4);
    g.addEdge(8, 7);
    g.addEdge(8, 12);
    g.addEdge(8, 9);
    g.addEdge(9, 1);
    g.addEdge(9, 10);

    // Starting BFS and DFS from node 0
    g.BFS(0);
    g.DFS(0);

    return 0;
}
