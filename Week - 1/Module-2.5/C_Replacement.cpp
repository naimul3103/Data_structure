/* 
Given a number N and an array A of N numbers. Print the array after doing the following operations:

Replace every positive number by 1.
Replace every negative number by 2.
Input
First line contains a number N (2 ≤ N ≤ 1000) number of elements.

Second line contains N numbers (-105  ≤  Ai  ≤  105).

Output
Print the array after the replacement and it's values separated by space.

     Example
     InputCopy
          5
          1 -2 0 3 4
     OutputCopy
          1 2 0 1 1 
*/ 


#include<bits/stdc++.h>
using namespace std;

int main ()
{
     int n; 
     cin >> n;
     vector <int> v(n); 

     for (int i = 0; i < n; i++)
     {
          cin >> v[i]; 
     }

     for (int i = 0; i < n; i++)
     {
          if (v[i] > 0)
          {
               v[i] = 1; 
          }
          else if(v[i] < 0){
               v[i] = 2;
          }
          else{
               v[i] = 0; 
          }
          
     }
     for(int val:v){
          cout << val << " "; 
     }
     cout << endl; 
     
     return 0;


}
