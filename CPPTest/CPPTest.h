#include <vector>
#include <string>

std::vector<std::string> letterCasePermutation(std::string S) {
        std::vector<std::string> result;
        std::vector<char> character;
        for(std::string::const_iterator i = S.begin(); i != S.end(); ++i)
        {
            if ((*i >= 'A' && *i <= 'Z') || (*i >= 'a' && *i <= 'z'))
            {
                character.push_back(*i);
                if (result.size() == 0)
                {
                    result.push_back(std::string(1, *i));
                    result.push_back(std::string(1, *i-32));
                }
                else
                {
                    std::vector<std::string> temp = result;

                    for(std::vector<std::string>::iterator j = result.begin(); j != result.end(); ++j)
                    {
                        j->push_back(*i);
                    }

                    for(std::vector<std::string>::iterator j = temp.begin(); j != temp.end(); ++j)
                    {
                        j->push_back(*i-32);
                    }

                    result.insert(temp.begin(), temp.end(), temp.end());
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
                        j->push_back(*i);
                    }
                }
                
            }
            
        }
        return result;
    }

