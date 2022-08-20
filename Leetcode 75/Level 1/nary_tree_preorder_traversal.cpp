class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int>ans;
        if(!root) return {};
        stack<Node*>st;
        st.push(root);
        while(!st.empty())
        {
            Node *temp=st.top();
            st.pop();
            ans.push_back(temp->val);
            for(int i=temp->children.size()-1;i>=0;i--)
            {
                if(temp->children[i]) st.push(temp->children[i]);
            }
        }
        return ans;
    }
};