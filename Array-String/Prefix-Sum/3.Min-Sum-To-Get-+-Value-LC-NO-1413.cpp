class Solution {
public:
    int minStartValue(vector<int>& nums) {
     int prefixsum=0;
     int minsum=0;
     for(int i=0;i<nums.size();i++)
     {
        prefixsum+=nums[i];
        minsum=min(prefixsum,minsum);
     }     
     return 1-minsum;
    }
};
