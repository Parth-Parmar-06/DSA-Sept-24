#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int sum = 0;
        int m = rolls.size();
        for (int i: rolls) sum+=i;
        int x = mean*(n+m)-sum;
        vector<int> ans(n, 1);
        if (x>6*n||x<n) return {};
        else {
            int sum = n;
            int idx=0;
            while (sum!=x) {
                if (ans[idx]==6) idx++;
                ans[idx]++;
                sum++;
            }
        } return ans;
    }
};
int main() {
    Solution obj;
    vector<int> arr = {3,2,4,3};
    vector<int> ans = obj.missingRolls(arr, 4, 2);
    cout << "[";
    for(int i:ans) {
        cout << " " << i;
    } cout << " ]";
}