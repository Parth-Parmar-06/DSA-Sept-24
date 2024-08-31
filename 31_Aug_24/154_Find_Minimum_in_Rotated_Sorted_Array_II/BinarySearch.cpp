#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0;
        int end = nums.size()-1;
        int ans;
        while (start < end) {
            int mid = start+(end-start)/2;
            if (nums[mid] == nums[end]) end--;
            else if (nums[mid] < nums[end]) {
                end = mid;
            } else {
                start = mid+1;
            }
        } return nums[start];
    }
};
int main() {
    vector<int> arr = {11,11,11,11,11,11,12,12,10,10,10,11};
    Solution obj;
    int ans = obj.findMin(arr);
    cout << "Minimum Element: " << ans;
}