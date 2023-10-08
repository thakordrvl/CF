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
        bool flag = false;
        int n, m;
        cin >> n >> m;
        int n1 = n;
        int m1 = m;

        if (n > m)
        {
            while (n1 || m1)
            {

                if (n1)
                {
                    cout << "B";
                    n1--;
                }

                if (m1)
                {
                    cout << "G";
                    m1--;
                }
            }
        }

        else
        {

            while (n1 || m1)
            {

                if (m1){
                    cout << "G";
                    m1--;
                }

                if (n1){
                    cout << "B";
                    n1--;
                }
            }
        }
        

        return 0;
    }