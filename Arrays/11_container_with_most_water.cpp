class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1,h=0,w=0,maxcap=0;

        while(l<r){
            w=r-l;
            h=min(height[l],height[r]);
            int currcap=h*w;
            maxcap=max(maxcap,currcap);

            if(height[l]<height[r]) l++;
            else r--;
        }
        return maxcap;
    }
};