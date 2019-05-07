/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

#include <iostream>

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;

        long result = 0;
        int origin = x;

        while(x)
        {
            result = result*10 + x%10;
            x /= 10;
        }

        return origin == (int)result;
    }
};

