class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map <int,int> arr;
        for(auto it:nums){
            arr[it]++;
            if(arr[it]>1)return 1;
        }
        return 0;
    }
};