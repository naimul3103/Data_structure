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
void direct_print(Node *head)
{
     Node *temp = head;
     while (temp != NULL)
     {
          cout << temp->val << " ";
          temp = temp->next;
     }
     cout << endl;
}

void reverse_print(Node *tail)
{
     Node *temp = tail;
     while (temp != NULL)
     {
          cout << temp->val << " ";
          temp = temp->prev;
     }
     cout << endl;
}
int main()
{
     Node *head = new Node(10);
     Node *a = new Node(20);
     Node *b = new Node(30);
     Node *c = new Node(40);
     Node *tail = new Node(50);

     // connection;
     head->next = a;
     a->prev = head;
     a->next = b;
     b->prev = a;
     b->next = c;
     c->prev = b;
     c->next = tail;
     tail->prev = c;

     direct_print(head);
     reverse_print(tail);

     return 0;
}
