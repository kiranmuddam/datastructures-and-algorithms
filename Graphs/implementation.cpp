#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <queue>

using namespace std;

class Graph {
private:
    int vertices;
    vector<list<int> > array;
    vector<bool> visited;
    queue<int> dfsQueue;

public:
    Graph(int v) {
        array.resize(v);
        vertices = v;
        visited.resize(v, false);
    }

    void addEdge(int source, int destination) {
         if (source < vertices && destination < vertices)
            array[source].push_front(destination);
    }

    void printGraph() {
        cout << "Adjacency List of Directed Graph:" <<endl;
        cout << endl;
        list<int>::iterator temp;
        for(int i=0; i<vertices; i++) {
            cout << "|" << i << "| => ";
            temp = (array[i]).begin();

            while(temp != array[i].end()) {
                cout <<  "[" <<*temp << "] -> ";
                temp++;
            }
            cout <<"NULL"<<endl;
        }
    }

    void dfs(int at) {
        if (visited[at]) {
            return;
        }
        cout << at << ' ';
        visited[at] = true;
        list<int>::iterator it;

        for (it = array[at].begin(); it != array[at].end(); it++) {
            dfs(*it);
        }

        visited.resize(vertices, false);
    }

    void dfsTraversal() {
        cout << "DFS Traversal" << endl;
        for (int i = 0; i < vertices; i++) {
            dfs(i);
        }
        cout << endl;
    }

    void bfs(int at) {
        dfsQueue.push(at);
        visited[at] = true;

        while(!dfsQueue.empty()) {
            int currNode = dfsQueue.front();
            cout << currNode << ' ';
            dfsQueue.pop();
            list<int>::iterator it = array[currNode].begin();

            for (it; it != array[currNode].end(); it++) {
                if (!visited[*it]) {
                    dfsQueue.push(*it);
                    visited[*it] = true;
                }
            }
            
        }
    }

    void bfsTraversal() {
        cout << "BFS Traversal" << endl;
        for (int i = 0; i < vertices; i++) {
            bfs(i);
        }
        cout << endl;
    }
};

int main() {
    Graph g(7);
    g.addEdge(1, 3);
    g.addEdge(1, 2);
    g.addEdge(2, 5);
    g.addEdge(2, 4);
    cout << endl;
    g.printGraph();
    g.dfsTraversal();
    g.bfsTraversal();
    cout << endl;
    return 0;
}