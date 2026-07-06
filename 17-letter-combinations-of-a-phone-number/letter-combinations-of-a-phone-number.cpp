class Solution {
private:
    unordered_map<char, string> digitsMapping = {
        {'2', "abc"}, {'3', "def"},  {'4', "ghi"}, {'5', "jkl"},
        {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"},
    };

public:
    vector<string> letterCombinations(string digits) {
        if (digits.size() == 0) {
            return {""};
        }
    vector<string> res;

        char firstDigit = digits[0];
        string stringMapping = digitsMapping[firstDigit];

        vector<string> nextCombinations = letterCombinations(digits.substr(1));

        for (char c : stringMapping) {
            for (string nextStr : nextCombinations) {
                res.push_back(c + string(nextStr));
            }
        }

        return res;
    }
};