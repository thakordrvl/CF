#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}

mergesort(int *a,int low,int high)
{
    if(high>low)
    {
        mid=(high+low)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge();
    }
}