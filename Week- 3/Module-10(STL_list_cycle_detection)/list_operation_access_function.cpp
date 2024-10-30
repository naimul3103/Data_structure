#include <bits/stdc++.h>
using namespace std;

int main()
{
     list<int> myList = {10, 20, 50, 10, 30, 40};
     // remove all 10 from the list;
     myList.remove(10);
     // sorting in acceding order: -> 20 30 40 50
     myList.sort();

     for (int val : myList)
     {
          cout << val << " ";
     }
     cout << endl;
     // sorting in descending order; -> 50 40 30 20
     myList.sort(greater());

     // reverse the order of the list;
     //  myList.reverse();

     // remove duplicate value from the list;
     //  myList.unique();

     for (int val : myList)
     {
          cout << val << " ";
     }
     return 0;
}
