#include<bits/stdc++.h>
using namespace std;
class Solution {
public: 
    int prior(char ch) {
        if (ch=='^') {
            return 3;
        } else if (ch=='/'||ch=='*') {
            return 2;
        } else if (ch=='+'||ch=='-') {
            return 1;
        } else {
            return 0;
        }
    }
    string infixToPostfix(string s) {
        string ans = "";
        stack<char> st;
        int n = s.size();
        
        for (char ch: s) {
            if ((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')||(ch>='0'&&ch<='9')) {
                ans+=ch;
            } else if (ch=='(') {
                st.push(ch);
            } else if (ch==')') {
                while (!st.empty() && st.top() != '(') {
                    ans += st.top();
                    st.pop();
                }
                if (!st.empty()) st.pop();
            } else {
                while (!st.empty() && prior(ch) <= prior(st.top()))  {
                    ans+=st.top();
                    st.pop();
                }
                st.push(ch);
            }
        }
        while (!st.empty()) {
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};