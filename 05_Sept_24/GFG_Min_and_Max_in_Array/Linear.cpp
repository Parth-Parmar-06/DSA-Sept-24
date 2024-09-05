#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    pair<long long, long long> getMinMax(vector<long long int> arr) {
        long long mini = INT_MAX;
        long long maxi = INT_MIN;
        pair<long long, long long> ans;
        for (long long i:arr) {
            mini = min(i, mini);
            maxi = max(i, maxi);
        } 
        ans.first = mini;
        ans.second = maxi;
        return ans;
    }
};