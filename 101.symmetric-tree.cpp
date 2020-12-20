/*
 * @lc app=leetcode id=101 lang=cpp
 *
 * [101] Symmetric Tree
 */

struct TreeNode
{
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
class Solution
{
public:
    bool isSymmetric(TreeNode *root)
    {
        if (!root)
        {
            return true;
        }
        return isMirror(root->left, root->right);
    }

    bool isMirror(TreeNode *p, TreeNode *q)
    {
        if (!p || !q)
        {
            return p == q;
        }

        return p->val == q->val && isMirror(p->left, q->right) && isMirror(p->right, q->left);
    }
};
// @lc code=end

int main()
{
    // Solution().isSymmetric(
    //     new TreeNode(1,
    //                  new TreeNode(2), new TreeNode(3)));

    Solution().isSymmetric(
        new TreeNode());

    return 0;
}
