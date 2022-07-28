/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size()-1;
        while(size>=0){
            if (digits[size]+1 >9){
                digits[size] = digits[size] + 1 - 10;
                if(size==0) digits.insert(digits.begin(),1);
            }
            else{
                digits[size] = digits[size] + 1;
                break;
            } 
            size--;
        }
        return digits;
    }
};
// @lc code=end

