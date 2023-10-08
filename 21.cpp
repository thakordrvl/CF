#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int> s;
   int s1;

   int i=0;
   while(i<4)
   {
    cin>>s1;
    s.insert(s1);
    i++;
   }
    cout<<4-s.size();
    return 0;
}