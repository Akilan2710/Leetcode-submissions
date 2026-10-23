class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int p=0,n=1,s=nums.size();
        vector<int> res(s);
        for(int i=0;i<s;i++){
            if(nums[i]>0){
                res[p]=nums[i];p=p+2;
            }
            else{
                res[n]=nums[i];n=n+2;
            }
        }
        return res;
    }
};