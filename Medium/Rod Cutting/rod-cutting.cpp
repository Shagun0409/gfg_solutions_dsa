//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
   
    int solver(int ind,int N,int price[],vector<vector<int>> &dp){
        
        if(ind==0){
            if(N>=ind+1 && N%(ind+1)==0){
                return price[ind]*N;
            }
            else{
                return 0;
            }
        }
        
        if(dp[ind][N]!=-1){
            return dp[ind][N];
        }
        
        int take = INT_MIN;
        int nottake = INT_MIN;
        
        if(N>=ind+1){
            take = price[ind] +  solver(ind,N-(ind+1),price,dp);
        }
        
        nottake = solver(ind-1,N,price,dp);
        
        return dp[ind][N] = max(nottake,take);
        
    }
    
    int cutRod(int price[], int n) {
        
        vector<vector<int>> dp(n+1,vector<int> (n+1,-1));
        return solver(n-1,n,price,dp);
        
        //code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends