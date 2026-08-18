class Solution {
public:
    int reverseBits(int n) {
        for(int i = 0, j = 31; j > i; i++, j--) {
            if(((n>>i)&1) != ((n>>j)&1)) {
                n ^= (1 << i);
                n ^= (1 << j);
            }
        }
        return n;
    }
};
