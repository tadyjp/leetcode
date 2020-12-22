/*
 * @lc app=leetcode id=168 lang=cpp
 *
 * [168] Excel Sheet Column Title
 */

#include <string>

using namespace std;

// @lc code=start
class Solution {
public:
    string convertToTitle(int n) {
        string s = "";

        while (n > 0)
        {
            int a = (n - 1) % 26;
            s.insert(s.begin(), 'A' + a);
            n = (n - a)/ 26;
        }

        return s;
    }
};
// @lc code=end

int main()
{
    Solution().convertToTitle(26);
}
