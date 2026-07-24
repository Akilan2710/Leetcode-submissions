class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=1,n=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==n){
                c++;
            }
            else if(c==1){
                n=nums[i];
            }
            else{
                c--;
            }
        }
        return n;
    }
};