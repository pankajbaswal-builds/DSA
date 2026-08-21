class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> r;
        r['I'] = 1;
        r['V'] = 5;
        r['X'] = 10;
        r['L'] = 50;
        r['C'] = 100;
        r['D'] = 500;
        r['M'] = 1000;
        int sum = 0;
        for (int i = 0; i < s.size(); i++) {
            if (i + 1 < s.size() && (s[i] == 'I') && (s[i + 1] == 'V')) {
                sum += 4;
                i++;
            }
            else if (i + 1 < s.size() && (s[i] == 'I') && (s[i + 1] == 'X')) {
                sum += 9;
                i++;
            }
            else if (i + 1 < s.size() && (s[i] == 'X') && (s[i + 1] == 'L')) {
                sum += 40;
                i++;
            }
            else if (i + 1 < s.size() && (s[i] == 'X') && (s[i + 1] == 'C')) {
                sum += 90;
                i++;
            }
            else if (i + 1 < s.size() && (s[i] == 'C') && (s[i + 1] == 'D')) {
                sum += 400;
                i++;
            }
            else if (i + 1 < s.size() && (s[i] == 'C') && (s[i + 1] == 'M')) {
                sum += 900;
                i++;
            } 
            else {
                sum += r[s[i]];
            }
        }
        return sum;
    }
};