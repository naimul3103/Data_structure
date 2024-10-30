// problem link;
// https://leetcode.com/problems/middle-of-the-linked-list/description/

class Solution
{
public:
     int size(ListNode *head)
     {
          ListNode *temp = head;
          int cnt = 0;
          while (temp != NULL)
          {
               cnt++;
               temp = temp->next;
          }
          return cnt;
     }
     ListNode *middleNode(ListNode *head)
     {
          int n = size(head);
          ListNode *temp = head;
          for (int i = 1; i <= n / 2; i++)
          {
               temp = temp->next;
          }
          return temp;
     }
};

// Alternate solution;
class Solution
{
public:
     ListNode *middleNode(ListNode *head)
     {
          ListNode *fast = head;
          ListNode *slow = head;
          while (fast != NULL && fast->next != NULL)
          {
               slow = slow->next;
               fast = fast->next->next;
          }
          return slow;
     }
};