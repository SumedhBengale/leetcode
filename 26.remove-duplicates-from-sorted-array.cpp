/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        for(int i:nums)
            if(ranges::binary_search()){
               nums[k]=nums[i];
               k++;
            }
        return k;
    }
};
// @lc code=end

