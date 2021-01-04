/*
 * @lc app=leetcode id=112 lang=cpp
 *
 * [112] Path Sum
 */


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if (!root) {
            return false;
        }
        if (!root->left && !root->right) {
            return sum == root->val;
        }
        return root->left && hasPathSum(root->left, sum - root->val) || root->right && hasPathSum(root->right, sum - root->val);
    }
};
// @lc code=end

int main() {
    TreeNode *t = new TreeNode(1, new TreeNode(2), nullptr);
    // TreeNode *t = new TreeNode();
    bool b = Solution().hasPathSum(t, 1);
    return 0;
}
