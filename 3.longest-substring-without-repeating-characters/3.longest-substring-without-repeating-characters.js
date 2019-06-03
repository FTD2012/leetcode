/*
 * @lc app=leetcode id=3 lang=javascript
 *
 * [3] Longest Substring Without Repeating Characters
 */
/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function(s) {
    let dict = {};
    let start = -1;
    let maxLength = 0;
    for (let i = 0; i < s.length; i++)
    {
        if (dict[s[i]] === void 0) dict[s[i]] = -1;
        if (dict[s[i]] > start)
            start = dict[s[i]];
        dict[s[i]] = i;
        maxLength = maxLength > i-start ? maxLength : i-start;
    }
    return maxLength;
    
};

lengthOfLongestSubstring("abcabcbb");

