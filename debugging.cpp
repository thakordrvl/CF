//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    vector<int> leftwala(long long arr[],int n){
        
        stack<pair<long long,int>> s;
        vector<int> l;
        
        for(int i=0;i<n;i++){
            
            if(s.size()==0)
                l.push_back(-1);
                
            else if(s.top().first<arr[i]){
                l.push_back(s.top().second);
            }
            
            else{
                
                while(s.size()>0 && s.top().first>=arr[i])
                    s.pop();
                    
                if(s.size()==0)
                    l.push_back(-1);
                    
                else
                    l.push_back(s.top().second);
                
            }
            
            
            s.push({arr[i],i});
        }
        
        return l;
    }
    
    vector<int> rightwala(long long arr[],int n){
        
        stack<pair<long long,int>> s;
        vector<int> r;
        
        for(int i=n-1;i>=0;i--){
            
            if(s.size()==0)
                r.push_back(n+1);
                
            else if(s.top().first<arr[i]){
                r.push_back(s.top().second);
            }
            
            else{
                
                while(s.size()>0 && s.top().first>=arr[i])
                    s.pop();
                    
                if(s.size()==0)
                    r.push_back(-1);
                    
                else
                    r.push_back(s.top().second);
                
            }
            
            
            s.push({arr[i],i});
        }
        
        return r;
        
    }
    
    long long getMaxArea(long long arr[], int n)
    {
        
        vector<int> left=leftwala(arr,n);
        vector<int> right=rightwala(arr,n);
        
        // rightwala(right,arr,n);
        long long ans=INT_MIN;
        long long area;
        vector<int> width;
        
        for(int i=0;i<n;i++)
            width[i]=right[i]-left[i]+1;
            
        for(int i=0;i<n;i++){
            area=width[i]*arr[i];
            ans=max(ans,area);
        }
        
        return ans;
            
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends