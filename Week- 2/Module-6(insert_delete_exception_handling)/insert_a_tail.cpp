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

}
void print_linked_list(Node *head){
     Node *temp = head; 
     while(temp!=NULL){
          cout << temp->val << " "; 
          temp = temp->next; 

     }
     cout << endl; 
};
int main ()
{
     Node* head = NULL;
     //taking input as user control; 
     while(true){
          cout << "option 1: insert a tail "<< endl;
          cout << "Option 2: print linked list;" << endl; 
          cout << "Option 3: terminate;" << endl; 
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
          else{
               break;
          }
     }
     return 0;
}
