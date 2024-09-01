#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int> &arr) {
        int n = arr.size(); 

        int pre = 1, suff = 1;
        int ans = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (pre == 0) pre = 1;
            if (suff == 0) suff = 1;
            pre *= arr[i];
            suff *= arr[n - i - 1];
            ans = max(ans, max(pre, suff));
        }
        return ans;
    }
};
int main() {
    vector<int> arr = {2,3,-2,4};
    Solution obj;
    int ans = obj.maxProduct(arr);
    cout << "Ans: " << ans;
}