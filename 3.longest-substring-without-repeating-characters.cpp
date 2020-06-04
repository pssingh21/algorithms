// @before-stub-for-debug-begin
#include "commoncppproblem3.h"
#include <string>
#include <vector>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */
#include <iostream>
#include <map>
#include <string>
using namespace std;

// @lc code=start
class Solution {
public:
    /**
 * @brief Find longest substring without repeating characters
 * Mapping of character to index
 * Skip characters when repetition found
 * 
 * @param s input string
 * @return int length of longest substring without repeating characters
 */
    int lengthOfLongestSubstring(string s) {
        map<char, int> dict;
        int count = 0;
        int maxLength = 0;
        for (int i = 0; i < s.length(); i++) {
            auto search = dict.find(s[i]);
            if (search == dict.end()) {
                dict.insert(pair<char, int>(s[i], i));
                count++;
                if (count > maxLength) {
                    maxLength = count;
                }
            } else {
                count = 1;
                dict.clear();
                dict.insert(pair<char, int>(s[i], i));
            }
        }
        return maxLength;
    }
};
// @lc code=end
