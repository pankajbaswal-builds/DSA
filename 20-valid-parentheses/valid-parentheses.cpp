class Solution {
public:
    bool isValid(string s) {
        string st;
        for (char ch : s) {
            if (ch == '(' || ch == '[' || ch == '{') {
                st.push_back(ch);
            } else {
                if (st.empty())
                    return false;
                char top = st.back();
                if ((ch == ')' && top != '(') || (ch == ']' && top != '[') ||
                    (ch == '}' && top != '{')) {
                    return false;
                }
                st.pop_back();
            }
        }
        return st.empty();
    }
};