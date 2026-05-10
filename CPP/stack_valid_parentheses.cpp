#include <bits/stdc++.h>
using namespace std;
bool isValid(string s) {
    queue<char> st;
    for(char ch : s) {
        if(ch == '(' || ch == '{' || ch == '[') {
            st.push_back(ch);
        } else {
            if(st.size()==0) return false;
            char top = st.top;
            st.pop();
            if(ch == ')' && top != '(') return false;
            if(ch == '}' && top != '{') return false;
            if(ch == ']' && top != '[') return false;
        }
    }
    return st.size() > 0;
}
