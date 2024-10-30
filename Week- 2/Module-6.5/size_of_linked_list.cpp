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
void size_of_linked_list(Node *head)
{
     int count = 0;
     for (Node *i = head; i != NULL; i = i->next)
     {
          count++;
     }
     cout << count << endl;
}

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
     size_of_linked_list(head);

     return 0;
}
