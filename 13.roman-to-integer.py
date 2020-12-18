#
# @lc app=leetcode id=13 lang=python3
#
# [13] Roman to Integer
#

# @lc code=start
class Solution:
    def romanToInt(self, s: str) -> int:
        r = 0
        l = list(s)

        v = l.pop(-1)
        while True:
            if v == "=":
                return r
            elif v == "I":
                r += 1
                v = l.pop(-1) if l else "="
                continue
            elif v == "V":
                v2 = l.pop(-1) if l else "="
                if v2 == "I":
                    r += 4
                    v = l.pop(-1) if l else "="
                else:
                    r += 5
                    v = v2
                continue
            elif v == "X":
                v2 = l.pop(-1) if l else "="
                if v2 == "I":
                    r += 9
                    v = l.pop(-1) if l else "="
                else:
                    r += 10
                    v = v2
                continue
            elif v == "L":
                v2 = l.pop(-1) if l else "="
                if v2 == "X":
                    r += 40
                    v = l.pop(-1) if l else "="
                else:
                    r += 50
                    v = v2
                continue
            elif v == "C":
                v2 = l.pop(-1) if l else "="
                if v2 == "X":
                    r += 90
                    v = l.pop(-1) if l else "="
                else:
                    r += 100
                    v = v2
                continue
            elif v == "D":
                v2 = l.pop(-1) if l else "="
                if v2 == "C":
                    r += 400
                    v = l.pop(-1) if l else "="
                else:
                    r += 500
                    v = v2
                continue
            elif v == "M":
                v2 = l.pop(-1) if l else "="
                if v2 == "C":
                    r += 900
                    v = l.pop(-1) if l else "="
                else:
                    r += 1000
                    v = v2
                continue

            v = l.pop(-1) if l else "="


# @lc code=end

r = Solution().romanToInt("LVIII")
print(r)
