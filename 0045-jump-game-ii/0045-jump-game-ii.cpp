class Solution {
public:
    int jump(vector<int>& nums) {
        int l=0;
        int r =0;
        int steps=0;

        while(r<nums.size()-1){
            int far=0;//reset the far each range
            for(int i=l;i<=r;i++){
                far=max(far,i+nums[i]);
            }
            l=r+1;
            r=far;
            steps++;
        }
        return steps;
    }
};
// at each step we are checking the longest catch 
// and if that is reaching end or not 