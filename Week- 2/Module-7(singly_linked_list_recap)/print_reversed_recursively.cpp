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

// 1st work -> direct print;
//  1st recursion -> reserved print;
// print linked list recursive way;
void print_list_recursive(Node *head)
{
     Node *temp = head;
     if (temp == NULL)
          return;
     cout << temp->val << " ";         // work
     print_list_recursive(temp->next); // recursion
}

// printing linked list reverse way;
void print_list_reversed(Node *head)
{
     Node *temp = head;
     if (temp == NULL)
          return;
     print_list_reversed(temp->next); // recursion
     cout << temp->val << " ";        // work
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
     cout << endl;
     print_list_reversed(head);

     return 0;
}
