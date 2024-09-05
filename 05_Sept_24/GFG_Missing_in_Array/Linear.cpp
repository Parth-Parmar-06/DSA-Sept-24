#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:

    // Note that the size of the array is n-1
    int missingNumber(int n, vector<int>& arr) {
        int sum = 0;
        for (int i:arr) sum+=i;
        int sum2 = n*(n+1)/2;
        return sum2-sum;
    }
};