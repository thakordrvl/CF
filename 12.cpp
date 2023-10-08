#include<bits/stdc++.h>
using namespace std;

int main(){

    string str1,str2,ans;
    cin >> str1 >> str2;
    for(int i = 0; i < str1.length(); i++){
        if(str1[i] == '1' && str2[i] == '1')ans.push_back('0');
        else if(str1[i] == '0' && str2[i] == '0')ans.push_back('0');
        else ans.push_back('1');
    }
    cout << ans << endl;
    return 0;
}// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {

//    string s1,s2,s3;
//    cin>>s1;
//    cin>>s2;
//    int i= s1.length();
   
// for(int i=0;i<s1.length();i++)
// {


//     s1[i] == s2[i]?s3[i]='0':s3[i]='1';
//     // if(s1[i] == s2[i])
//     // {
//     //     s3[i]='0';
//     // }
//     // else{
//     //     s3[i]='1';
//     // }
// }
// s3[i]='\0';
//     cout<<s3<<endl;

//     return 0;    
// }
