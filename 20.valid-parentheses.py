#
# @lc app=leetcode id=20 lang=python3
#
# [20] Valid Parentheses
#

# @lc code=start
class Solution:
    def isValid(self, s: str) -> bool:
        paren = {
            "(": ")",
            "[": "]",
            "{": "}",
        }
        paren_rev = {
            ")": "(",
            "]": "[",
            "}": "{",
        }

        stack = []

        for x in s:
            if x in paren:
                stack.append(x)

            if x in paren_rev:
                if not stack:
                    return False

                prev = stack.pop(-1)
                if paren_rev[x] != prev:
                    return False

        return len(stack) == 0


# @lc code=end
