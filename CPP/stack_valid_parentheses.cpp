#include <string>
#include <queue>
using namespace std;
bool isValid(string s) {
    queue<char> st;
    for(char ch : s) {
        if(ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        } else {
            if(!st.empty()) return false;
            char top = st.top;
            st.pop();
            if(ch == ')' && st.top != '(') return false;
            if(ch == '}' && st.top != '{') return false;
            if(ch == ']' && st.top != '[') return false;
        }
    }
    return st.size() > 0;
}
