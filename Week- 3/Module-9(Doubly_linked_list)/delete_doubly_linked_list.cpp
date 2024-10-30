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
          // head Update
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
          // tail update
          tail = newNode;
     }
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

// delete Node
void delete_at_head(Node *&head, Node *&tail)
{

     Node *deleteNode = head;
     head = head->next;
     delete deleteNode;
     if (head == NULL)
     {
          tail = NULL;
          return;
     }
     head->prev = NULL;
}

void delete_at_position(Node *head, Node *tail, int pos)
{
     Node *temp = head;
     for (int i = 1; i <= pos - 1; i++)
     {
          temp = temp->next;
     }
     Node *deleteNode = temp->next;
     temp->next = temp->next->next;
     temp->next->prev = temp;
     delete deleteNode;
}
void delete_at_tail(Node *&head, Node *&tail)
{
     Node *deleteNode = tail;
     tail = tail->prev;
     delete deleteNode;
     if (tail == NULL)
     {
          head = NULL;
          return;
     }
     tail->next = NULL;
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
     int pos, value;
     cin >> pos >> value;
     if (pos == 0)
     {
          insert_at_head(head, tail, value);
     }
     else if (pos == size(head))
     {
          insert_at_tail(head, tail, value);
     }
     else if (pos > size(head))
     {
          insert_at_position(head, pos, value);
     }
     else
     {
          cout << "Invalid index" << endl;
     }

     // insert_at_position(head, 2, 100);
     // insert_at_head(head, tail, 5);
     // insert_at_tail(head, tail, 8);

     print_normal(head);
     print_reverse(tail);

     // delete Node;
     int index;
     cin >> index;
     if (index >= size(head))
     {
          cout << "Invalid" << endl;
     }
     else if (index == 0)
     {
          delete_at_head(head, tail);
     }
     else if (index == size(head) - 1)
     {
          delete_at_tail(head, tail);
     }
     else
     {
          delete_at_position(head, tail, 2);
     }

     print_normal(head);
     // print_reverse(tail);

     return 0;
}
