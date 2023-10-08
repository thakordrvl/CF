#include <bits/stdc++.h> 
using namespace std;
typedef long long int ll;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
//freopen(input.txt,r,stdin); put double comma
//freopen(output.txt,w,stdout);
    int t;
    cin>>t;

    while(t--){

        int p;
        cin>>p;
        int n;
        cin>>n;

        int cook[n];
        int time=0;
       

        for(int i=0;i<n;i++)
            cin>>cook[i];


        while(p){
            sort(cook,cook+n);
            time+=cook[0];
            cook[0]*=2;
            p--;
        }






    }







    return 0;
}