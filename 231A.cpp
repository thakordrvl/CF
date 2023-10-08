#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0;
    int ans=0;
    int a;
    while(n--){
        count=0;
        for(int i=0;i<3;i++){
            cin>>a;
            if(a==1)
                count++;
        }

        if(count>1)
            ans++;
    }

    cout<<ans;

    return 0;
}