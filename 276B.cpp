#include<bits/stdc++.h>
using namespace std;



int main(){


    string s;
    cin>>s;
    // int count=0;
   
    int n=s.size();

    int occurance[26] = {0};
 
    for (int i = 0; i < s.size(); i++)
    {
        occurance[s[i] - 'a']++;
    }
 
    int count = 0;
 
    for (int i = 0; i < 26; i++)
    {
        if(occurance[i]%2 != 0)
        {
            count++;
        }
    }


    if(count==0){
        cout<<"First";
        return 0;
    }

    if(count%2==0){
        cout<<"Second";
    }

    else
        cout<<"First";

    return 0;
}