class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int totalsum=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            totalsum+=nums[i];
        }
         int leftsum=0;
      for(int i=0;i<n;i++)
      {
     int rightsum=totalsum-leftsum-nums[i];
      if(leftsum==rightsum)
      {
        return i;
      }
      else
      {
        leftsum+=nums[i];
      }
      }
      return -1;
    }
};
