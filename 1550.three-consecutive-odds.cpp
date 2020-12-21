/*
 * @lc app=leetcode id=1550 lang=cpp
 *
 * [1550] Three Consecutive Odds
 */

#include <vector>

using namespace std;

// @lc code=start
class Solution
{
public:
    bool threeConsecutiveOdds(vector<int> &arr)
    {
        int i = 0;
        int j = 0;
        int k = 0;

        for (const auto &v : arr)
        {
            i = j;
            j = k;
            k = v;
            if (i % 2 == 1 && j % 2 == 1 && k % 2 == 1)
            {
                return true;
            }
        }

        return false;
    }
};
// @lc code=end
