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
     //-----|val|address of next|
     //-----   | 10 | &a | ---> | 20 | NULL |
     
     //dynamic Node creation ; 
     Node* head = new Node(10); // ---|10|&a|
     Node* b = new Node(20); // ---|20|NULL| end of linked list; 
     head->next = b; 
     

     cout << head->val << endl; 
     cout << head->next->val << endl; 
     //dereference method to access value; 
     cout << (*(*head).next).val << endl; 
     return 0;
}
