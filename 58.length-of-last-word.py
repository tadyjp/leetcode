#
# @lc app=leetcode id=58 lang=python3
#
# [58] Length of Last Word
#

# @lc code=start
class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        l = s.split()
        if not l:
            return 0
        return len(l[-1])


# @lc code=end
