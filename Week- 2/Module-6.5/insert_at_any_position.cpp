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
void insert_at_position(Node *head, int pos, int val)
{
     Node *newNode = new Node(val);
     Node *temp = head;

     for (int i = 0; i < pos - 1; i++)
     {
          temp = temp->next;
     }
     newNode->next = temp->next;
     temp->next = newNode;
}
void insert_at_head(Node *&head, int val)
{
     Node *newNode = new Node(val);
     newNode->next = head;
     head = newNode;
}
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
int size_of_linked_list(Node *head)
{
     int count = 0;
     for (Node *i = head; i != NULL; i = i->next)
     {
          count++;
     }
     return count;
}

void print_linked_list(Node *head)
{
     Node *temp = head;
     cout << endl;
     // loop will run until the last value;
     while (temp != NULL)
     {
          cout << temp->val << " ";
          temp = temp->next;
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
     int test;
     cin >> test;
     for (int i = 0; i < test; i++)
     {
          int index, value;
          cin >> index >> value;
          int count = size_of_linked_list(head);
          if (index == 0)
          {
               insert_at_head(head, value);
               print_linked_list(head);
          }
          else if (index > count)
          {
               cout << "invalid";
          }
          else
          {
               insert_at_position(head, index, value);
               print_linked_list(head);
          }
     }

     return 0;
}
