class Solution {
public:
    string numm[10] = {
        " ", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
    };

    void solve(string& digits, int idx, string& path, vector<string>& res) {
        // cout<<idx<<" "<<path<<endl;
        if(idx == digits.size()) {
            res.push_back(path);
            return;
        }

        for(int i=0; i<numm[digits[idx] - '0'].size(); i++) {
            path.push_back(numm[digits[idx] - '0'][i]);
            solve(digits, idx+1, path, res);
            path.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        string path = "";
        vector<string> res;

        solve(digits, 0, path, res);
        
        return res;
    }
};
