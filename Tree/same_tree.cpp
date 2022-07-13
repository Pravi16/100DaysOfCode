class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p and !q) return 1;
        if(!p or !q) return 0;
        if(p->val!=q->val) return false;
        return isSameTree(p->left,q->left) and isSameTree(p->right,q->right);
    }
};