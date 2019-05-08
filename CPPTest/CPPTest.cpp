#include "CPPTest.h"

#include <string>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>

int main()
{

    std::set<std::vector<int>> ccc;
    std::vector<int> a = {1,2,3};
    std::vector<int> b = a;
    ccc.insert(b);
    
    b.erase(std::remove(b.begin(), b.end(), 1), b.end());

    std::vector<int> bb = {1,2,4};
    auto iter = bb.begin();
    bb.erase(iter);

    for (auto iter = bb.begin(); iter != bb.end(); ++iter)
    {
        std::cout << *iter << std::endl;
    }

    letterCasePermutation("a1b2");
    return 0;
}