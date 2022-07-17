class Solution {
public:
    int compute(TreeNode *root,int &d)
    {
        if(!root) return 0;
        int left=compute(root->left,d);
        int right=compute(root->right,d);
        d=max(d,left+right);
        return 1+max(left,right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int d=0;
        compute(root,d);
        return d;
        
    }
};