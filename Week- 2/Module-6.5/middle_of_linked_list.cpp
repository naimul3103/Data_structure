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

// print the middle of an linked list;
void middle_of_linked_list(Node *head)
{
     int count = 0;
     for (Node *i = head; i != NULL; i = i->next)
     {
          count++;
     }

     int middle_value = 0;
     if (count % 2 == 0)
     {
          int mid = count / 2;
          for (Node *i = head; i != NULL; i = i->next)
          {
               middle_value++;
               if (middle_value == mid)
               {
                    cout << i->val << " " << i->next->val << endl;
                    break;
               }
          }
     }
     else
     {
          int mid = count / 2;
          for (Node *i = head; i != NULL; i = i->next)
          {
               middle_value++;
               if (middle_value == mid + 1)
               {
                    cout << i->val << endl;
                    break;
               }
          }
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
     middle_of_linked_list(head);

     return 0;
}
