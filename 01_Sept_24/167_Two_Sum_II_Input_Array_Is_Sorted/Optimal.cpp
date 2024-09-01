#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size()-1;
        while (left < right) {
            int key = numbers[left]+numbers[right];
            if (key == target) {
                return {left+1, right+1};
            } else if (key < target) left++;
            else right--;
        } return {-1, -1};
    }
};
int main() {
    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;
    Solution solution;
    vector<int> result = solution.twoSum(numbers, target);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;
    return 0;
}