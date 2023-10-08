#include <bits/stdc++.h> 
using namespace std;
typedef long long int ll;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
//freopen(input.txt,r,stdin); put double comma
//freopen(output.txt,w,stdout);


    string s;
    string ans;
    cin>>s;
    int m;
    bool flag=true;

    int n = s.size();

    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            m=i;
            flag=false;
            break;
        }
    }

    if(flag)
        for(int i=0;i<n-1;i++)
            cout<<"1";

    else{


        for(int j=0;j<n;j++){

            if(j!=m) 
                ans.push_back(s[j]);

        }


        cout<<ans;

    
    }
    










    return 0;
}