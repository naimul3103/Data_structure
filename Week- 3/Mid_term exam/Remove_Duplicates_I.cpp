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

void remove_duplicates(Node *head)
{
     Node *temp = head;
     while (temp != NULL && temp->next != NULL)
     {
          if (temp->val == temp->next->val)
          {
               Node *duplicates = temp->next;
               temp->next = temp->next->next;
               delete duplicates;
          }
          else
          {
               temp = temp->next;
          }
     }
}

void sort(Node *head)
{
     for (Node *i = head; i->next != NULL; i = i->next)
     {
          for (Node *j = i->next; j != NULL; j = j->next)
          {
               if (i->val > j->val)
               {
                    swap(i->val, j->val);
               }
          }
     }
}

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
     sort(head);
     remove_duplicates(head);
     print_linked_list(head);

     return 0;
}