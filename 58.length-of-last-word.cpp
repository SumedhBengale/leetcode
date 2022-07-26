/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */

// @lc code=starta
#include<string>
#include<iostream>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int space=0;
       for(int i=s.size()-1;i>=0;i--){
            if(isspace(s[i])){space++;}
            else {
                for(int j=i;j>=0;j--){
                    if(isspace(s[j])){return i-j;}
                }
            }
       }
       if(space==0){
        return s.size();
       }
       else{
        return s.size()-space;
       }
    }
};
// @lc code=end

