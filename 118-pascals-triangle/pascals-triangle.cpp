class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> a={{1}};
        for(int i=1;i<numRows;i++){
            vector<int> x(i+1);
            x[0]=1;x[i]=1;
            for(int j=1;j<=i/2;j++){
                x[j]=a[i-1][j-1]+a[i-1][j];
                x[i-j]=x[j];
            }
            a.push_back(x);
        }
        return a;
    }
};