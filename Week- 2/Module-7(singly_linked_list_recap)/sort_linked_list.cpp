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

// print linked list recursive way;
void print_list_recursive(Node *head)
{
     Node *temp = head;
     if (temp->next == NULL)
          return;
     cout << temp->val << " ";
     print_list_recursive(temp->next);
}

// printing linked list reverse way;
void print_list_reversed(Node *head)
{
     Node *temp = head;
     if (temp->next == NULL)
          return;
     cout << temp->val << " ";
     print_list_recursive(temp->next);
}

void sort_linked_list(Node *head)
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
     Node *head = new Node(10);
     Node *a = new Node(20);
     Node *b = new Node(30);
     Node *c = new Node(40);
     Node *d = new Node(50);

     head->next = a;
     a->next = b;
     b->next = c;
     c->next = d;
     d->next = NULL;
     print_linked_list(head);
     print_list_recursive(head);

     return 0;
}
