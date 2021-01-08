/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

#include <unordered_map>
#include <vector>

using namespace std;

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, bool> m;

        for (const auto& n : nums) {
            if (m.find(n) != m.end()) {
                return true;
            }

            m[n] = true;
        }

        return false;
    }
};
// @lc code=end
