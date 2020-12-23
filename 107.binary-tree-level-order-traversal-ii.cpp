/*
 * @lc app=leetcode id=107 lang=cpp
 *
 * [107] Binary Tree Level Order Traversal II
 */

#include <vector>

using namespace std;

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
    vector<vector<int>> ret;

    void pushNode(TreeNode *node, int level)
    {
        if (!node)
        {
            return;
        }

        if (ret.size() <= level)
        {
            ret.push_back(vector<int> {node->val});
        } else
        {
            ret[level].push_back(node->val);
        }

        pushNode(node->left, level + 1);
        pushNode(node->right, level + 1);
    }

public:
    vector<vector<int>> levelOrderBottom(TreeNode *root)
    {
        pushNode(root, 0);

        reverse(ret.begin(), ret.end());
        return ret;
    }
};
// @lc code=end
