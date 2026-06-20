class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size()==1){
            return s.substr(0,1);
        }
        vector<vector<int>> p;
        if(s[0]==s[1]){
            vector<int> a={0,1};
            p.push_back(a);
        }
        for(int i=1;i<s.size()-1;i++){
            if(s[i]==s[i+1]){
                vector<int> a={i,i+1};
                p.push_back(a);
            }
            if(s[i-1]==s[i+1]){
                vector<int> a={i-1,i+1};
                p.push_back(a);
            }
        }
        if(p.size()==0){
            return s.substr(0,1);
        }
        else{
            int m=0;
            vector<int> ans; 
            for(auto& i:p){
                while(i[0]>-1 && i[1]<s.size()){
                    if(s[i[0]]==s[i[1]]){
                        if((i[1]-i[0]+1)>m){
                            ans=i;
                            m=i[1]-i[0];
                        }
                        i[0]--;i[1]++;
                    }
                    else{
                        break;
                    }
                }
            }
            return s.substr(ans[0],ans[1]-ans[0]+1);
        }
    }
};