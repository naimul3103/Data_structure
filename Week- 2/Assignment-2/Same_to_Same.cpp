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

// insert at tail;
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

// counting the size of the linked List;
int size_of_linked_list(Node *head)
{
     int count = 0;
     for (Node *i = head; i != NULL; i = i->next)
     {
          count++;
     }
     return count;
}
void check_same_or_not(Node *head1, Node *head2)
{
     Node *i = head1;
     Node *j = head2;
     bool flag = false;
     while (i != NULL && j != NULL)
     {
          // checking whether the value are same of not;
          if (i->val == j->val)
          {
               i = i->next;
               j = j->next;
               flag = true;
          }
          else
          {
               flag = false;
               break;
          }
     }
     if (flag)
     {
          cout << "YES" << endl;
     }
     else
     {
          cout << "NO" << endl;
     }
}

int main()
{
     Node *head1 = NULL;
     Node *tail1 = NULL;
     Node *head2 = NULL;
     Node *tail2 = NULL;

     int val;

     // 1st list input;
     while (true)
     {
          cin >> val;
          if (val == -1)
          {
               break;
          }
          insert_at_tail(head1, tail1, val);
     }
     // 2nd list input
     while (true)
     {
          cin >> val;
          if (val == -1)
          {
               break;
          }
          insert_at_tail(head2, tail2, val);
     }

     // size_of_linked list;
     int list_size = size_of_linked_list(head1);
     int list_size1 = size_of_linked_list(head2);

     // comparing the size and calling the function of checking;
     if (list_size == list_size1)
     {
          check_same_or_not(head1, head2);
     }
     else
     {
          cout << "NO" << endl;
     }
     return 0;
}