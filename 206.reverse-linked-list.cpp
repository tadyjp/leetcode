/*
 * @lc app=leetcode id=206 lang=cpp
 *
 * [206] Reverse Linked List
 */


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

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
    ListNode* reverseListIteratively(ListNode* head) {
        ListNode* cur = head;
        ListNode* next = nullptr;
        ListNode* prev = nullptr;

        while (cur)
        {
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }

        return prev;
    }

    ListNode* reverseListRecursively(ListNode* head) {
        if (!head || !head->next) {
            return head;
        }
        ListNode* last = reverseListRecursively(head->next);
        head->next->next = head;
        head->next = nullptr;
        return last;
    }


public:
    ListNode* reverseList(ListNode* head) {
        // return reverseListIteratively(head);
        return reverseListRecursively(head);
    }
};
// @lc code=end

int main()
{
    Solution().reverseList(new ListNode(1, new ListNode(2, new ListNode(3))));
}
