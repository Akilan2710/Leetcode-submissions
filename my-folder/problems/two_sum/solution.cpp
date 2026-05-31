class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> indexnum;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int c=target-nums[i];
            if(indexnum.count(c)){
                return {indexnum[c],i};
            }
            indexnum[nums[i]]=i;
        }
        return{};
    }
};