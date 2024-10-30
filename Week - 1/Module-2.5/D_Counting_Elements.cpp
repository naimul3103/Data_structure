// Problem
// https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/D

#include<bits/stdc++.h>
using namespace std;

int main ()
{
     int n; 
     cin >> n; 
     vector<int> v(n); 

     //take user input; 
     for (int i = 0; i<n; i++){
          cin >> v[i];
     }
      int cnt = 0; 
      
     for(int i = 0; i<n; i++){

          if(find(v.begin(),v.end(), v[i]+1) != v.end()){
               cnt++;
          }
          
     }
     cout << cnt << endl; 


     return 0;
}
