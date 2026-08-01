class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        set<int> s;
        vector<int> a(2);
        a[0]=-1;
        a[1]=nums.size()*(nums.size()+1)/2;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
            if(a[0]==-1 && s.size()==i){
                a[0]=nums[i];

            }
            else{
                a[1]-=nums[i];
            }
        }
        return a;
    }
};