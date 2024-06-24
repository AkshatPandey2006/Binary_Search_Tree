class Solution {
private:
    int sum = 0;
    int inorder(TreeNode *root, int left, int right) {
        if(root) {
            inorder(root -> left, left, right);

            if(root -> val >= left and root -> val <= right) {
                sum += root -> val;
            } 

            inorder(root -> right, left, right);
        }
        return sum;
    }

public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(!root) return 0;
        return inorder(root, low, high);
    }
};
