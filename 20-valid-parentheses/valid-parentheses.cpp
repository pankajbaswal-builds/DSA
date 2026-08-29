class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> mp = {{'(', ')'}, {'[', ']'}, {'{', '}'}};
        unordered_map<char, int> freq;
        for (char ch : s) {
            freq[ch]++;
        }
        bool valid = true;
        for (auto& p : mp) {
            char key = p.first;
            char value = p.second;
            if (freq[key] != freq[value]) {
                valid = false;
                break;
            }
        }
        if (valid) {
            stack<char> st;
            for (char ch : s) {
                if (mp.find(ch) != mp.end()) {
                    st.push(ch);
                } else {
                    bool isValue = false;
                    char matchingKey;
                    for (auto& p : mp) {
                        if (p.second == ch) {
                            isValue = true;
                            matchingKey = p.first;
                            break;
                        }
                    }
                    if (!isValue) {
                        valid = false;
                        break;
                    }
                    if (st.empty()) {
                        valid = false;
                        break;
                    }
                    if (st.top() != matchingKey) {
                        valid = false;
                        break;
                    }
                    st.pop();
                }
            }
            if (!st.empty()) {
                valid = false;
            }
        }
        if (valid) {
            return true;
        } else {
            return false;
        }
    }
};