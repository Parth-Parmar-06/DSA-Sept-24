#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> mpp;
        int cnt = 0;
        for (int i:nums) mpp[i]++;
        for (auto i:mpp) {
            if (i.second > 1) {
                cnt += pairs(i.second-1);
            }
        } return cnt;
    }
    int pairs(int n) {
        if (n == 1) {
            return 1;
        } return n+pairs(n-1);
    }
};
int main() {
    vector<int> arr = {};
    Solution obj;
    int ans = obj.numIdenticalPairs(arr);
    cout << "Good Pairs are: " << ans;
}