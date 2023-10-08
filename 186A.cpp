#include <bits/stdc++.h> 
using namespace std;
typedef long long int ll;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
//freopen(input.txt,r,stdin); put double comma
//freopen(output.txt,w,stdout);

    int ans=0;
    string s1,s2;
    vector<int> v;
    int arr[26];

    cin>>s1;
    cin>>s2;
    int count=0;

    if(s1.size()!=s2.size()){
        cout<<"NO"<<endl;
        return 0;
    }


    if(s1==s2){

        for(int i=0;i<s1.size();i++){

            count = arr[s1[i]-'a']++;

            if(count>1){
                cout<<"YES"<<endl;
                return 0;
            }

        }


    }

    for(int i=0;i<s1.size();i++){

        if(s1[i]!=s2[i]){
            v.push_back(i);
        }

    }

    if(v.size()==2){

        swap(s1[v[0]],s1[v[1]]);

        if(s1==s2)
            cout<<"YES"<<endl;

        else
            cout<<"NO"<<endl;

    }

    else
        cout<<"NO"<<endl;
    
    return 0;
}