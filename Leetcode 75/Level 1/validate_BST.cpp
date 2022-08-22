class Solution {
public:
    bool compute(TreeNode *root,long int mini,long int maxi)
    {
        if(!root) return true;
        if(root->val >=maxi or root->val <=mini) return false;
        return compute(root->left,mini,root->val) and compute(root->right,root->val,maxi);
    }
    bool isValidBST(TreeNode* root) {
        if(!root) return true;
        return compute(root,-1e18,1e18);
    }
};