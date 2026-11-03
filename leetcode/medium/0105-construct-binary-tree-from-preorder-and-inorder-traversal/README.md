# Construct Binary Tree from Preorder and Inorder Traversal

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given two integer arrays `preorder` and `inorder` where `preorder` is the preorder traversal of a binary tree and `inorder` is the inorder traversal of the same tree, construct and return  *the binary tree*.

 

 **Example 1:** 

```
Input: preorder = [3,9,20,15,7], inorder = [9,3,15,20,7]
Output: [3,9,20,null,null,15,7]

```

 **Example 2:** 

```
Input: preorder = [-1], inorder = [-1]
Output: [-1]

```

 

 **Constraints:** 

- 1 <= preorder.length <= 3000
- inorder.length == preorder.length
- -3000 <= preorder[i], inorder[i] <= 3000
- preorder and inorder consist of unique values.
- Each value of inorder also appears in preorder.
- preorder is guaranteed to be the preorder traversal of the tree.
- inorder is guaranteed to be the inorder traversal of the tree.

## Solution

**Language:** C++  
**Runtime:** 4 ms (beats 61.26%)  
**Memory:** 27.3 MB (beats 68.51%)  
**Submitted:** 2026-11-03T05:57:04.858Z  

```cpp
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
```

---

[View on LeetCode](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/)