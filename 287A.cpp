#include <bits/stdc++.h> 
using namespace std;
typedef long long int ll;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
//freopen(input.txt,r,stdin); put double comma
//freopen(output.txt,w,stdout);


    string s[4];

    for(int i=0;i<4;i++)
        cin>>s[i];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){



        int count=0;

        if(s[i][j]==s[i][j+1])
            count++;

        if(s[i][j]==s[i+1][j+1])
            count++;
        
        if(s[i][j]==s[i+1][j])
            count++;



        if(count!=1){
            cout<<"YES"<<endl;
            return 0;
        }


        }

    }


    cout<<"NO"<<endl;
    









    return 0;
}