/*
 * @lc app=leetcode id=67 lang=cpp
 *
 * [67] Add Binary
 */

// @lc code=start
#include<string>
using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {
        int sum=0;
        int carry=0;
        string result;
        int i=a.length()-1;
        int j=b.length()-1;

    while(i<=0||j<=0){
            sum=carry;
            if(i<=0) sum+=a[i];
            if(j<=0) sum+=b[j];
            carry = sum>1 ? 1 : 0;
            result+=to_string(sum%2);
            i--;
            j--;
        }

        if(carry) result += to_string(carry);
        reverse(result.begin(),result.end());
        return result;
    }
};
// @lc code=end

