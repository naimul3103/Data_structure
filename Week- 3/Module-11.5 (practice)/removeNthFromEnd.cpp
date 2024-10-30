// Problem Statement;
// https://leetcode.com/problems/remove-nth-node-from-end-of-list/

//-> Solution:

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
class Solution
{

public:
     int size(ListNode *head)
     {
          int cnt = 0;
          ListNode *temp = head;
          while (temp != NULL)
          {
               temp = temp->next;
               cnt++;
          }
          return cnt;
     }
     ListNode *removeNthFromEnd(ListNode *head, int n)
     {
          int N = size(head);
          if (N == n)
          {
               return head->next;
          }
          ListNode *temp = head;
          for (int i = 1; i < (N - n); i++)
          {
               temp = temp->next;
          }
          temp->next = temp->next->next;

          return head;
     }
};