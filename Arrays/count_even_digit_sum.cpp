class Solution {
public:
    int countEven(int n) {
        int cnt=0;
        int sum;
        for(int i=2;i<=n;i++)
        {
            sum=0;
            int temp=i;
            while(temp)
            {
                sum=sum+temp%10;
                temp/=10;
            }
            if(sum%2==0) cnt++;
        }
        return cnt;
        
        
    }
};