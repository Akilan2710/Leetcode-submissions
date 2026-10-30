class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        unordered_set<int> a,b;
        int n=m.size(),ma=m[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<ma;j++){
                if(m[i][j]==0){
                    a.insert(i);
                    b.insert(j);
                }
            }
        }
        for(int i:a) for(int x=0;x<ma;x++) m[i][x]=0;
        for(int j:b) for(int x=0;x<n;x++) m[x][j]=0;
    }
};