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

// insert at tail;
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

// finding the min and max value from the linked list
void min_max(Node *head)
{
     int min, max;
     min = head->val;
     max = head->val;
     for (Node *i = head; i != NULL; i = i->next)
     {
          if (i->val > max)
          {
               max = i->val;
          }
          if (i->val < min)
          {
               min = i->val;
          }
     }
     cout << max << " " << min << endl;
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
     min_max(head);
     return 0;
}