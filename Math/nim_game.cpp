class Solution {
public:
    bool canWinNim(int n) {
        if(n==1 or n==2 or n==3) return true;
        return n%4!=0;
        
    }
};