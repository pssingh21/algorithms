/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    /**
 * @brief add number stored in singly linked list
 * set default carry to zero
 * sum heads of l1 and l2
 * store sum mod 10 in outpur array
 * if overflow exists while adding, set carry to overflow
 * sum next digit of l1 and l2 and carry input
 * if l1 or l2 is empty, digit is zero
 * if both are empty, return
 * @param l1 List node 1
 * @param l2 List node 2
 * @return ListNode* listnode of result
 */
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode *output;
        std::cout << l1->val;
        int carry;
        while (l1->next != nullptr) {
            int result = l1->val + l2->val + carry;
            output->val = result % 10;
            carry = (result > 10) ? 1 : 0;
        }
        return output;
    }
};
// @lc code=end
