/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

#include <cstdlib>

class Solution {
public:
    int reverse(int x) {
        long result = 0;
        
        while(x)
        {
            long temp = result*10;
            
            if (temp > INT32_MAX || temp < INT32_MIN)
                return 0;

            result = temp + x%10;
            x /= 10;
        }

        return (int)result;
    }
};

