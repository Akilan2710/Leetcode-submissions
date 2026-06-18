class Solution {
public:
    long long removeZeros(long long n) {
        int c=0;
        long long r=0;
        while(n>0){
            if(n%10){
                r+=(n%10)*std::pow(10,c);
                c++;
            }
            n=n/10;
        }
        return r;
    }
};