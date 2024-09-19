class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
         int n=nums.size();
        stack<int> st;
        vector<int>ans(n);
        for(int i=2*n-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums[i%n])
              st.pop();//pop until find greater element
              if(i<n){// find till the range
                   if(!st.empty())
                   ans[i]=st.top();
                   else
                   ans[i]=-1; // if stack empty
              }
              st.push(nums[i%n]);


        }
        return ans;
    }
};