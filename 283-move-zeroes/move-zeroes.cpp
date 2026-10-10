class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                int t=nums[i];
                nums[i]=0;
                nums[c]=t;
                c++;
            }
        }
        for(int i=nums.size()-1;i>=c;i--) nums[i]=0;
    }
};