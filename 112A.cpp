#include <bits/stdc++.h> 
using namespace std;
typedef long long int ll;
 
int main(){
    string s1,s2;
    cin>>s1>>s2;
 
    for (int i = 0; s1[i] != '\0'; i++)
    {
        if(s1[i] > 96) s1[i]-=32;
        if(s2[i] > 96) s2[i]-=32;
 
        if(s1[i] > s2[i]) {
            cout<<"1";
            return 0;
        }
 
        if(s1[i] < s2[i]){
            cout<<"-1";
            return 0;
        }
 
    }
 
    cout<<"0";
    
    return 0;
}