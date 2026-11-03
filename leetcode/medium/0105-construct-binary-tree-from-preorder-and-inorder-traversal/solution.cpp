class Solution {
    unordered_map<int, int> inorderPos;
    int preorderPos = 0;

    TreeNode* build(vector<int>& preorder, int left, int right) {
        if (left > right) return nullptr;

        int value = preorder[preorderPos++];
        TreeNode* root = new TreeNode(value);

        int mid = inorderPos[value];
        root->left = build(preorder, left, mid - 1);
        root->right = build(preorder, mid + 1, right);

        return root;
    }

public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        inorderPos.clear();
        preorderPos = 0;

        for (int i = 0; i < inorder.size(); ++i) {
            inorderPos[inorder[i]] = i;
        }

        return build(preorder, 0, static_cast<int>(inorder.size()) - 1);
    }
};