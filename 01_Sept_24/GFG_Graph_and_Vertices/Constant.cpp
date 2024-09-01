#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    long long count(int n) {
        return pow(2,n*(n-1)/2);
    }
};
int main() {
    int n = 5;
    Solution obj;
    long long ans = obj.count(n);
    cout << "Possible Undirected Graphs with 5 Vertices: " << ans;
}