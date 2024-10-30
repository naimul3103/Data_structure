#include <bits/stdc++.h>
using namespace std;

int main()
{
     // list<int> myList;
     // cout << myList.size(); //-> 0;
     // list<int> myList(10);
     // cout << myList.size(); //-> 10

     /*  list<int> myList(5, 5);
      cout << " Showing the 1st value " << myList.front() << endl; */

     // output: -- iterator use korte hobe;
     /* list<int> myList(5, 5);
     for (auto it = myList.begin(); it != myList.end(); it++)
     {
          // (it) will return pointer
          cout << *it << " "; // 5 5 5 5 5
     } */

     /* list<int> list2 = {1, 2, 3, 4, 5};
     list<int> myList(list2); */

     //-> copy from vector and array;
     /* int a[5] = {10, 20, 30, 40, 50};
     list<int> myList(a, a + 5); */

     vector<int> v = {1, 2, 3, 4, 5};
     list<int> myList(v.begin(), v.end());

     for (int val : myList)
     {
          cout << val << endl;
     }
     /* for (auto it = myList.begin(); it != myList.end(); it++)
     {
          cout << *it << endl;
     } */
     return 0;
}
