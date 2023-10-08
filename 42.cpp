#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#define inf 1000000000
using namespace std;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    char s[100];
    cin>>s;
    int i,j;
    int l=strlen(s);
    for(i=0;i<l;i++){
         if(s[i]!='1'&&s[i]!='4')
            break;
    }
    if(i<l||s[0]!='1'){
         cout<<"NO"<<endl;
         return 0;
    }
    for(i=0;i<l;i++){
         if(s[i]!='1') continue;
         for(j=i+1;j<l;j++){
             if(s[j]=='1') break;
         }
          if(j-i>3){
             cout<<"NO"<<endl;
             return 0;
          }
    }
    cout<<"YES"<<endl;
    return 0;
}





// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     // freopen(input.txt,r,stdin); put double comma
//     // freopen(output.txt,w,stdout);
//     string s;

//     cin >> s;
//     int flag = 1;

//     for (int i = 0; i < s.length(); i++)
//     {

//         if (s[i] == '1' && s[i + 1] == '4' && s[i + 2] == '4')
//             i += 3;

//         else if (s[i] == '1' && s[i + 1] == '4')
//             i += 2;

//         else if (s[i] == '1')
//             i++;

//         else
//             flag = 0;
//     }

//     if (flag)
//         cout << "YES";

//     else
//         cout << "NO";

//     return 0;
// }