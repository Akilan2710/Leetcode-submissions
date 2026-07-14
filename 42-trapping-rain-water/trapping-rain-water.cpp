class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size()<3){
            return 0;
        }
        int a=0,l=0,r=height.size()-1;
        int lmax=height[l],rmax=height[r];
        while(l<r){
            if(height[l]<height[r]){
                l++;
                lmax=max(lmax,height[l]);
                a+=lmax-height[l];
            }
            else{
                r--;
                rmax=max(rmax,height[r]);
                a+=rmax-height[r];
            }
        }
        return a;
    }
};