/*
 * @lc app=leetcode id=1629 lang=cpp
 *
 * [1629] Slowest Key
 */

#include <string>
#include <vector>

using namespace std;

// @lc code=start
class Solution
{
public:
    char slowestKey(vector<int> &releaseTimes, string keysPressed)
    {
        int t_prev = 0;
        int max_t = 0;
        char ch = '-';

        for (int i = 0, len = releaseTimes.size(); i < len; ++i)
        {
            if ((releaseTimes[i] - t_prev > max_t) || (releaseTimes[i] - t_prev == max_t && keysPressed[i] > ch))
            {
                max_t = releaseTimes[i] - t_prev;
                ch = keysPressed[i];
            }

            t_prev = releaseTimes[i];
        }

        return ch;
    }
};
// @lc code=end

int main()
{
    vector<int> data{12, 23, 36, 46, 62};
    Solution().slowestKey(data, "spuda");
}
