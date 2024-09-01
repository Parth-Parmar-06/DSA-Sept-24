#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        int vis[V] = {0};
        vis[0] = 1;
        queue<int> q;
        q.push(0);
        vector<int> bfs;
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            bfs.push_back(node);
            for (auto i: adj[node]) {
                if (!vis[i]) {
                    q.push(i);
                    vis[i] = 1;
                }
            }
        } return bfs;
    }
};
