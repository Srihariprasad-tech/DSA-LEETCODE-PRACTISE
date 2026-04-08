class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
          sort(nums.begin(),nums.end());
          int closest=nums[0]+nums[1]+nums[2];
       for(int i=0;i<nums.size();i++)
       {
        int st=i+1;
        int end=nums.size()-1;
        while(st<end)
        {
            int sum=nums[i]+nums[st]+nums[end];
            if(abs(sum-target)<abs(closest-target))
            {
                closest=sum;
            }
        if(sum<target)
        {
            st++;
        }
        else if(sum>target)
        {
            end--;
        }
        else
        {
            return sum;
        }
       }
       }
return closest;


    }
};
