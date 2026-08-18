class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x);
        string y=s;
        reverse(y.begin(),y.end());
        if(s==y){
            return true;
        }
        return false;
    }
};