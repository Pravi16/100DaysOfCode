class Solution {
public:
    void compute(TreeNode *root,int level,vector<int>&ans)
    {
        if(!root) return;
        if(ans.size()==level) ans.push_back(root->val);
        compute(root->right,level+1,ans);
        compute(root->left,level+1,ans);
    }
    
    vector<int> rightView(TreeNode *root) 
    {
        vector<int>ans;
        compute(root,0,ans);
        return ans;
    }
};