/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
#include<vector>

using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int position=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){return i;}
        else if(nums[i]<target){position=i;}
        }
        if(position!=-1){
            return position+1;
        }
        else{
            return 0;
        };
    }
};
// @lc code=end

