/* input : 4       || Output:
          1 2 3 4            1 2 3 4
 */

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

class myQueue
{
public:
     Node *head = NULL;
     Node *tail = NULL;
     int size = 0;
     // insert at tail
     void push(int val)
     {
          size++;
          Node *newNode = new Node(val);
          if (head == NULL)
          {
               head = newNode;
               tail = newNode;
               return;
          }
          else
          {
               tail->next = newNode;
               newNode->prev = tail;
               tail = tail->next;
          }
     }
     void pop()
     {
          size--;
          Node *deleteNode = head;
          head = head->next;
          if (head == NULL)
          {
               tail = NULL;
               delete deleteNode;
               return;
          }
          else
          {
               head->prev = NULL;
               delete deleteNode;
          }
     }
     int front()
     {
          return head->val;
     }
     int sz()
     {
          return size;
     }
     bool empty()
     {
          if (size == 0)
               return true;
          else
               return false;
     }
};
int main()
{
     myQueue q;
     int n;
     cin >> n;
     for (int i = 0; i < n; i++)
     {
          int x;
          cin >> x;
          q.push(x);
     }
     while (q.empty() != true)
     {
          cout << q.front() << " ";
          q.pop();
     }

     return 0;
}