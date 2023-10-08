#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int m;
    cin >> m;
    long long int arr[n];
    long long maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > maxi)
            maxi = arr[i];
    }

    long long count = maxi;

    while (count--)
    {
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]>= m)
                sum+=(arr[i]-maxi);
            
            if (sum >= m){
                cout<< maxi+1;
                return 0;
            }

        }

        maxi--;
    }


    return 0;
}