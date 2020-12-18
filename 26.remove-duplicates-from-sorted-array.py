#
# @lc app=leetcode id=26 lang=python3
#
# [26] Remove Duplicates from Sorted Array
#

from typing import List

# @lc code=start
class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        prev = None
        i = 0

        while True:
            if i == len(nums):
                break

            if nums[i] == prev:
                del nums[i]
                continue

            prev = nums[i]
            i += 1

        return len(nums)


# @lc code=end

r = Solution().removeDuplicates([0, 0, 1, 1, 1, 2, 2, 3, 3, 4])
print(r)
