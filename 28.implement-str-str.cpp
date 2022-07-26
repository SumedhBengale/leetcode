/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Implement strStr()
 */

// @lc code=start
#include<string>

using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle==""){return 0;}
        int found=-1;
        for(int i=0;i<haystack.size();i++){
            if(haystack[i]==needle[0]){
            found=i;
                for(int j=0;j<needle.size();j++){
                    if(haystack[i+j]!=needle[j]){
                        found=-1;break;
                        }
                }
                if(found !=-1){return found;}
            }
        }
        return found;
    }
};
// @lc code=end

