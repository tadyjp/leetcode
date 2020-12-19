#
# @lc app=leetcode id=69 lang=python3
#
# [69] Sqrt(x)
#

# @lc code=start
class Solution:
    def mySqrt(self, x: int) -> int:
        if x == 0:
            return 0

        left = 10 ** ((len(str(x)) - 1) // 2)
        right = left * 10

        while left <= right:
            mid = (left + right) // 2

            if mid ** 2 <= x < (mid + 1) ** 2:
                return mid
            elif mid ** 2 > x:
                right = mid - 1
            else:
                left = mid + 1


# @lc code=end

r = Solution().mySqrt(10)
print(r)
