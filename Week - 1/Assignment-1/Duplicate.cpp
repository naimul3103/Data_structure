/* 
Problem Statement

You will be given an array A of size N. Print "YES" if there is any duplicate value in the array, "NO" otherwise.

Input Format

First line will contain N.
Second line will contain the array A.
Constraints

1 <= N <= 100000
0 <= A[i] <= 10^9; Where 0 <= i < N
Output Format

          Output "YES" or "NO" without the quotation marks according to the problem statement.
     Sample Input 0

          5
          1 2 3 4 5
     Sample Output 0

          NO
     Sample Input 1

          6
          2 1 3 5 2 1 
      Sample Output 1

          YES
 */


#include<bits/stdc++.h>
using namespace std;
 
int main ()
{
     int n; 
     cin >> n; 
     vector<int> a(n); 
 
     //take user input; 
     for (int i = 0; i<n; i++){
          cin >> a[i];
     }
     sort(a.begin(), a.end());

      bool flag = false; 
     for(int i = 0; i < n-1; i++){
          int val = a[i] ;  
          int l = i+1, r = (n-1); 
         

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
          
     }
     if(flag == true){
               cout << "YES" << endl; 
          }
          else{
               cout << "NO" << endl; 
          }
 
     return 0;
}