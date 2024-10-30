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
     tail->next = newNode;
     tail = newNode;
}

// printing the linked list;
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
void duplicate_checker(Node *head)
{
     bool flag = false;
     Node *temp = head;
     for (Node *i = temp; i != NULL; i = i->next)
     {
          for (Node *j = temp; j != NULL; j = j->next)
          {
               // cout << i->val << " " << j->val << endl;
               if (i == j)
               {
                    continue;
               }
               if (i->val == j->val)
               {
                    flag = true;
                    break;
               }
               else
               {
                    flag = false;
               }
          }
     }
     if (flag)
     {
          cout << " Yes" << endl;
     }
     else
     {
          cout << "NO" << endl;
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
          insert_at_tail(head, tail, val);
     }
     print_linked_list(head);
     duplicate_checker(head);
     return 0;
}
