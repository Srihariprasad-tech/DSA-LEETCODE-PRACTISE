class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int totalsum=0;
        int currmax=0,maxsum=nums[0];
        int currmin=0,minsum=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            totalsum+=nums[i];

            currmax=max(nums[i],currmax+nums[i]);
            maxsum=max(currmax,maxsum);

            currmin=min(nums[i],currmin+nums[i]);
            minsum=min(minsum,currmin);
        }
        if(maxsum<0)
        {
            return maxsum;
        }
        return max(maxsum,totalsum-minsum);
    }
};
