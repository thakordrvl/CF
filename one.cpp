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
        string s;
        cin>>s;
        string s1="314159265358979323846264338327";
        int ans=0;

        for(int i=0;i<s.size();i++){

            if(s[i]==s1[i]){
                ans++;
            }

            else
                break;
        }

        cout<<ans<<endl;
        
    }















    return 0;
}