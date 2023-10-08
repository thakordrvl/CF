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
 
    int time = 0;
 
    pair<int,int> p[n];
 
    int up = 0, down = 0;
 
    for (int i = 0; i < n; i++)
    {
        cin>>p[i].first>>p[i].second;
        up+= p[i].first;
        down += p[i].second;
    }
 
    if(up%2==0 and down%2==0){
        cout<<0<<endl;
    }
    else if(up%2==0 or down%2==0){
        cout<<-1<<endl;
    }
    else{
        for(int i = 0; i < n ; i++){
            if((p[i].first%2==0 and p[i].second%2==1) or (p[i].first%2==1 and p[i].second%2==0)){
                cout<<1<<endl;
                return 0;
            }
        }
 
        cout<<-1<<endl;
 
    }
    
 
    
    return 0;
}   