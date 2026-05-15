link:https://leetcode.com/problems/valid-parentheses/description/
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;//stack creation

        for(char c : s) {
            if(c == '(' || c == '{' || c == '[') {//pushing opening brackets into the stack
                st.push(c);
            }
            else {
                if(st.empty()) return false;

                char top = st.top();//gives the latest openning brackest from the stack 
                st.pop();

                if((c == ')' && top != '(') ||
                   (c == '}' && top != '{') ||
                   (c == ']' && top != '[')) {
                    return false;
                }
            }
        }

        return st.empty();
    }
};
