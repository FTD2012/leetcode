/*
 * @lc app=leetcode id=491 lang=cpp
 *
 * [491] Increasing Subsequences
 */

#include <vector>
#include <set>
#include <algorithm>

class Solution {
public:

    void getSequences(std::set<std::vector<int>>& setVector, std::vector<int> nums)
    {
        setVector.insert(nums);

        if (nums.size() <= 2)
            return;

        for (size_t i = 0; i < nums.size(); ++i) 
        {
            std::vector<int> temp = nums;
            temp.erase(std::find(temp.begin(), temp.end(), nums[i]));
            getSequences(setVector, temp);
        }

    }

    std::vector<std::vector<int>> findSubsequences(std::vector<int>& nums)
    {
        std::vector<std::vector<int>> result;
        std::set<std::vector<int>> setVector;

        getSequences(setVector, nums);

        result = std::vector<std::vector<int>>(setVector.begin(), setVector.end());

        return result;
    }
};

