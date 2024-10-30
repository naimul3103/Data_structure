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
     while (temp != NULL)
     {
          cout << temp->val << " ";
          temp = temp->prev;
     }
     cout << endl;
}
void size(Node *head)
{
     Node *temp = head;
     int count = 0;
     while (temp != NULL)
     {
          count++;
          temp = temp->next;
     }
     cout << count;
}
void insert_at_position(Node *head, int pos, int val)
{
     Node *newNode = new Node(val);
     Node *temp = head;
     for (int i = 1; i <= pos - 1; i++)
     {
          temp = temp->next;
     }
     newNode->next = temp->next;
     newNode->prev = temp;
     temp->next = newNode;
     newNode->next->prev = newNode;
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

     insert_at_position(head, 2, 100);
     print_normal(head);
     print_reverse(tail);

     return 0;
}
