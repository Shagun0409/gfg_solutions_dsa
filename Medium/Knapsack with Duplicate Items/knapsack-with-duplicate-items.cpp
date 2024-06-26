//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

int f(int idx,int W,int val[],int wt[],vector<vector<int>>& dp){
    
    
    if(idx==0){
       return (W/wt[0])*val[0];
    }
    if(dp[idx][W]!=-1) return dp[idx][W];
    
    int notake=0+f(idx-1,W,val,wt,dp);
    int take=0;
    if(wt[idx]<=W){
        take=val[idx]+f(idx,W-wt[idx],val,wt,dp);
        
    }
    
    return dp[idx][W]=max(take,notake);

}
    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        vector<vector<int>> dp(N,vector<int>(W+1,-1));
        return f(N-1,W,val,wt,dp);
        
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends