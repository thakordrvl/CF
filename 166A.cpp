#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen(input.txt,r,stdin); put double comma
    // freopen(output.txt,w,stdout);

    int n, k;
    cin >> n >> k;
    int x, y;
    vector<pair<int, int>> p(n,{0,0});

    for (int i = 0; i < n; i++)
    {
        cin >> p[i].first >> p[i].second;
        // p.push_back({x,y});
    }

    sort(p.begin(), p.end(),[](pair<int,int> a, pair<int,int> b){
        
        if(a.first==b.first){
            return a.second > b.second;
        }

        return a.first < b.first;
    });
    reverse(p.begin(), p.end());

    int pp = p[k - 1].first;
    int tt = p[k - 1].second;
    int count = 0;

    for (auto it : p)
    {
        if (it.first == pp && it.second == tt)
            count++;
    }

    cout << count << endl;

    return 0;
}