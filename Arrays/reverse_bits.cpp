class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t reversed=0;
        uint32_t p=31;
        while(n)
        {
            reversed=reversed+((n&1) << p);
            n=n>>1;
            p--;
        }
        return reversed;
    }
};