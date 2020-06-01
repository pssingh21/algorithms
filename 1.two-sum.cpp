/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

#include <unordered_map>
#include <vector>
using namespace std;

//naive solution
// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        vector<int> result;
        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
        return result;
    }
};
// @lc code=end

//optimal solution

/**
 * @brief Use Hash table for constant lookup time. Key => Each element. Values => Index corresponding to the element.
 * Loop through the array once
 * In each pass of element, check to see if target minus current element exists in hash table.
 * If it exists, solution is current index and index of taget - arr[i] (stored in value field of hash table).
 * If it does not exist, add index of current element to current element key in hash table.
 * 
 */
class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> indices;
        for (int i = 0; i < nums.size(); i++) {
            if (indices.find(target - nums[i]) != indices.end()) {
                return {indices[target - nums[i]], i};
            }
            indices[nums[i]] = i;
        }
    }
}
