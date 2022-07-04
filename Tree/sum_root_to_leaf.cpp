class Solution {
public:
    int ans=0;
    void compute(TreeNode *root,int temp)
    {
        if(!root) return;
        int cur=temp*10+root->val;
        if(!root->left and !root->right) 
        {
            ans=ans+cur;
            return;
        }
        compute(root->left,cur);
        compute(root->right,cur);
        
    }
    int sumNumbers(TreeNode* root) {
        compute(root,0);
        return ans;
    }
};