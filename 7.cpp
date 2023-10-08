#include<bits/stdc++.h>
using namespace std;
int main()
{

int low,up;
low=0;
up=0;
string a;
cin>>a;
for(int i = 0 ;i<a.length();i++)
{
    if(a[i]>=97 && a[i]<=122)
    {
      low++;
    }
    else
    {
      up++;
    }
}
if(low<up)
{
  for(int i = 0 ;i<a.length();i++)
  {
    if(a[i]>=97 && a[i]<=122)
    {
     a[i]= a[i] - 32;
    }
  }
}
else{
  for(int i = 0 ;i<a.length();i++)
  {
    if(a[i]>=41 && a[i]<=90)
    {
      a[i]= a[i] + 32;
    }
  }
}
cout<<a;

return 0;
}


