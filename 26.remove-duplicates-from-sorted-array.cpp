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
            for(int i=1;i<nums.size();i++){
                if(nums[i]!=nums[k]){
                    k++;
                    nums[k]=nums[i];
                    }
            }
            return k+1;
    }
};
// @lc code=end
