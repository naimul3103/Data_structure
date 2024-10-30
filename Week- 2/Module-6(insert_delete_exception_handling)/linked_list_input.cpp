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

//insert at tail; 
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
}

//print linked list; 

void print_linked_list(Node *head){
     Node *temp = head; 
     cout<< endl; 
     //loop will run until the last value; 
     while(temp!=NULL){
          cout << temp->val << " "; 
          temp = temp->next; 
     }
     cout << endl; 
}

int main ()
{

Node* head = NULL;
     int val; 
     while(true){
          cin >> val; 
          if(val == -1){
               break;
          }
          insert_at_tail(head,val); 
     }
     print_linked_list(head);
     cout << endl; 


     return 0;
}
