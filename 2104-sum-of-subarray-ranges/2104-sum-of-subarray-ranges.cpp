class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n = int(nums.size());
        long long answer = 0;

        for (int i = 0; i < n; ++i) {
            int minVal = nums[i], maxVal = nums[i];
            for (int j = i+1; j < n; ++j) {// j+1 cos same index result will be 0
                maxVal = max(maxVal, nums[j]);
                minVal = min(minVal, nums[j]);
                answer += maxVal - minVal;
            }
        }

        return answer;
    }
};