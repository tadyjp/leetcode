#
# @lc app=leetcode id=1 lang=python3
#
# [1] Two Sum
#

# @lc code=start
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hash = {}
        for i, v in enumerate(nums):
            hash[v] = i

        for i, v in enumerate(nums):
            if target - v in hash:
                j = hash[target - v]
                if i < j:
                    return [i, j]


# @lc code=end
