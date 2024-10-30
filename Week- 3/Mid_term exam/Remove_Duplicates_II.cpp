#include <bits/stdc++.h>
using namespace std;
void print_list(list<int> &lst)
{

     for (int val : lst)
     {
          cout << val << " ";
     }
}

int main()

{
     list<int> myList;
     while (true)
     {
          int n;
          cin >> n;
          if (n == -1)
          {
               break;
          }
          myList.push_back(n);
     }

     myList.sort();
     myList.unique();

     print_list(myList);

     return 0;
}
