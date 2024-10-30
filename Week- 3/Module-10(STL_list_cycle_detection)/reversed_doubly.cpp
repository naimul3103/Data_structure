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

// reverse node using two pointer technique;
void reverse(Node *head, Node *tail)
{
     Node *i = head;
     Node *j = tail;
     while (i != j && i->next != j)
     {
          swap(i->val, j->val);
          i = i->next;
          j = j->prev;
     }
     swap(i->val, j->val);
}

void print(Node *head)
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
     Node *tail = new Node(40);

     head->next = a;
     a->prev = head;
     a->next = b;
     b->prev = a;
     b->next = tail;
     tail->prev = b;

     reverse(head, tail);
     print(head);

     return 0;
}
