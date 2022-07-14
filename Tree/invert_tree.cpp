class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root) return root;
        TreeNode *temp=new TreeNode(root->val);
        if(root->right) temp->left=invertTree(root->right);
        if(root->left) temp->right=invertTree(root->left);
        return temp;
        
    }
};