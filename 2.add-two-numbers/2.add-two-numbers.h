/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

#include <cmath>
#include <iostream>

// struct ListNode
// {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(nullptr) {}
// };

class Solution
{
public:
    /**
     * 下方这种实现不能实现大数相加
    */
    static ListNode *buildList(unsigned long long val)
    {
        ListNode *ll = nullptr, *end = nullptr, *node = nullptr;

        if (!val)
        {
            ll = new ListNode(0);
            return ll;
        }
        else
        {
            while (val)
            {
                unsigned long long result = val % 10;
                val /= 10;
                node = new ListNode(result);
                if (!ll)
                {
                    ll = node;
                    end = ll;
                }
                else
                {
                    end->next = node;
                    end = node;
                }
            }
            return ll;
        }
    }

    static unsigned long long buildVal(ListNode *ll)
    {
        unsigned long long result = 0, index = 0;
        while (ll)
        {
            result = ll->val * (pow(10, index++)) + result;
            ll = ll->next;
        }
        return result;
    }

    // ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    // {
    //     return buildList(buildVal(l1) + buildVal(l2));
    // }


    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        bool isUpdate = false;
        ListNode *ll = nullptr, *end = nullptr, *temp;
        while(l1 || l2)
        {
            int first, second, result;
            if (l1 && l2)
            {
                first = l1->val;
                second = l2->val;
            }
            else if (!l1)
            {
                first = 0;
                second = l2->val;
            }
            else if (!l2)
            {
                first = l1->val;
                second = 0;
            }
            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;

            result = first + second;

            if (isUpdate)
            {
                result += 1;
            }
            
            if (result >= 10)
            {
                result %= 10;
                isUpdate = true;
            }
            else
            {
                isUpdate = false;
            }

            if (!ll)
            {
                ll = new ListNode(result);
                end = ll;
            }
            else
            {
                temp = new ListNode(result);
                end->next = temp;
                end = temp;
            }
        }

        if (isUpdate)
        {
            temp = new ListNode(1);
            end->next = temp;
            end = temp;
            isUpdate = false;
        }

        return ll;
    }

};
