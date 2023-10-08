#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;

    int arr[n];
    pair<int,int> p[n];
    map<int,int> m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        p[i].first=arr[i];
        p[i].second=i;
        m[arr[i]]++;

    }

    sort(p,p+n);
    int diff;
    int flag=1;
    vector<pair<int,int>> pp;
    int ans=0;

   for(int i=0;i<n;i++){

        flag=1;

        if(m[p[i].first]==1)
        {
            ans++;
            pp.push_back({p[i].first,0});
            continue;
        }

        diff=0;

        if(p[i].first==p[i+1].first)
            diff=p[i+1].second-p[i].second;

        while((p[i].first==p[i+1].first)&&(i<n-1)){

            if(p[i+1].second-p[i].second!=diff)
                flag=0;

                i++;
            }
        
        if(flag){
            ans++;
            pp.push_back({p[i].first,diff});
        }

        }
   

    cout<<ans<<endl ;

   for(auto it: pp)
        cout<<it.first<<" "<<it.second<<endl;
    
    

    



   


    







    return 0;
}