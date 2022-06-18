struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        if(!root) return {};
        vector<int>ans;
        stack<TreeNode*>st;
        st.push(root);
        TreeNode *temp=root->left;
        while(!st.empty() or temp)
        {
            while(temp)
            {
                st.push(temp);
                temp=temp->left;
            }
            TreeNode *cur=st.top();
            st.pop();
            ans.push_back(cur->val);
            temp=cur->right;
        }
        return ans;
    }
};