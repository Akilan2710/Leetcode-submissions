class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int m1=0,m2=0,c1=0,c2=0,n=nums.size()/3;
        for(int i:nums){
            if(i==m1) c1++;
            else if(i==m2) c2++;
            else if(c1==0 && i!=m2){m1=i;c1++;}
            else if(c2==0 && i!=m1){m2=i;c2++;}
            else{c1--;c2--;}
        }
        vector<int> r;
        c1=0;c2=0;
        for(int i:nums){
            if(i==m1) c1++;
            else if(i==m2) c2++;
        }
        if(c1>n) r.push_back(m1);
        if(c2>n) r.push_back(m2);
        return r;
    }
};