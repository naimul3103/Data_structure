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

     // 10(a) -> 20 -> 30 -> 40 -> (a)10
     Node *head = new Node(10);
     Node *a = new Node(20);
     Node *b = new Node(30);
     Node *c = new Node(40);

     head->next = a;
     a->next = b;
     b->next = c;
     c->next = a;

     // Hare and Tortoise -> algorithm;
     Node *slow = head;
     Node *fast = head;
     bool flag = true;
     while (fast != NULL && fast->next != NULL)
     {
          slow = slow->next;
          fast = fast->next->next;
          if (fast == slow)
          {
               flag = true;
               break;
          }
     }
     if (flag)
     {
          cout << "Cycle detected" << endl;
     }
     else
     {
          cout << " No Cycle" << endl;
     }
     return 0;
}
