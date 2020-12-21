/*
 * @lc app=leetcode id=796 lang=cpp
 *
 * [796] Rotate String
 */

#include <string>

using namespace std;

// @lc code=start
class Solution
{
public:
    bool rotateString(string A, string B)
    {
        if (A.length() != B.length())
        {
            return false;
        }
        A = A + A;

        return A.find(B) != string::npos;
    }
};
// @lc code=end

int main()
{
    Solution().rotateString("abcde", "cdeab");
}
