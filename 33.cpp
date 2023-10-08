#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    pair<int, int> p[n];

    for (int i = 0; i < n; i++)
    {
        cin >> p[i].first >> p[i].second;
    }

    int count = 0;
    int right;
    int left;
    int top;
    int bottom;

    for (int i = 0; i < n; i++)
    {
        right = 0;
        left = 0;
        top = 0;
        bottom = 0;

        for (int j = 0; j < n; j++)
        {

            if (j != i)
            {

                if ((p[i].first == p[j].first) && (p[i].second < p[j].second))
                    top = 1;

                if ((p[i].first == p[j].first) && (p[i].second > p[j].second))
                    bottom = 1;

                if ((p[i].first > p[j].first) && (p[j].second == p[i].second))
                    left = 1;

                if ((p[i].first < p[j].first) && (p[j].second == p[i].second))
                    right = 1;

                if (bottom&right&left&top)
                {
                    count++;
                    break;
                }
            }
        }
    }
    cout << count;
    return 0;
}

// int x[n];
// int y[n];

// vectorK<int> y;

// pair<int, int> x[n];
// cin >> x[0] >> y[0];

// int xmax = x[0];
// int xmin = x[0];
// int ymax = y[0];
// int ymin = y[0];

// for (int i = 1; i < n; i++)
// {
//     cin >> x[i] >> y[i];

//     if (x[i] > xmax)
//         xmax = x[i];

//     if (x[i] < xmin)
//         xmin = x[i];

//     if (y[i] > ymax)
//         ymax = y[i];

//     if (y[i] < ymin)
//         ymin = y[i];
// }