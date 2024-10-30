// Problem; 
// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J

#include<bits/stdc++.h>
using namespace std;

int main ()
{
     string s; 
     cin >> s; 
     vector<int> frq(26,0);

     for (int i = 0; i < s.size(); i++)
     {
          frq[ s[i] - 'a']++;
     }
     
     
    for(char i = 'a'; i<'z'; i++){
          if(frq[i-'a']>0){
               for(int j = 0; j<frq[i-'a']; j++){
                     cout << i << " : " << frq[i-'a'] << endl; 
                     frq[i-'a'] = 0;
               }
          }
     }
     

    return 0;
}

// another way of doing it 
// more efficient and less time complexity; 

// Problem; 
// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J

/* #include<bits/stdc++.h>
using namespace std;

int main ()
{
     string s; 
     cin >> s; 
     vector<int> frq(26,0);

     for (int i = 0; i < s.size(); i++)
     {
          frq[ s[i] - 'a']++;
     }
     
     
    for(int i = 0; i < 26; i++){
          if(frq[i]>0){
                     cout << char(i+'a') << " : " << frq[i] << endl; 
               }
          }
     
     

    return 0;
} */