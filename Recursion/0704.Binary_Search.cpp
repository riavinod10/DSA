class Solution {
public:
    int binsearch(vector<int>& nums, int tar, int l, int r){

        while(l<=r){
            int mid=l+(r-l)/2;

            if(nums[mid]==tar){
                return mid;
            }
            else if(nums[mid]<tar){
                return binsearch(nums,tar,mid+1,r);
            }
            else{
                return binsearch(nums,tar,l,mid-1);
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int tar) {
        int n=nums.size();
        return binsearch(nums,tar,0,n-1);
    }
};