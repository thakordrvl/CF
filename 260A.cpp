#include <bits/stdc++.h> 
using namespace std;
typedef long long int ll;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
//freopen("input.txt" , "r" , stdin);
//freopen("output.txt" , "w" , stdout);
    
    int a,b;
    cin>>a>>b;

    int n;
    cin>>n;

    for(int i = 0 ; i < 10; i++){
      int x = 10*a + i;
        if(x%b == 0){
            cout<<x;
            for(int j = 0 ; j < n-1 ; j++){
            cout<<0;
            }
            return 0;
        }
    }

    cout<<-1<<endl;

    
    return 0;
}       