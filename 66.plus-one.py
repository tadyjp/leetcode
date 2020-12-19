#
# @lc app=leetcode id=66 lang=python3
#
# [66] Plus One
#

# @lc code=start
class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        digits.insert(0, 0)
        digits[-1] += 1

        for i in range(len(digits)):
            if digits[-1 - i] > 9:
                digits[-1 - i] -= 10
                digits[-2 - i] += 1
            else:
                break

        if digits[0] == 0:
            digits.pop(0)

        return digits


# @lc code=end
