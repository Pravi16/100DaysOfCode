class Solution {
    
public:
    bool compute(TreeNode *root,TreeNode *subRoot)
    {
        if(!root and !subRoot) return true;
        if(!root or !subRoot) return false;
        if(root->val!=subRoot->val) return false;
        return compute(root->left,subRoot->left) and compute(root->right,subRoot->right);
        
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root) return false;
        if(compute(root,subRoot)) return true;
        return isSubtree(root->left,subRoot) or isSubtree(root->right,subRoot);
    }
};