int Solution::divisibleBy60(vector<int> &A) {
    int z=0,e=0,sum=0;
    for(int i=0;i<A.size();i++)
    {
        sum+=A[i];
        if(A[i]==0) z++;
        if(A[i]%2==0) e++;
    }
    if((z!=0 and e>=2 and sum%3==0) or sum==0) return 1;
    return 0;
}
