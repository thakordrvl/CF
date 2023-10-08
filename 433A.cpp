#include <bits/stdc++.h> 
using namespace std;
typedef long long int ll;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
//freopen(input.txt,r,stdin); put double comma
//freopen(output.txt,w,stdout);
    
    int n;
    cin>>n;
    int x;
    int y;
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(auto it:arr){


        if(it==100)
            x++;

        else
            y++;

    }


    y=y%2;

    x=x-2*y;

    if(x%2==0 && x>=0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}