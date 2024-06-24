class Solution {
public:
    int getMinimumDifference(TreeNode* root) {
        vector<int> t;
        inorder(root, t);

        int mini = INT_MAX;
        for(int i=0; i<t.size()-1; i++) {
            mini = min(mini, t[i+1] - t[i]);
        }

        return mini;
    }

    void inorder(TreeNode *root, vector<int> &t) {
        if(root == NULL) return;
        inorder(root -> left, t);
        t.push_back(root -> val);
        inorder(root -> right, t);
    }
};
