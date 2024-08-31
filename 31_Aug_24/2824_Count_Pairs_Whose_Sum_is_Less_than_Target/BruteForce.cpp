#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int count = 0;
        for (int i=0; i<nums.size(); i++) {
            for (int j=i+1; j<nums.size(); j++) {
                if (nums[i]+nums[j]<target) count++;
            }
        } return count;
    }
};
int main() {
    vector<int> arr = {-6,2,5,-2,-7,-1,3};
    int target = -2;
    Solution obj;
    int ans = obj.countPairs(arr, target);
    cout << "Total Pairs: " << ans;
}