//problem link; 
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z

#include<bits/stdc++.h>
using namespace std;

int main ()
{
     int n, q; 
     cin >> n >> q;
     int a[n]; 
     for(int i = 0; i<n; i++){
          cin >> a[i];
     }

     //sorting the unsorted array; 
     sort(a,a+n);


     while(q--){
          int val; 
          cin >> val; 
          int l = 0, r = (n-1); 
          bool flag = false; 

          //binary Search; 
          while(l<=r){
               int mid = (l+r)/2;
               if(val == a[mid]){
                    flag = true; 
                    break;
               }
               else if(val > a[mid]){
                    l = mid+1; 
               }
               else{
                    r = mid-1; 
               }

          }
          if(flag == true){
               cout << "found" << endl; 
          }
          else{
               cout << "not found" << endl; 
          }
     }


     return 0;
}
