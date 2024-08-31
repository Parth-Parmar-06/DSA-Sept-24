#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int s=nums.size(),c=0;
        for(int i=0;i<s-1;i++){
            for(int j=i+1;j<s;j++){
                if(nums[i]==nums[j])c++;
            }
        } return c;
    }
};
int main() {
    vector<int> arr = {};
    Solution obj;
    int ans = obj.numIdenticalPairs(arr);
    cout << "Good Pairs are: " << ans;
}