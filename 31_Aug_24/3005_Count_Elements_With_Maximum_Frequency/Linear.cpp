#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mpp;
        int maxi = 0;
        int cnt = 0;
        for (int i:nums) {
            mpp[i]++;
            maxi = max(maxi, mpp[i]);
        }
        for (auto i:mpp) {
            cnt += (maxi == i.second);
        } return cnt*maxi;
    }
};
int main() {
    vector<int> arr = {1,2,2,3,1,4};
    Solution obj;
    int ans = obj.maxFrequencyElements(arr);
    cout << "Ans: " << ans;
}