class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map <int,int> mp;
        for(auto it:nums){
            
            if(++mp[it]>1)return 1;
        }
        return 0;
    }
};