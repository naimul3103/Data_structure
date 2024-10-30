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
int main ()
{
     Node* head = new Node(10);
     Node* a = new Node(20);
     Node* b = new Node(30);
     Node* c = new Node(40);
     head->next = a;
     a->next = b; 
     b->next = c; 
    
     
     

     //OLD SCHOOL METHOD; 
     

     cout << head->val << endl; 
     cout << head->next->val << endl; //--b value access; 
     cout << head->next->next->val << endl; 
     cout << head->next->next->next->val << endl; 

     //-- Way -01; moving the head ;
     // -- *note: -> it is not convenient;  
        /*   while(head != null){
               cout << head->next << endl; 
               head = head->next; 
          } */

     // rather then use this- this allow to work with head with in future; 
          Node* temp = head; 
          while(temp != NULL){
               cout << temp->val << endl; 
               temp = temp->next; 
          }

     return 0;
}
