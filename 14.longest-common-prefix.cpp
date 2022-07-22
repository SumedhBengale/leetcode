/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
#include<string>
#include<vector>
#include<iostream>

using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1){return strs[0];}
        int res=strs[0].length();
        string str0=strs[0];
        for(int i=1;i<strs.size();i++){
            int min=0;
            for(int j=0;j<strs[i].length();j++){
                if(strs[i][j]==str0[j]){min++;}
                else{break;}
            }
            if(min<=res)res=min;
            cout << res<< endl;
            cout << strs[i] <<endl;
        }
        return str0.substr(0,res);
    }
};
// @lc code=end

