/* Problem Statement

You have a doubly linked list which is empty initially. Then you will be given Q queries. In each query you will be given two values X and V.

You need to insert the value V at index X. Assume that index starts from 0.
After that for each query you need to print the linked list from left to right and right to left.
If the index is invalid, then print "Invalid".
Note: You must use Doubly Linked List, otherwise you will not get marks.

Input Format

First line will contain Q.
Next Q lines will contain X and V.
Constraints

1 <= Q <= 1000;
0 <= X <= 1000;
0 <= V <= 1000
Output Format

For each query print the linked list from left to right and right to left or print "Invalid" as asked.
Print "L -> " before printing the linked list from left to right.
Print "R -> " before printing the linked list from right to left.
     Sample Input 0:
          5
          1 10
          0 10
          1 20
          3 30
          2 30
     Sample Output 0
          Invalid
          L -> 10
          R -> 10
          L -> 10 20
          R -> 20 10
          Invalid
          L -> 10 20 30
          R -> 30 20 10
     Sample Input 1
          10
          0 10
          1 20
          0 30
          1 40
          6 50
          0 60
          4 70
          4 80
          2 90
          1 100
     Sample Output 1
          L -> 10
          R -> 10
          L -> 10 20
          R -> 20 10
          L -> 30 10 20
          R -> 20 10 30
          L -> 30 40 10 20
          R -> 20 10 40 30
          Invalid
          L -> 60 30 40 10 20
          R -> 20 10 40 30 60
          L -> 60 30 40 10 70 20
          R -> 20 70 10 40 30 60
          L -> 60 30 40 10 80 70 20
          R -> 20 70 80 10 40 30 60
          L -> 60 30 90 40 10 80 70 20
          R -> 20 70 80 10 40 90 30 60
          L -> 60 100 30 90 40 10 80 70 20
          R -> 20 70 80 10 40 90 30 100 60

 */

// -------->> Solution <<---------
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
     int val;
     Node *prev;
     Node *next;

     Node(int val)
     {
          this->val = val;
          this->prev = NULL;
          this->next = NULL;
     }
};

void print_normal(Node *head)
{
     Node *temp = head;
     cout << " L -> ";
     while (temp != NULL)
     {
          cout << temp->val << " ";
          temp = temp->next;
     }
     cout << endl;
}
void print_reverse(Node *tail)
{
     Node *temp = tail;
     cout << " R -> ";
     while (temp != NULL)
     {
          cout << temp->val << " ";
          temp = temp->prev;
     }
     cout << endl;
}
int size(Node *head)
{
     Node *temp = head;
     int count = 0;
     while (temp != NULL)
     {
          count++;
          temp = temp->next;
     }
     return count;
}

void insert_at_head(Node *&head, Node *&tail, int val)
{
     Node *newNode = new Node(val);
     if (head == NULL)
     {
          head = newNode;
          tail = newNode;
          return;
     }
     else
     {
          newNode->next = head;
          head->prev = newNode;
          head = newNode;
     }
}
void insert_at_tail(Node *&head, Node *&tail, int val)
{
     Node *newNode = new Node(val);
     if (tail == NULL)
     {
          head = newNode;
          tail = newNode;
          return;
     }
     else
     {
          newNode->prev = tail;
          tail->next = newNode;
          tail = newNode;
     }
}
void insert_at_position(Node *head, Node *tail, int pos, int val)
{
     int list_size = size(head);

     if (pos < 0 || pos > list_size)
     {
          cout << "Invalid" << endl;
          return;
     }

     else
     {

          Node *newNode = new Node(val);
          Node *temp = head;
          for (int i = 1; i < pos; i++)
          {
               temp = temp->next;
          }
          newNode->next = temp->next;
          newNode->prev = temp;
          temp->next = newNode;
          newNode->next->prev = newNode;
     }
}

int main()
{
     Node *head = NULL;
     Node *tail = NULL;

     int q;
     cin >> q;
     for (int i = 0; i < q; i++)
     {
          int index, val;
          cin >> index >> val;
          int list_size = size(head);
          if (index > list_size)
          {
               cout << "Invalid" << endl;
          }
          else if (index == 0)
          {
               insert_at_head(head, tail, val);
               print_normal(head);
               print_reverse(tail);
          }
          else if (index == list_size)
          {
               insert_at_tail(head, tail, val);
               print_normal(head);
               print_reverse(tail);
          }
          else
          {
               insert_at_position(head, tail, index, val);
               print_normal(head);
               print_reverse(tail);
          }
     }
     return 0;
}