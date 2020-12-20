/*
 * @lc app=leetcode id=415 lang=cpp
 *
 * [415] Add Strings
 */

#include <stdlib.h>
#include <string>

using namespace std;

// @lc code=start
class Solution
{
public:
    string addStrings(string num1, string num2)
    {
        if (num1.length() < num2.length())
        {
            num1.swap(num2);
        }

        bool move_up = false;
        int len1 = num1.length();
        int len2 = num2.length();

        for (int i = 0; i < len1; ++i)
        {
            int n1 = num1[len1 - i - 1] - '0';

            if (i < len2)
            {
                int n2 = num2[len2 - i - 1] - '0';
                n1 += n2;
            }
            if (move_up)
            {
                n1 += 1;
                move_up = false;
            }
            if (n1 > 9)
            {
                n1 -= 10;
                move_up = true;
            }
            num1[len1 - i - 1] = n1 + '0';
        }
        if (move_up)
        {
            num1.insert(num1.begin(), '1');
        }

        return num1;
    }
};
// @lc code=end

int main()
{
    Solution().addStrings("9", "99");
}
