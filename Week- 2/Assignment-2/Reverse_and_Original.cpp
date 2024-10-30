/* Problem Statement

You need to take a singly linked list of integer value as input. Then you need to print the singly linked list in reverse order, after that print the original linked list also.

Note: You must use singly linked list, otherwise you will not get marks.

Input Format

Input will contain the values of the singly linked list, and will terminate with -1.
Constraints

1 <= N <= 10^6; Here N is the maximum number of nodes of the linked list.
0 <= V <= 10^9; Here V is the value of each node.
Output Format

In first line, output the linked list in reverse order.
In second line, print the original linked list.
Sample Input 0

10 20 30 40 50 -1
Sample Output 0

50 40 30 20 10
10 20 30 40 50
Sample Input 1

20 40 50 10 -1
Sample Output 1

10 50 40 20
20 40 50 10  */

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
// insert at tail; taking input;
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

// printing linked list reverse way;
void print_list_reversed(Node *head)
{
     Node *temp = head;
     if (temp == NULL)
          return;
     print_list_reversed(temp->next);
     cout << temp->val << " ";
}

// Directly printing the linked list;
void print_linked_list(Node *head)
{
     Node *temp = head;
     while (temp != NULL)
     {
          cout << temp->val << " ";
          temp = temp->next;
     }
     cout << endl;
}

// main function;
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
     print_list_reversed(head);
     cout << endl;
     print_linked_list(head);

     return 0;
}
