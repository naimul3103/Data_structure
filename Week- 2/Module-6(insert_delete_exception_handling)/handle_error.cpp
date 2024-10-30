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

void insert_at_tail(Node *&head, int v)
{
     Node *newNode = new Node(v);

     // Head initial value is NULL;
     // now incoming newNode assign as head;
     if (head == NULL)
     {
          head = newNode;
          return;
     }

     // temp shifting toward the last value;
     Node *temp = head;
     while (temp->next != NULL)
     {
          temp = temp->next;
     }
     // now storing the tail in last value;
     temp->next = newNode;

     cout << endl
          << endl
          << "Value inserted at tail: " << endl;
}

// print linked list;

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
     cout << endl;
}

// insert at any position ;

void insert_at_position(Node *head, int pos, int val)
{
     Node *newNode = new Node(val);
     Node *temp = head;
     for (int i = 1; i <= pos - 1; i++)
     {
          temp = temp->next;
          if (temp == NULL)
          {
               cout << "invalid input" << endl;
          }
     }
     // |10|3F| -> |100|NULL|.... |20|NULL|
     // new node a temp er next/address ta store
     newNode->next = temp->next;
     // temp er next value te new node store
     // |10|3F| -> |100|2B| -> |20|NULL|
     temp->next = newNode;

     cout << endl
          << endl
          << "Value is inserted at idex: " << pos << endl
          << endl;
}

// insert at head/zeroth(0th) index;
void insert_at_head(Node *&head, int val)
{
     Node *newNode = new Node(val);
     newNode->next = head;
     head = newNode;
     cout << endl
          << "New Node inserted at head: " << endl
          << endl;
}

// delete from head;

void delete_at_position(Node *head, int pos)
{
     Node *temp = head;

     for (int i = 1; i <= pos - 1; i++)
     {
          temp = temp->next;

          // error handling;
          if (temp == NULL)
          {
               cout << endl
                    << "Invalid input" << endl
                    << endl;
               return;
          }
     }
     // error handling;
     if (temp->next == NULL)
     {
          cout << endl
               << "Invalid input" << endl
               << endl;
          return;
     }
     Node *deleteNode = temp->next;
     temp->next = temp->next->next;
     delete deleteNode;

     cout << endl
          << "Value deleted at: " << pos << endl
          << endl;
}

void delete_head(Node *&head)
{
     // error handling;
     if (head == NULL)
     {
          cout << endl
               << "Invalid input" << endl
               << endl;
          return;
     }
     Node *deleteNode = head;
     head = head->next;
     delete deleteNode;
}

int main()
{
     Node *head = NULL;
     // taking input as user control;
     while (true)
     {
          cout << "option 1: insert a tail " << endl;               // done;
          cout << "Option 2: print linked list;" << endl;           // done
          cout << "Option 3: Insert at position;" << endl;          // done
          cout << "Option 4: Insert at head/zeroth index;" << endl; // done;
          cout << "Option 5: Delete at position" << endl;           // done;
          cout << "Option 6: Delete head" << endl;                  // done;
          cout << "Option 7: terminate;" << endl;
          int option;
          cin >> option;
          if (option == 1)
          {
               cout << "Enter a value: ";
               int val;
               cin >> val;
               insert_at_tail(head, val);
          }
          else if (option == 2)
          {
               print_linked_list(head);
          }
          else if (option == 3)
          {
               cout << "Enter Your index: ";
               int pos, val;
               cin >> pos;
               cout << "Enter Your value: ";
               cin >> val;

               // zeroth index a print korar shorto;
               if (pos == 0)
               {
                    insert_at_head(head, val);
               }
               else
               {
                    insert_at_position(head, pos, val);
               }
          }
          else if (option == 4)
          {
               cout << "Enter your Value" << endl;
               int val;
               cin >> val;
               insert_at_head(head, val);
          }
          else if (option == 5)
          {
               cout << "Enter index: " << endl;
               int pos;
               cin >> pos;

               if (pos == 0)
               {
                    delete_head(head);
               }
               else
               {
                    delete_at_position(head, pos);
               }
          }
          else if (option == 6)
          {
               delete_head(head);
          }

          else if (option == 7)
          {
               break;
          }
     }
     return 0;
}
