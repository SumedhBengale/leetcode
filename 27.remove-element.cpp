/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        const auto it = remove(nums.begin(), nums.end(), val);
        return distance(nums.begin(), it);
    }
};
// @lc code=end

