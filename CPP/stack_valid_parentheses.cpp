#include <string>
#include <queue>
#include<stack>
using namespace std;
bool isValid(string s) {
    stack<char> st; // stack instead of queue
    for(char ch : s) {
        if(ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        } else {
            if(st.empty()) return false; // if empty then false;
            char top = st.top(); // parenthesis missing
            st.pop();
            if((ch == ')' && top == '(') || // equality;
            (ch == '}' && top == '{') ||
            (ch == ']' && top == '[') ){
                continue;
            }else{
                false;
        }
    }
    return st.size() == 0; // equal to instead of > 
}
