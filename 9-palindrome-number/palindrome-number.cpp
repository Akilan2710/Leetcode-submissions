class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long a=0,t=x;
        while(t){
            a=a*10+t%10;
            t/=10;
        }
        return x==a;
    }
};