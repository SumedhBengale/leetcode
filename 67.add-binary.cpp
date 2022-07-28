/*
 * @lc app=leetcode id=67 lang=cpp
 *
 * [67] Add Binary
 */

// @lc code=start
#include<string>
#include<bitset>
#include<regex>
using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {
        long x=stoi(a,0,2);
        long y=stoi(b,0,2);
        long z=x+y;
        long ret=stoi(bitset<32>(z).to_string());

        return to_string(ret);
    }
};
// @lc code=end

