class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int x:nums){
            freq[x]++;
            if(freq[x]>=2){
                return true;
            }
        }
        return false;
    }
};