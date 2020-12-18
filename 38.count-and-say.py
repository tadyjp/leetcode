#
# @lc app=leetcode id=38 lang=python3
#
# [38] Count and Say
#

# @lc code=start
class Solution:
    def countAndSay(self, n: int) -> str:
        if n == 1:
            return "1"

        return self.say(self.countAndSay(n - 1))

    def say(self, s: str) -> str:
        s_list = list(s)
        s1 = s_list.pop(-1)
        cnt = 1
        suf = []

        while True:
            if not s_list:
                suf.insert(0, s1)
                suf.insert(0, str(cnt))
                return "".join(suf)

            s2 = s_list.pop(-1)
            if s1 == s2:
                cnt += 1
                continue

            suf.insert(0, s1)
            suf.insert(0, str(cnt))
            s1 = s2
            cnt = 1


# @lc code=end

r = Solution().countAndSay(9)
print(r)

# 1
# 11
# 21
# 12 11
# 11 12 21
# 31 22 11
# 13 11 22 21
# 11 13 21 32 11
# 31 13 12 11 13 12 21
