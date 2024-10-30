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

void sort_linked_list_checker(Node *head)
{
     bool flag = false;
     for (Node *i = head; i->next != NULL; i = i->next)
     {

          for (Node *j = head->next; j != NULL; j = j->next)
          {
               if (i->val <= j->val)
               {
                    flag = true;
               }
               else
               {
                    flag = false;
               }
          }
     }
     if (flag)
     {
          cout << "Yes" << endl;
     }
     else
     {
          cout << "No" << endl;
     }
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
     Node *newNode = new Node(val);
     if (head == NULL)
     {
          head = newNode;
          tail = newNode;
     }
     tail->next = newNode;
     tail = newNode;
}

void print_linked_list(Node *head)
{
     Node *temp = head;
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

     sort_linked_list_checker(head);

     return 0;
}
