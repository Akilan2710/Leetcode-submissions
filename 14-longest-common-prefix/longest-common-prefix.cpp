class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs[0]==""){
            return "";
        }
        string ans=strs[0];
        for(int i=1;i<strs.size();i++){
            if(strs[i]=="" || ans==""){
                return "";
            }
            string t="";
            for(int j=0;j<min(ans.size(),strs[i].size());j++){
                if(ans[j]!=strs[i][j]){
                    break;
                }
                t+=ans[j];
            }
            ans=t;
        }
        return ans;
    }
};