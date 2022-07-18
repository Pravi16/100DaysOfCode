class Solution {
public:
    int compute(TreeNode *root,int &ans)
    {
        if(!root) return 0;
        int l=compute(root->left,ans);
        int r=compute(root->right,ans);
        int sum1=root->val+l;
        int sum2=root->val+r;
        int sum=root->val+l+r;
        ans = max({ans,root->val,sum1,sum2,sum});
        return max({sum1,sum2,root->val});
        
    }
    int maxPathSum(TreeNode* root) {
        int ans=INT_MIN;
        compute(root,ans);
        return ans;
    }
};