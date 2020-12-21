/*
 * @lc app=leetcode id=88 lang=cpp
 *
 * [88] Merge Sorted Array
 */

#include <vector>

using namespace std;

// @lc code=start
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        --m;
        --n;
        while (m >= 0 && n >= 0)
        {
            if (nums1[m] < nums2[n])
            {
                nums1[m + n + 1] = nums2[n];
                --n;
            }
            else
            {
                nums1[m + n + 1] = nums1[m];
                --m;
            }
        }
        while (n >= 0)
        {
            nums1[n] = nums2[n];
            --n;
        }
    }
};
// @lc code=end