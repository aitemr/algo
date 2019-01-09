class Solution {
public:
    bool isPairParenthesis(const char left, const char right) {
        return (left == '(' && right == ')') || 
               (left == '[' && right == ']') || 
               (left == '{' && right == '}');
    }
    
    bool isValid(string s) {
        stack<char> stk;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                stk.push(s[i]);
            } else {
                if (!stk.empty() && isPairParenthesis(stk.top(), s[i])) {
                    stk.pop();
                } else {
                    return false;
                }
            }
        }

        return stk.empty();
    } 
};