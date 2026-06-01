class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();

        int reqtotal= (n*(n+1))/2;
        int arrtotal=0;
        
        for( int num : nums){
            arrtotal+=num;
        }

        int ans=reqtotal-arrtotal;
        return ans;
    }
};