
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root) return root;
        if(root->val < p->val and root->val < q->val) return lowestCommonAncestor(root->right,p,q);
        if(root->val > p->val and root->val > q->val) return lowestCommonAncestor(root->left,p,q);
        return root;
    }
};