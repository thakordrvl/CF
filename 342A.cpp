#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    sort(arr, arr+n);
    
    vector<bool> taken(n, false);
    for(int i=0; i<n; i++){
        vector<int> list;
        for(int j=0; j<n; i++){
            if(!list.size()){
                if(!taken[i]){
                    taken[i]= true;
                    list.push_back(arr[i]);
                }
                else
                    continue;
            }
            else if(!taken[i] && !(arr[i]%list[list.size()-1])){
                list.push_back(arr[i]);
                taken[i]= true;
            }
            if(list.size()==3){
                for(auto i: list) cout<<i<<" ";
                cout<<endl;
                break;
            }
        }
    }
    return 0;
}