#
# @lc app=leetcode id=28 lang=python3
#
# [28] Implement strStr()
#

# @lc code=start
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        if not needle:
            return 0

        for i, s1 in enumerate(haystack):
            for j, s2 in enumerate(needle):
                if i + len(needle) > len(haystack):
                    return -1
                if i + j == len(haystack):
                    break
                if haystack[i + j] == needle[j]:
                    if j == len(needle) - 1:
                        return i
                    continue
                else:
                    break

        return -1


# @lc code=end

Solution().strStr("a", "a")
