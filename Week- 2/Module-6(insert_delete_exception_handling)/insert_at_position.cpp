/* option 1: insert a tail 
Option 2: print linked list;
Option 3: Insert at position;
Option 4: terminate;
1
Enter a value: 10
option 1: insert a tail 
Option 2: print linked list;
Option 3: Insert at position;
Option 4: terminate;
1
Enter a value: 20
option 1: insert a tail 
Option 2: print linked list;
Option 3: Insert at position;
Option 4: terminate;
1
Enter a value: 30
option 1: insert a tail 
Option 2: print linked list;
Option 3: Insert at position;
Option 4: terminate;
2
10 20 30
option 1: insert a tail 
Option 2: print linked list;
Option 3: Insert at position;
Option 4: terminate;
3
Enter Your index: 2
Enter Your value: 100
option 1: insert a tail 
Option 2: print linked list;
Option 3: Insert at position;
Option 4: terminate;
2
10 20 100 30 
option 1: insert a tail 
Option 2: print linked list;
Option 3: Insert at position;
Option 4: terminate;
 */



#include<bits/stdc++.h>
using namespace std;
     class Node{
          public: 
              int val; 
              Node* next; 
     
          Node(int val){
               this->val = val; 
               this->next = NULL; 
          }
     };

void insert_at_tail(Node *&head, int v){
     Node *newNode = new Node(v);

     //Head initial value is NULL;
     //now incoming newNode assign as head; 
     if(head == NULL){
          head = newNode; 
          return;
     }

     //temp shifting toward the last value; 
     Node *temp = head; 
     while(temp->next !=NULL){
          temp = temp->next; 
     }
     //now storing the tail in last value; 
     temp->next = newNode; 

     cout << endl << endl << "Value inserted at tail: ";
}
void print_linked_list(Node *head){
     Node *temp = head; 
     cout<< endl; 
     while(temp!=NULL){
          cout << temp->val << " "; 
          temp = temp->next; 
     }
     cout << endl; 
}

//insert at any position ;

void insert_at_position(Node *head, int pos, int val){
     Node *newNode = new Node(val);
     Node *temp = head; 
     for (int i = 0; i < pos-1; i++)
     {
          temp = temp->next; 
     }
     // |10|3F| -> |100|NULL|.... |20|NULL|
     //new node a temp er next/address ta store 
     newNode->next= temp->next; 
     // temp er next value te new node store
     // |10|3F| -> |100|2B| -> |20|NULL|
     temp->next = newNode; 

     cout<<endl<<endl<<"Value is inserted at idex: " << pos << endl << endl; 
     
}
int main ()
{
     Node* head = NULL;
     //taking input as user control; 
     while(true){
          cout << "option 1: insert a tail "<< endl;
          cout << "Option 2: print linked list;" << endl;
          cout << "Option 3: Insert at position;" << endl;
          cout << "Option 4: terminate;" << endl; 
            int option; 
            cin >> option; 
          if(option == 1){
               cout << "Enter a value: ";
               int val; 
               cin>> val; 
               insert_at_tail(head, val);
          }
          else if(option == 2){
               print_linked_list(head);
          }
          else if(option == 3){
               cout << "Enter Your index: ";
               int pos, val;
               cin >> pos; 
               cout << "Enter Your value: ";
               cin >> val; 
               insert_at_position(head,pos,val); 
               
          }
          else if(option == 4){
               break;
          }
     }
     return 0;
}
