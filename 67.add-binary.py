#
# @lc app=leetcode id=67 lang=python3
#
# [67] Add Binary
#

# @lc code=start
class Solution:
    def addBinary(self, a: str, b: str) -> str:
        if not a:
            return b
        if not b:
            return a

        if a[-1] == "0":
            return self.addBinary(a[:-1], b[:-1]) + b[-1]
        else:  # a[-1] == "1"
            if b[-1] == "0":
                return self.addBinary(a[:-1], b[:-1]) + "1"
            else:  # b[-1] == "1"
                return self.addBinary(a[:-1], self.addBinary(b[:-1], "1")) + "0"


# @lc code=end

r = Solution().addBinary("1010", "1011")
print(r)
