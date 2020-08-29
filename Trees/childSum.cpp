#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <queue>

using namespace std;

class Tree {
private:
    int vertices;
    vector<list<int> > array;
    vector<int> weights;
    vector<bool> visited;
    queue<int> dfsQueue;
public:
    Tree(int v) {
        array.resize(v);
        weights.resize(v);
        vertices = v;
        visited.resize(v, false);
    }

    void addEdge(int source, int destination) {
         if (source < vertices && destination < vertices)
            array[source].push_front(destination);
    }

    void printTree() {
        cout << "Adjacency List of Tree:" <<endl;
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

    void addWeigths() {
        for (int i = 0; i < vertices; i++) {
            cout << "Enter Weight for " << i << " Node : ";
            cin >> weights[i]; 
        }
    }

    int findSum() {
        int sum = 0;
        for (int i = 0; i < vertices; i++) {
            if (array[i].empty()) {
                sum += weights[i];
            }
        }
        cout << "Sum of leaf nodes is: " << sum << endl;
        return sum;
    }
};

int main() {
    Tree g(11);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 5);
    g.addEdge(2, 6);
    g.addEdge(2, 7);
    g.addEdge(3, 8);
    g.addEdge(3, 9);
    g.addEdge(6, 10);
    cout << endl;
    g.printTree();
    g.dfsTraversal();
    g.bfsTraversal();
    g.addWeigths();
    g.findSum();
    cout << endl;
    return 0;
}