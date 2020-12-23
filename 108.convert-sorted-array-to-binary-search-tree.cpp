/*
 * @lc app=leetcode id=108 lang=cpp
 *
 * [108] Convert Sorted Array to Binary Search Tree
 */

#include <vector>

using namespace std;
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
    TreeNode* makeSubTree(vector<int> &v, int l, int r)
    {
        if (l >= r)
        {
            return NULL;
        }

        int mid = (l+r)/2;
        TreeNode* node = new TreeNode(v[mid]);
        node->left = makeSubTree(v, l, mid);
        node->right = makeSubTree(v, mid+1, r);

        return node;
    }

public:
    TreeNode* sortedArrayToBST(vector<int>& nums)
    {
        return makeSubTree(nums, 0, nums.size());
    }
};
// @lc code=end
