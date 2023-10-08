#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector <vector<int>> a;
    int a[][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    int b[3][3];
    cin >> b[0][0] >> b[0][1] >> b[0][2];
    cin >> b[1][0] >> b[1][1] >> b[1][2];
    cin >> b[2][0] >> b[2][1] >> b[2][2];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (b[i][j] % 2 == 0)
                continue;
            a[i][j] = !a[i][j];
            if (i > 0)//UP
                a[i - 1][j] = !a[i - 1][j];
            if (i < 2)//DOWN
                a[i + 1][j] = !a[i + 1][j];
            if (j > 0)//LEFT
                a[i][j - 1] = !a[i][j - 1];
            if (j < 2)//RIGHT
                a[i][j + 1] = !a[i][j + 1];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}