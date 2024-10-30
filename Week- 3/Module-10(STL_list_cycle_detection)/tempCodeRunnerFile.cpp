#include <bits/stdc++.h>
using namespace std;

int main()
{
     // list<int> myList;
     // cout << myList.size(); //-> 0;
     // list<int> myList(10);
     // cout << myList.size(); //-> 10

     list<int> myList(5, 5);
     cout << " Showing the 1st value " << myList.front() << endl;

     // output: -- iterator use korte hobe;
     // list<int> myList(10, 5);
     for (auto it = myList.begin(); it != myList.end(); it++)
     {
          // it will return pointer
          cout << *it << " " << '\n';
     }

     return 0;
}
