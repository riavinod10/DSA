class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int currmax,currmin,maxsum,minsum,totalsum;
        currmax=currmin=maxsum=minsum=totalsum= nums[0];

        for(int i=1;i<nums.size();i++){
            //max
            currmax=max(currmax+nums[i],nums[i]);
            maxsum=max(currmax,maxsum);
            //min
            currmin=min(currmin+nums[i],nums[i]);
            minsum=min(currmin,minsum);

            totalsum+=nums[i];
        }

        if(maxsum<0) return maxsum;
        return max(maxsum,totalsum-minsum);
    }
};