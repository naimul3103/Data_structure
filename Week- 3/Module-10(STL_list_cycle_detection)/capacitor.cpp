#include <bits/stdc++.h>
using namespace std;

int main()
{
     list<int> myList = {10, 20, 30, 40};
     // cout << myList.max_size();
     // myList.clear();
     cout << myList.size() << endl; // 4

     myList.resize(2);    // 10 20
     myList.resize(5, 5); // 10 20 5 5 5
     for (int val : myList)
     {
          cout << val << " ";
     }

     return 0;
}
