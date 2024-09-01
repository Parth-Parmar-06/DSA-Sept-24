#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int totalProfit = 0;
        int currPrice = prices[0];
        for (int i=1; i<prices.size(); i++) {
            if (prices[i]<prices[i-1]) {
                totalProfit += prices[i-1]-currPrice;
                currPrice = prices[i];
            } 
        } 
        if (currPrice<prices[prices.size()-1]) {
            totalProfit += prices[prices.size()-1] - currPrice;
        }
        return totalProfit;
    }
};
int main() {
    vector<int> arr = {7,1,4,3,5,6,8,1,2,10,100,21,99,1,1,1,90,2,22,23,20};
    Solution obj;
    int ans = obj.maxProfit(arr);
    cout << "Maximum Profit Possible: " << ans;
}