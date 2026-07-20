class Solution {
public:
    int divide(int dividend, int divisor) {
        int s=(divisor>0?1:-1)*(dividend>0?1:-1);
        long long m=abs((long long)divisor),n=abs((long long)dividend),a=0;
        while(n>=m){
            int c=0;
            while(n>=(m<<(c+1))){
                c++;
            }
            a+=1LL << c;
            n-=m*(1LL << c);
        }
        if(a>INT_MAX){
            return (s>0?INT_MAX:INT_MIN);
        }
        return a*s;
    }
};