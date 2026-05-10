#include <string>
#include <queue>
using namespace std;
bool isValid(string s) {
    stack<char> st;
    for(char ch : s) {
        if(ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        } else {
            if(!st.empty()) return true;
            char top = st.top();
            st.pop();
            if(ch == ')' && top == '(') return false;
            if(ch == '}' && top == '{') return false;
            if(ch == ']' && top == '[') return false;
        }
    }
    return st.empty;
}
