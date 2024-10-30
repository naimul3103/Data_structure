/* Given a number N and an array A of N numbers. Print the array in a reversed order.

Note:

*Don't use built-in-functions.

Input
First line contains a number N (1 ≤ N ≤ 103) number of elements.

Second line contains N numbers (0 ≤ Ai ≤ 109).

Output
Print the array in a reversed order.

     Examples
     InputCopy
          4
          5 1 3 2
     OutputCopy
          3 1 5 
     InputCopy
          5
          1 2 3 4 5
     putCopy
          5 4 3 2 1 

 */

#include<bits/stdc++.h>
using namespace std;

int main ()
{
     int n; 
     cin >> n; 
     vector<int> v(n); 
     for (int i = 0; i < n; i++)
     {
          cin >> v[i]; 
     }

     // Reverse the vector manually 
    for (int i = 0; i < n / 2; i++) {
        int temp = v[i];
        v[i] = v[n - 1 - i];
        v[n - 1 - i] = temp;
    }

     for (int i = 0; i< n; i++)
     {
          cout << v[i] << " "; 
     }
     
     


     return 0;
}
