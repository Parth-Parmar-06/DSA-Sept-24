#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        vector<vector<string>> ans;
        sort(products.begin(), products.end());
        
        string prefix = "";
        for (int i = 0; i < searchWord.size(); i++) {
            prefix += searchWord[i];  
            vector<string> temp;
            
            for (string& s : products) {
                if (s.find(prefix) == 0) {  
                    temp.push_back(s);
                }
            }
            
            if (temp.size() > 3) {
                temp.resize(3);  
            }
            ans.push_back(temp);
        }
        
        return ans;
    }
};
int main() {
    vector<string> products = {"mobile", "mouse", "moneypot", "monitor", "mousepad"};
    string searchWord = "mouse";
    
    Solution obj;
    vector<vector<string>> ans = obj.suggestedProducts(products, searchWord);

    for (int i = 0; i < ans.size(); i++) {
        cout << "Suggestions for prefix '" << searchWord.substr(0, i+1) << "': ";
        for (string s : ans[i]) {
            cout << s << " ";
        }
        cout << endl;
    }
}