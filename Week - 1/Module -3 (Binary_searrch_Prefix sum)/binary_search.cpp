// given a sorted array so here we didn't sort the array; 

#include<bits/stdc++.h>
using namespace std;

int main ()
{
     int n;
     cin >> n; 
     int a[n];
     for (int i = 0; i < n; i++)
     {
          cin >> a[i];
     }

     int val; 
     cin >> val;
     int l=0, r = n-1; 
     bool flag = false; 

     while(l<=r){
          int mid = (l+r)/2;
          if(a[mid] == val){
               flag = true; 
               break; 
          }
          else if(val > a[mid]){
               l = mid +1; 
          }
          else{
               r = mid-1; 
          }
     }
     

     //printing the output; 
     if(flag == true){
          cout<< "Yes" << endl; 
          cout << "Position: " << r << endl; 
     }
     else{
          cout << "Not found" << endl;
     }


     return 0;
}
