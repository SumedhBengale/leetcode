/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
#include<vector>

using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i=digits.size()-1;i>=0;i--){
            if(digits[digits.size()-1]==9){
                if(digits.size()==1){
                    digits.resize(2);
                }
                for(int j=digits.size()-2;j>=0;j++){
                    if(digits[j]==9){
                        digits[j]=0;
                    }
                    else{
                        digits[j]++;
                        break;
                    }
                }
            }
            else{
                digits[digits.size()-1]++;
                break;
            }
        }
        return digits;
    }
};
// @lc code=end

