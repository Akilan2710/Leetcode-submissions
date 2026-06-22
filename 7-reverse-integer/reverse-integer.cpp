class Solution {
public:
    int reverse(int x) {
        long long a=0;
        while(x){
            a=a*10+x%10;
            x/=10;
        }
        int b=a;
        if(a==b){
            return a;
        }
        else{
            return 0;
        }
    }
};