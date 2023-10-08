// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     // freopen(input.txt,r,stdin); put double comma
//     // freopen(output.txt,w,stdout);
//     string s, t, sr;

//     cin >> s >> t;

//     int n = s.length();
//     for (int i = 0; i < n; i++)
//         sr[i] = s[n - 1 - i];

//     cout << sr;

//     // if (sr == t)
//     //     cout << "YES";

//     // else
//     //     cout << "NO";

//     return 0;
// }

#include <stdio.h>
#include <string.h>
int main()
{
    char str1[105], str2[105], count = 0;
    scanf("%s%s", str1, str2);
    int length = strlen(str1);
    for (int i = 0; i < length; i++)
    {
        if (str1[i] == str2[length - i - 1])
            count++;
    }
    count == length ? printf("YES\n") : printf("NO\n");

    return 0;
}
