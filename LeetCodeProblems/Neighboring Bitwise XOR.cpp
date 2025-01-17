// Problem Link
// https://leetcode.com/problems/neighboring-bitwise-xor/description/



// Source Code

class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
       int res = 0;

       for(int i : derived){
        res ^= i;
       }
       if(res == 0){
        return true;
       }else{
        return false;
       }
    }
};