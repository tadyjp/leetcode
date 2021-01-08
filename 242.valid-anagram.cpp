/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

#include <string>
#include <vector>

using namespace std;

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        vector<char> s1(s.begin(), s.end());
        sort(s1.begin(), s1.end());
        vector<char> s2(t.begin(), t.end());
        sort(s2.begin(), s2.end());

        for (int i = 0, len = s.size(); i < len; ++i) {
            if (s1[i] != s2[i]) {
                return false;
            }
        }

        return true;
    }
};
// @lc code=end
