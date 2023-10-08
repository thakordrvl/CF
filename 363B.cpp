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
        int n;
        int k;
        cin >> n >> k;
        vector<int> v(n);
        int sumi = 0;
        int sum = 0;
        int ans = 0;
        int j = k;

        for (int i = 0; i < n; i++)
            cin >> v[i];

        for(int i=0;i<k;i++)
            sumi+=v[i];

        sum = sumi;

        for (int i = 1; i < n-k+1 ; i++)
        {

            sumi += (v[j]-v[i-1]);

            if (sum > sumi)
            {
                sum = sumi;
                ans = i;
            }

            j++;
        }

        cout << ans+1 << endl;

        return 0;
    }