#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int sum2 = n*(n+1)/2;
        for (int i: nums) sum+=i;
        return sum2-sum;
    }
};
int main() {
    vector<int> arr = {9,6,4,2,3,5,7,0,1};
    Solution obj;
    int ans = obj.missingNumber(arr);
    cout << "Missing Number is: " << ans;
}