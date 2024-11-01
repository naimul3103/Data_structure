/**
 * https://leetcode.com/problems/reverse-linked-list/
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
     void reversed(ListNode *&head, ListNode *cur)
     {
          if (cur->next == NULL)
          {
               head = cur;
               return;
          }
          reversed(head, cur->next);
          cur->next->next = cur;
          cur->next = NULL;
     }

public:
     ListNode *reverseList(ListNode *head)
     {
          if (head == NULL)
               return head;
          reversed(head, head);
          return head;
     }
};