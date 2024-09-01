#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<vector<int>> printGraph(int V, vector<pair<int,int>>edges) {
        vector<vector<int>> adj(V);
        for (auto i:edges) {
            adj[i.first].push_back(i.second);
            adj[i.second].push_back(i.first);
        } return adj;
    }
};
int main() {
    Solution sol;
    
    int V = 5; 
    vector<pair<int, int>> edges = { {0, 1}, {0, 4}, {1, 2}, {1, 3}, {2, 3}, {3, 4} }; 

    vector<vector<int>> adjList = sol.printGraph(V, edges);

    for (int i = 0; i < V; ++i) {
        cout << i << ":";
        for (int j : adjList[i]) {
            cout << " " << j;
        }
        cout << endl;
    }

    return 0;
}