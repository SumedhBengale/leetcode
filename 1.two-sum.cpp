/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;
class Solution {
public:

    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> map;
    
    for (int i = 0;; ++i) {
        auto found = map.find(target - nums[i]);
        
        if (found != map.end()) 
            return vector<int> {found->second,i};
            
        map[nums[i]] = i;
    }
}
};
// @lc code=end