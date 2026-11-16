class Solution {
public:
    int search(vector<int>& n, int t) {
        int r=n.size()-1,l=0,m=0;
        while(l<=r){
            m=l+(r-l)/2;
            if(n[m]==t) return m;
            if(n[m]>t) r=m-1;
            else l=m+1;
        }
        return -1;
    }
};