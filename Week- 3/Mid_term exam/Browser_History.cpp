/* Problem Statement

You are given a doubly linked list of unique string values. These strings refer to web addresses without any spaces. You will be given Q queries. In each query you will be given some commands. cmd of commands are -

visit address - You need to go to that address from where you are in that list and print that address if it is in the list. Otherwise print "Not Available".
next - You need to go to the next address from where you are in that list and print that address if it is in the list. Otherwise print "Not Available".
prev - You need to go to the previous address from where you are in that list and print that address if it is in the list. Otherwise print "Not Available".
One more thing, if the address isn't available make sure you don't move from your current position. You are at the head initially.

Note: You can use Singly/Doubly Linked List or STL List to solve this problem.

Input Format

First line will contain the values of the doubly linked list, and will terminate with the string "end".
Second line will contain Q.
Next Q lines will contain the commands. It is guranteed that you will get "visit address" command at first which will contain a valid address. It will not contain valid address everytime!
Constraints

1 <= N <= 1000; Here N is the maximum number of nodes of the linked list.
1 <= Q <= 1000;
1 <= |Address| <= 100; Here |Address| is the length of the string address.
Output Format

For each query output as asked.
     Sample Input 0
          facebook google phitron youtube twitter end
          12
          visit phitron
          prev
          prev
          prev
          prev
          next
          visit twitter
          next
          next
          prev
          visit django
          prev
     Sample Output 0
          phitron
          google
          facebook
          Not Available
          Not Available
          google
          twitter
          Not Available
          Not Available
          youtube
          Not Available
          phitron
     Sample Input 1
          a b c d e f g h i j k l m n o p q r s t u v w x y z end
          7
          visit s
          next
          visit zz
          next
          visit z
          next
          prev
          Sample Output 1
          s
          t
          Not Available
          u
          z
          Not Available
          y */
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
     string val;
     Node *prev;
     Node *next;

     Node(string val)
     {
          this->val = val;
          this->prev = NULL;
          this->next = NULL;
     }
};

void insert_at_tail(Node *&head, Node *&tail, string val)
{
     Node *newNode = new Node(val);
     if (tail == NULL)
     {
          head = newNode;
          tail = newNode;
     }
     else
     {
          newNode->prev = tail;
          tail->next = newNode;
          tail = newNode;
     }
}

void visit(Node *&current, Node *head, string address)
{
     Node *temp = head;
     while (temp != NULL)
     {
          if (temp->val == address)
          {
               current = temp;
               cout << current->val << endl;
               return;
          }
          temp = temp->next;
     }
     cout << "Not Available" << endl;
}

void next(Node *&current)
{
     if (current != NULL && current->next != NULL)
     {
          current = current->next;
          cout << current->val << endl;
     }
     else
     {
          cout << "Not Available" << endl;
     }
}

void previous(Node *&current)
{
     if (current != NULL && current->prev != NULL)
     {
          current = current->prev;
          cout << current->val << endl;
     }
     else
     {
          cout << "Not Available" << endl;
     }
}

int main()
{
     Node *head = NULL;
     Node *tail = NULL;
     Node *crt = NULL;

     while (true)
     {
          string val;
          cin >> val;
          if (val == "end")
          {
               break;
          }
          insert_at_tail(head, tail, val);
     }

     int q;
     cin >> q;
     for (int i = 0; i < q; i++)
     {
          string cmd;
          cin >> cmd;

          if (cmd == "visit")
          {
               string address;
               cin >> address;
               visit(crt, head, address);
          }
          else if (cmd == "next")
          {
               next(crt);
          }
          else if (cmd == "prev")
          {
               previous(crt);
          }
     }

     return 0;
}