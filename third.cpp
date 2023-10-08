#include <bits/stdc++.h> 
using namespace std;
typedef long long int ll;

bool sortByVal(const pair<int, int> &a,const pair<int, int> &b) 
{ 
    return (a.second < b.second); 
} 

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
//freopen(input.txt,r,stdin); put double comma
//freopen(output.txt,w,stdout);
    int t;
    cin>>t;
    while(t--){

        unordered_map<int,int> m;
        vector<vector<int>> v;
        for(int i=0;i<n;i++)
            for(int j=0;j<n-1;j++){
                cin>>v[i][j];
                m[v[i][j]]=1;
            }
        
        vector<int> ans(n,0);
        

        for(int i=0;i<n-1;i++){
            int a;
            int b;
            int acount=0;
            int bcount=0;
                
            for(int j=0;j<n;j++){
                
                if()
                int a=v[i][j];


                if(v[i][j]==a)
                    acount++;





            }

            
            

        }








    }   
    return 0;
}