#
# @lc app=leetcode id=7 lang=python3
#
# [7] Reverse Integer
#

# @lc code=start
class Solution:
    def reverse(self, x: int) -> int:
        s = str(x if x >= 0 else -x)
        r = 0
        for i in range(len(s)):
            r += int(s[i]) * 10 ** i

        r2 = r if x >= 0 else -r
        if r2 > 2 ** 31 - 1 or r2 < -(2 ** 31):
            return 0

        return r2


# @lc code=end
