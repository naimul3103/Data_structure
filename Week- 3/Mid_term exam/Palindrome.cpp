/* Problem:
Problem Statement

You need to take a singly linked list of integer value as input. You need to tell if the singly linked list forms a palindrome or not.

Note: You need to solve this using singly linked list, otherwise you will not get marks.

Input Format

Input will contain the values of the singly linked list, and will terminate with -1.
Constraints

1 <= N <= 10^6; Here N is the maximum number of nodes of the linked list.
0 <= V <= 1000; Here V is the value of each node.
Output Format

Output "YES" if it forms a palindrom otherwise print "NO".
Sample Input 0

1 2 3 2 1 -1

Sample Output 0

YES
Sample Input 1

1 2 2 1 -1
Sample Output 1

YES
Sample Input 2

1 -1
Sample Output 2

YES
Sample Input 3

1 2 3 1 -1
Sample Output 3

NO
 */

// Solution
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
     int val;
     Node *next;

     Node(int val)
     {
          this->val = val;
          this->next = NULL;
     }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
     Node *newNode = new Node(val);
     if (head == NULL)
     {
          head = newNode;
          tail = newNode;
     }
     else
     {
          tail->next = newNode;
          tail = newNode;
     }
}

void reverse(Node *&head, Node *cur)
{
     if (cur->next == NULL)
     {
          head = cur;
          return;
     }
     reverse(head, cur->next);
     cur->next->next = cur;
     cur->next = NULL;
}

bool isPalindrome(Node *head)
{
     Node *newHead = NULL;
     Node *newTail = NULL;
     Node *temp = head;
     while (temp != NULL)
     {
          insert_at_tail(newHead, newTail, temp->val);
          temp = temp->next;
     }
     reverse(newHead, newHead);

     temp = head;
     Node *temp2 = newHead;
     while (temp != NULL)
     {
          if (temp->val != temp2->val)
          {
               return false;
          }
          temp = temp->next;
          temp2 = temp2->next;
     }
     return true;
}

int main()
{
     Node *head = NULL;
     Node *tail = NULL;
     int val;
     while (true)
     {
          cin >> val;
          if (val == -1)
          {
               break;
          }
          insert_at_tail(head, tail, val);
     }

     if (isPalindrome(head))
     {
          cout << "YES" << endl;
     }
     else
     {
          cout << "NO" << endl;
     }

     return 0;
}