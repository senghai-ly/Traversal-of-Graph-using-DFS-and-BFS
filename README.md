# Traversal-of-Graph-using-DFS-and-BFS
Graph Representation:

The graph is represented using an adjacency list stored in a unordered_map<int, vector<int>>.
Each node is a key in the map, and its neighbors are stored in the associated vector.

BFS (Breadth-First Search):
Uses a queue (queue<int>) to explore nodes level by level.
Marks nodes as visited to avoid re-visiting.

DFS (Depth-First Search):
Uses a stack (stack<int>) to explore nodes deeply along branches.
Marks nodes as visited after processing.

Adding Edges:
Edges are added bidirectionally to simulate an undirected graph.

Output:
BFS and DFS traversals starting from node 0.
BFS Traversal: 0 7 6 11 3 8 5 2 4 12 9 1 10 
DFS Traversal: 0 7 6 5 11 3 2 4 8 12 9 1 10 

Resource : GeeksForGeeks 
          Google 
          AI
