// problem set:
/*
     Problem Statement

You need to take a singly linked list of integer value as input. Then you need to sort the linked list in descending order and print the middle element of it. If there are multiple values in the middle, print both.

Note: You must use singly linked list, otherwise you will not get marks.

Input Format

Input will contain the values of the singly linked list, and will terminate with -1.
Constraints

1 <= N <= 1000; Here N is the maximum number of nodes of the linked list.
0 <= V <= 1000; Here V is the value of each node.
Output Format

Output the value/values of the middle element.
     Sample Input 0
          20 10 40 30 50 -1
     Sample Output 0
          30
     Sample Input 1
          20 30 10 40 60 50 -1
     Sample Output 1
          40 30
     Sample Input 2
          726 -1
     Sample Output 2
          726
     Sample Input 3
          348 726 -1
     Sample Output 3
         726 348
 */

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

// insert on tail
void insert_on_tail(Node *&head, Node *&tail, int val)
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
// sorting the linked list;
void sort_linked_list(Node *head)
{
     for (Node *i = head; i->next != NULL; i = i->next)
     {
          for (Node *j = i->next; j != NULL; j = j->next)
          {
               if (i->val < j->val)
               {
                    swap(i->val, j->val);
               }
          }
     }
}

// print the middle of an linked list;
void middle_of_linked_list(Node *head)
{
     int count = 0;
     for (Node *i = head; i != NULL; i = i->next)
     {
          count++;
     }

     int middle_value = 0;
     if (count % 2 == 0)
     {
          int mid = count / 2;
          for (Node *i = head; i != NULL; i = i->next)
          {
               middle_value++;
               if (middle_value == mid)
               {
                    cout << i->val << " " << i->next->val << endl;
                    break;
               }
          }
     }
     else
     {
          int mid = count / 2;
          for (Node *i = head; i != NULL; i = i->next)
          {
               middle_value++;
               if (middle_value == mid + 1)
               {
                    cout << i->val << endl;
                    break;
               }
          }
     }
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
          insert_on_tail(head, tail, val);
     }
     sort_linked_list(head);
     middle_of_linked_list(head);

     return 0;
}

// sorting the linked list;
/* void sort_linked_list(Node *head)
{
     vector<int> values;
     Node *temp = head;

     while (temp != NULL)
     {
          values.push_back(temp->val);
          temp = temp->next;
     }

     sort(values.begin(), values.end());

     temp = head;
     for (size_t i = 0; i < values.size(); i++)
     {
          temp->val = values[i];
          temp = temp->next;
     }
} */
