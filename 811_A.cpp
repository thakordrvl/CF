#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, h, m;

        cin >> n >> h >> m;
        int hour[n], minute[n];
        for (int i = 0; i < n; i++)
        {
            cin >> hour[i] >> minute[i];
        }
        int mintime = 999999999;
        for (int i = 0; i < n; i++)
        {
            int p = (hour[i] - h) * 60 + (minute[i] - m);

            if (p < 0)
            {
                p += 24 * 60;
            }
            // cout << p << endl;

            if (p < mintime)
            {
                mintime = p;
            }
        }
        // cout << mintime << endl;
        cout << mintime / 60 << " "<< mintime % 60<<endl;
    }
    return 0;
}