// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int bad;
        int l=1,r=n-1;
        while(l<=r)
        {
            int m=l+(r-l)/2;
            if(isBadVersion(m))
            {
                r=m-1;
                bad=m;
            }
            else l=m+1;
        }
        return bad;
    }
};