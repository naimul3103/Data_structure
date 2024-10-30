#include<bits/stdc++.h>
using namespace std;

int main ()
{
     int n; 
     cin >> n; 
     vector <int> v(n);
     vector <int> v1(n);
     for(int i = 0; i<n; i++){
          cin >> v[i];
     }
     for(int i = 0; i<n; i++){
          cin >> v1[i];
     }


     
    
     v.insert(v.begin(), v1.begin(), v1.end());
     for(int val:v){

          cout << val << " "; 
     }
     cout << endl; 



     return 0;
}
