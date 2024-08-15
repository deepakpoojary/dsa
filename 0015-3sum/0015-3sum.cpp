class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //basically let num be -1 0 1 1 , dont pick -1 0 1 , and -1 0 1(other 1)n then tell they're diff 
        //basically dont pick dup in 3 places 
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        for(int i =0;i<nums.size()-2;i++){
            if(i==0||(i>0 && nums[i]!=nums[i-1])){//first element is dup or no
                int low=i+1;
                int high=nums.size()-1;
                int sum=0-nums[i];
                while(low<high){
                    if(nums[low]+nums[high]==sum){
                        vector <int> ans;
                        ans.push_back(nums[i]);
                        ans.push_back(nums[low]);
                        ans.push_back(nums[high]);
                        res.push_back(ans);
                        while(low<high&& nums[low]==nums[low+1])low++;//sec element is dup or no
                        while(low<high&& nums[high]==nums[high-1])high--;
                        low++;
                        high--;
                    }
                    else if (nums[low]+nums[high]<sum){
                        low++;
                    }
                    else 
                        high--;
                    // while(nums[low]==nums[low-1]){
                    //     low++;
                    // }
                    // while(nums[high]==nums[high+1]){
                    //     high--;
                    // }after getting answer ur skipping the dups, 
                }
            }
            }
        return res;
        }
    
    };
               
