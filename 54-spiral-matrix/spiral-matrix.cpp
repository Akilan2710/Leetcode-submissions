class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int hmin=0,hmax=matrix.size()-1,bmin=0,bmax=matrix[0].size()-1;
        while(hmin<=hmax && bmin<=bmax){
            for(int i=bmin;i<=bmax;i++) ans.push_back(matrix[hmin][i]);
            hmin++;
            for(int i=hmin;i<=hmax;i++) ans.push_back(matrix[i][bmax]);
            bmax--;
            if(hmin<=hmax){
                for(int i=bmax;i>=bmin;i--) ans.push_back(matrix[hmax][i]);
                hmax--;
            }
            if(bmin<=bmax){
                for(int i=hmax;i>=hmin;i--) ans.push_back(matrix[i][bmin]);
                bmin++;
            }
        }
        return ans;
    }
};