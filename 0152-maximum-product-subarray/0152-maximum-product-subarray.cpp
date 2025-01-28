class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //we can just run a loop and find product, max sum <0 shit 
        //max and most min (-34) so whichever nos we throw at us we have it covered 
        int ma = nums[0];
        int mi = nums[0];
        int ans = nums[0];
        int n = nums.size();
        for(int i=1; i<n;i++){
            if(nums[i]<0){
                swap(ma,mi);
            }
            ma = max(nums[i], ma*nums[i]);
            mi = min(nums[i], mi*nums[i]);
            ans = max(ma,ans);
        }
        return ans;
    }
};