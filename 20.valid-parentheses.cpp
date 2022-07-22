/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
#include<string>
#include<vector>
#include<iostream>

using namespace std;
class Solution {
public:
    bool isValid(string s) {
        vector<int> left;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                left.push_back(s[i]);
            }
            else if(s[i]==')' && left.size()!=0 && left[left.size()-1]=='('){left.pop_back();}
            else if(s[i]==']' && left.size()!=0 && left[left.size()-1]=='['){left.pop_back();}
            else if(s[i]=='}' && left.size()!=0 && left[left.size()-1]=='{'){left.pop_back();}

            else{return false;}
        }

        if(left.size()!=0){return false;}
        else{return true;}
            
    }

};
// @lc code=end

