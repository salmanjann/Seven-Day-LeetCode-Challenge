class Solution {
public:
    bool isValid(string s) {
        stack<char> char_stack;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                char_stack.push(s[i]);
            } else if (s[i] == ')') {
                if (char_stack.empty() == true || char_stack.top() != '(')
                    return false;
                else
                    char_stack.pop();
            } else if (s[i] == '}') {
                if (char_stack.empty() == true || char_stack.top() != '{')
                    return false;
                else
                    char_stack.pop();
            } else if (s[i] == ']') {
                if (char_stack.empty() == true || char_stack.top() != '[')
                    return false;
                else
                    char_stack.pop();
            }
        }
        if (char_stack.empty() == false)
            return false;
        return true;
    }
};