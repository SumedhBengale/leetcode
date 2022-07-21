/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
#include<sstream>
#include<vector>
using namespace std;
class Solution {
public:
    bool isPalindrome(long x) {
        if(x>0&&x%10!=0){
        long y=x;
        vector<long> a;
        while(y!=0){
            long rem=y%10;
            a.push_back(rem);
            y/=10;

        }
        stringstream ss;
        for(long i:a)
            ss<<i;

        long result;
        ss>>result;
        if(x==result){
            return true;
        }
        return false;
        }
        else if(x==0){
            return true;
        }
        else{
            return false;
        }
    }
};
// @lc code=end

