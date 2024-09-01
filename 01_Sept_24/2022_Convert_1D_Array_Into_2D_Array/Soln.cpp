#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> ans;
        int idx = 0;
        if (original.size() != m*n) return {};
        for (int i=0; i<m; i++) {
            vector<int> temp;
            for (int j=0; j<n; j++) {
                temp.push_back(original[idx++]);
            }
            ans.push_back(temp);
        } return ans;
    }
};
int main() {
    vector<int> arr = {1,2,3,4};
    int m = 2;
    int n = 2;
    Solution obj;
    vector<vector<int>> ans = obj.construct2DArray(arr, m, n);
    cout << "Ans: [ ";
    for (int i=0; i<ans.size(); i++) {
        cout << "[ ";
        for (int j=0; j<ans[0].size(); j++) {
            cout << ans[i][j] << " ";
        } cout << "] ";
    } cout << "]";
}