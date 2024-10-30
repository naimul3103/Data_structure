#include <bits/stdc++.h>
using namespace std;

int main()
{
     list<int> myList = {10, 20, 30};
     list<int> newList;
     newList.assign(myList.begin(), myList.end());

     newList.pop_back();  // remove the last value;
     newList.pop_front(); // remove the first value;

     for (int val : newList)
     {
          cout << val << " ";
     }
     cout << endl;

     newList.push_back(50);  // add new value in end;
     newList.push_front(60); // add new value in front of the list;
     cout << "Push_pop: ";
     for (int val : newList)
     {
          cout << val << " ";
     }
     cout << endl;

     // insertion
     cout << "insertion: " << endl;
     // list<int> myList = {10, 20, 30};

     // insert [100] in [2nd] index; -> 10 20 30 100
     myList.insert(next(myList.begin(), 2), 100);
     // erase value of 3rd index; -> 10 20 [del] 100
     myList.erase(next(myList.begin(), 3));

     // insert multiple value; -> 10 20 100 7 8 9
     myList.insert(next(myList.begin(), 3), {7, 8, 9});
     list<int> nlist = {2, 3, 4};
     myList.insert(next(myList.begin(), 6), nlist.begin(), nlist.end()); // 10 20 100 7 8 9 2 3 4

     for (int val : myList)
     {
          cout << val << " ";
     }
     cout << endl;

     //*****************//
     // insert vector:

     cout << "insert vector: " << endl;
     vector<int> v = {5, 6, 5, 8, 5, 10};
     list<int> list2;

     // 5, 6, 5, 8, 5, 10
     list2.insert(next(list2.begin(), 3), v.begin(), v.end());

     // erase value 2nd index till 5th index -> 5 5 10
     list2.erase(next(list2.begin(), 1), next(list2.begin(), 4));

     // replace -> 30 30 10
     replace(list2.begin(), list2.end(), 5, 30);

     for (int val : list2)
     {
          cout << val << " ";
     }

     return 0;
}
