#
# @lc app=leetcode id=14 lang=python3
#
# [14] Longest Common Prefix
#

from typing import List

# @lc code=start
class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if not strs:
            return ""

        i = 0
        cmn_p = []

        while True:
            p = None

            for s in strs:
                if i >= len(s):
                    return "".join(cmn_p)

                if p:
                    if p == s[i]:
                        continue
                    else:
                        return "".join(cmn_p)
                else:
                    p = s[i]

            cmn_p.append(p)
            i += 1

        return ""


# @lc code=end

r = Solution().longestCommonPrefix([])
print(r)
