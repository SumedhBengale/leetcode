/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
#include<string>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        int result=0;
        unordered_map<char,int> map{{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'C',100},{'D',500},{'M',1000}};
        
        for (int i=0;i<s.length();i++){
            if(map[s[i]] < map[s[i+1]]){
                result-=map[s[i]];
            }
            else{
                result+=map[s[i]];
            }
        }

        return result;
    }
};
// @lc code=end