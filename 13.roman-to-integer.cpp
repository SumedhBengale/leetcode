/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
#include<string>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        int result=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='I'){result+=1;}
            else if(s[i]=='V'){
                    if(s[i-1]!='I'){
                        result+=5;
                    }
                    else{
                        result+=4;
                    }
                }
            else if(s[i]=='X'){
                    if(s[i-1]!='I'){
                        result+=10;
                    }
                    else{
                        result+=9;
                    }
                }
            else if(s[i]=='L'){
                    if(s[i-1]!='X'){
                        result+=50;
                    }
                    else{
                        result+=40;
                    }
                }
            else if(s[i]=='C'){
                    if(s[i-1]!='X'){
                        result+=100;
                    }
                    else{
                        result+=90;
                    }
                }
            else if(s[i]=='D'){
                    if(s[i-1]!='C'){
                        result+=500;
                    }
                    else{
                        result+=400;
                    }
                }
            else if(s[i]=='M'){
                    if(s[i-1]!='C'){
                        result+=1000;
                    }
                    else{
                        result+=900;
                    }
                }
        }
        return result;
    }
};
// @lc code=end

