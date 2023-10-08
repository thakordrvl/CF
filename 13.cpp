#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int n;
    cin>>n;
    vector<int> v;
    for (int i = 1; i <= n; i++)
        v.push_back(i);

    if (n % 2 != 0)
    {
        cout << "-1" << endl;
        return 0;
    }

    for(int i=0;i<=n-2;i+=2)
      cout<<v[i+1]<<" "<<v[i]<<" ";

    return 0;
}