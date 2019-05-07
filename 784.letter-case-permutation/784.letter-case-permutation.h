/*
 * @lc app=leetcode id=784 lang=cpp
 *
 * [784] Letter Case Permutation
 */

#include <string>
#include <vector>
#include <iostream>

class Solution {
public:
    std::vector<std::string> letterCasePermutation(std::string S) {
        std::vector<std::string> result;
        for(std::string::iterator i = S.end()-1; i >= S.begin(); --i)
        {
            if ((*i >= 'A' && *i <= 'Z') || (*i >= 'a' && *i <= 'z'))
            {
                if (*i >= 'A' && *i <= 'Z') *i += 32;
                if (result.size() == 0)
                {
                    result.push_back(std::string(1, *i));
                    result.push_back(std::string(1, (char)*i-32));
                }
                else
                {
                    std::vector<std::string> temp = result;

                    for(std::vector<std::string>::iterator j = result.begin(); j != result.end(); ++j)
                    {
                        j->insert(0, 1, *i);
                    }

                    for(std::vector<std::string>::iterator j = temp.begin(); j != temp.end(); ++j)
                    {
                        j->insert(0, 1, char(*i-32));
                    }

                    result.insert(result.end(), temp.begin(), temp.end());
                }
            }
            else
            {
                if (result.size() == 0)
                {
                    result.push_back(std::string(1, *i));
                }
                else
                {
                    for(std::vector<std::string>::iterator j = result.begin(); j != result.end(); ++j)
                    {
                        j->insert(0, 1, *i);
                    }
                }
                
            }
            
        }
        return result;
    }
};

