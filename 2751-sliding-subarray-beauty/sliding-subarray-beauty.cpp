class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        vector<int> ans(nums.size()-k+1),c(50);
        for(int i=0;i<k;i++){
            if(nums[i]<0){
                c[nums[i]+50]++;
            }
        }
        for (int j = 0, count = 0; j < 50; j++) {
            count += c[j];
            if (count >= x) {
                ans[0] = j - 50;
                break;
            }
        }
        for(int i=k;i<nums.size();i++){
            if(nums[i]<0){
                c[nums[i]+50]++;
            }
            if(nums[i-k]<0){
                c[nums[i-k]+50]--;
            }
            for (int j = 0, count = 0; j < 50; j++) {
                count += c[j];
                if (count >= x) {
                    ans[i - k + 1] = j - 50;
                    break;
                }
            }
        }
        return ans;
    }
};