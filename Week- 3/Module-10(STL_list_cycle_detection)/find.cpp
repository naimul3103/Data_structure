#include <bits/stdc++.h>
using namespace std;

int main()
{
     list<int> myList = {10, 20, 3, 4, 10};
     auto it = find(myList.begin(), myList.end(), 10);
     // cout << *it << endl;
     if (it == myList.end())
     {
          cout << "Not Found" << endl;
     }
     else
     {
          cout << "Found" << endl;
     }

     return 0;
}
