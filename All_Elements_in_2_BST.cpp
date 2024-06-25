class Solution {
private:
    vector<int> final;
    void inorder(TreeNode *root) {
        if(root == NULL) return;
        inorder(root -> left);
        final.push_back(root -> val);
        inorder(root -> right);
    }

public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        inorder(root1);
        inorder(root2);
        sort(final.begin(), final.end());
        return final;
    }
};
