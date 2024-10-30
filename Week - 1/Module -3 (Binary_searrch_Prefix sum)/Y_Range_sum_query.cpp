// problem
// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y

#include<bits/stdc++.h>
using namespace std;

int main ()
{
     long long int n,q; 
     cin >> n >> q; 
     long long int a[n];
     for (int i = 0; i < n; i++)
     {
          cin >> a[i];
     }
     //prefix sum for range sum; 
     long long int pre[n];
     pre[0] = a[0];
     for (int i = 1; i < n; i++)
     {
          pre[i] = a[i]+pre[i-1];
     }

     while (q--)
     {
          int l, r; 
          cin >> l >> r; 
          l--; 
          r--; 
          long long int sum; 
          if(l == 0){
               sum = pre[r];
          }
          else{
               sum = pre[r] - pre[l-1];
          }
          cout << sum << endl;
     }
     
     
     


     return 0;
}
