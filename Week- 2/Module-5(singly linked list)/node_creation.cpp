#include<bits/stdc++.h>
using namespace std;

class Node{
     public: 
          int val; 
          Node* next; 
};

int main ()
{
     Node a,b; 
     a.val = 10; 
     b.val = 20; 

     a.next = &b; 
     b.next = NULL; 
     // b.next = nullptr; 
     cout << a.val << endl; 
     cout << a.next->val << endl; 

     return 0;
}
