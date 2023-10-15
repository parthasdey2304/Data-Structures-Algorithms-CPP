#include <iostream>
#include <vector>
#include <stack>

class Graph {
private:
    int V;  // Number of vertices
    std::vector<std::vector<int>> adjList;  // Adjacency list

public:
    Graph(int vertices) : V(vertices) {
        adjList.resize(V);
    }

    void addEdge(int u, int v) {
        adjList[u].push_back(v);
    }

    void DFS(int startVertex) {
        std::vector<bool> visited(V, false);
        std::stack<int> stack;

        stack.push(startVertex);

        while (!stack.empty()) {
            int vertex = stack.top();
            stack.pop();

            if (!visited[vertex]) {
                std::cout << vertex << " ";
                visited[vertex] = true;
            }

            for (int neighbor : adjList[vertex]) {
                if (!visited[neighbor]) {
                    stack.push(neighbor);
                }
            }
        }
    }
};

int main() {
    Graph g(7);  // Create a graph with 7 vertices

    // Add edges to the graph
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 5);
    g.addEdge(2, 6);

    std::cout << "DFS starting from vertex 0: ";
    g.DFS(0);

    return 0;
}
