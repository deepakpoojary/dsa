class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        // we are storing where each element found its greater element and jumping
        //so that individually we dont have to check
        int hottest= INT_MIN;
        int n = temperatures.size();
        vector<int> ans(n,0);
        for(int i =n-1;i>=0;i-- ){
            if(temperatures[i]>=hottest){
                hottest=temperatures[i];
            }
            else {
                int it=i+1;
                while(temperatures[i]>=temperatures[it]){
                    it=it+ans[it];
                }
                ans[i]=it-i;
            }
        }
        return ans;
    }
};