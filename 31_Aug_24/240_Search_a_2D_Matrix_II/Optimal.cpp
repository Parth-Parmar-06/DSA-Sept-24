#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int rowindex = 0;
        int colindex = col-1;
        while(rowindex<row && colindex>=0){
            int element = matrix[rowindex][colindex];
            if (element == target){
                return true; 
            }
            if (element < target){
                rowindex++;
            }
            else{
                colindex--;
            }
        } return false;
    }
};
int main() {
    vector<vector<int>> arr = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int target = 5;
    Solution obj;
    string ans = obj.searchMatrix(arr, target)? "Yes": "No";
    cout << "Is Target Present?: " << ans;
}