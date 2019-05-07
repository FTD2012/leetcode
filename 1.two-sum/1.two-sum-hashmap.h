
/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target)
    {
        std::unordered_map<int, int> index;
        for(int i = 0; i < nums.size(); ++i)
        {
            auto iter = index.find(nums[i]);
            if (iter != index.end())
                return {iter->second, i};
            index.emplace(target-nums[i], i);
        }
        return {0, 0};
    }
};

