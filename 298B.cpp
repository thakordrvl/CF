#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    ll n, x1, x2, y1, y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;
 
    string s;
    cin >> s;
 
    ll time = 0;
 
    if ((x2 - x1) >= 0 and (y2 - y1) >= 0)
    {
        for (ll i = 0; i < n; i++)
        {
            time++;
 
            if (s[i] == 'N' && y1 != y2)
            {
                y1++;
            }
 
            if (s[i] == 'E' && x1 != x2)
            {
                x1++;
            }
            
 
            if (x1 == x2 and y1 == y2)
            {
                cout << time << endl;
                return 0;
            }
        }
 
        cout << -1;
        return 0;
    }
    else if ((x2 - x1) <= 0 and (y2 - y1) >= 0)
    {
        for (ll i = 0; i < n; i++)
        {
            time++;
 
            if (s[i] == 'N' && y1 != y2)
            {
                y1++;
            }
 
            if (s[i] == 'W' && x1 != x2)
            {
                x1--;
            }
            
 
            if (x1 == x2 and y1 == y2)
            {
                cout << time << endl;
                return 0;
            }
        }
 
        cout << -1;
        return 0;
    }
    else if ((x2 - x1) <= 0 and (y2 - y1) <= 0)
    {
        for (ll i = 0; i < n; i++)
        {
            time++;
 
            if (s[i] == 'S' && y1 != y2)
            {
                y1--;
            }
 
            if (s[i] == 'W' && x1 != x2)
            {
                x1--;
            }
           
 
            if (x1 == x2 and y1 == y2)
            {
                cout << time << endl;
                return 0;
            }
        }
 
        cout << -1;
        return 0;
    }
    else
    {
        for (ll i = 0; i < n; i++)
        {
            time++;
 
            if (s[i] == 'E' && x1 != x2)
            {
                x1++;
            }
 
            if (s[i] == 'S' && y1 != y2)
            {
                y1--;
            }
 
            if (x1 == x2 and y1 == y2)
            {
                cout << time << endl;
                return 0;
            }
        }
 
        cout << -1;
        return 0;
    }
 
    return 0;
}