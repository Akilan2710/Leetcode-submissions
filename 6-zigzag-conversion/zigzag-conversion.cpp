class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1){
            return s;
        }
        vector<string> a(numRows);
        int n=numRows*2-2;
        for(int i=0;i<s.size();i++){
            int j=min(i%n,abs(i%n - n));
            a[j]+=s[i];
        }
        string ans="";
        for(string j:a){
            ans+=j;
        }
        return ans;
    }
};