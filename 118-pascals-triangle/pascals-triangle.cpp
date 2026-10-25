class Solution {
public:
    vector<int> nthrow(int n){
        vector<int>a(n);
        long long  res=1;
        a[0]=1;a[n-1]=1;
        for(int i=1;i<(n+1)/2;i++){
            res *= (n-i);
            res /= i;
            a[i]=res;
            a[n-1-i]=res;
        }
        return a;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(nthrow(i));
        }
        return ans;
    }
};