/*
 * @lc app=leetcode id=110 lang=cpp
 *
 * [110] Balanced Binary Tree
 */

#include <algorithm>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

using namespace std;

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
    int depth(TreeNode* node) {
        if (!node) {
            return 0;
        }

        int depth_l = depth(node->left);
        if (depth_l == -10) {
            return -10;
        }
        int depth_r = depth(node->right);
        if (depth_r == -10) {
            return -10;
        }
        if (abs(depth_l - depth_r) > 1) {
            return -10;
        }

        return max(depth(node->left), depth(node->right)) + 1;
    }

public:
    bool isBalanced(TreeNode* root) {
        return depth(root) != -10;
    }
};
// @lc code=end
