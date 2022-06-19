//ITERATIVE
class Solution {
public:
    int maxDepth(TreeNode* root) {
        int level=0;
        if(!root) return 0;
        queue<TreeNode*>q;
        q.push(root);
        while(q.size()>0)
        {
            int s=q.size();
            while(s-->0)
            {
                TreeNode *temp=q.front();
                q.pop();
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            level++;
        }
        return level;
    }
};

//RECURSIVE

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        return 1+max(maxDepth(root->left),maxDepth(root->right));
    }
};