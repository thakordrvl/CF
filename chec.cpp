#include <bits/stdc++.h> 
using namespace std;
typedef long long int ll;


int solve(vector<vector<int> > &A) {
    
    int n = A.size();
    int m  = A[0].size();
    
    vector<vector<int>> check(n,vector<int>(m,0));
    vector<vector<bool>> vis(n,vector<bool>(m,false));
    queue<pair<pair<int,int>,int>> q;
    vector<pair<int,int>> dir = {{1,0},{0,1},{-1,0},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};
    
    for(int i=0;i<n;i++){
        
        q.push({{i,0},-1});
        q.push({{i,m-1},1});
        vis[i][0] = true;
        vis[i][m-1] = true;
        
    }
    
    for(int i=0;i<m;i++){
        
        q.push({{0,i},-1});
        q.push({{n-1,i},1});
        vis[0][i] = true;
        vis[n-1][i] = true;      
    }
    
    
    while(q.size()){
     
        auto temp = q.front();
        q.pop();
        
        int x = temp.first.first;
        int y = temp.first.second;
        int val = temp.second;
        // vis[x][y] = true;
        
        for(auto it : dir){
            
            int newx = it.first;
            int newy = it.second;
            
            if(newx>=0 && newx <n && newy>=0 && newy<m && A[newx][newy] >= A[x][y]){
        
                if(!vis[newx][newy]){
                    q.push({{newx,newy},val});
                    vis[newx][newy] = true;
                    check[newx][newy] += val;
                    continue;
                }
                
                if(vis[newx][newy] && val==1 && check[newx][newy]<0){
                    q.push({{newx,newy},val});
                    check[newx][newy] += val;
                    continue;
                }
                
                if(vis[newx][newy] && val==-1 && check[newx][newy]>0){
                    q.push({{newx,newy},val});
                    check[newx][newy] += val;
                    continue;
                }
            }
        }
    }
    
    int count = 0;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
                
            if(vis[i][j] && check[i][j]==0)
                count++;
        }
    }
    
    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){
            cout<< "( " << vis[i][j] << ", " << check[i][j] << ")" << " ";
        }

        cout << endl; 

    }


    
    return count;
    
    
    
    
    
    
}



int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
//freopen(input.txt,r,stdin); put double comma
//freopen(output.txt,w,stdout);


    vector<vector<int>> A(5,vector<int>(5));

    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            cin >> A[i][j] ;


    cout << "ans :" << solve(A) << endl;

    
    





    return 0;
}