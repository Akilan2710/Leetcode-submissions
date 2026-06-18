class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long r=0;
        int happinessSize=happiness.size();
        sort(happiness.begin(),happiness.end());
        for(int i=0;i<k;i++){
            r+=(happiness[happinessSize-i-1]-i>0)?happiness[happinessSize-i-1]-i:0;
        }
        return r; 
    }
};