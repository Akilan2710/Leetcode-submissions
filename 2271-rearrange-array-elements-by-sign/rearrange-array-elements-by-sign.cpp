class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int p=0,n=1;
        vector<int> res(nums.size());
        for(int i:nums){
            if(i>0){
                res[p]=i;p+=2;
            }
            else{
                res[n]=i;n+=2;
            }
        }
        return res;
    }
};