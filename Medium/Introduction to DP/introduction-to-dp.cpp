//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
 long long int f(int n,vector<int>& dp){
      if(n<=1) return n%1000000007;
      if(dp[n]!=-1) return dp[n]%1000000007;
      return dp[n]=f(n-1,dp)%1000000007+f(n-2,dp)%1000000007;
  }
    long long int topDown(int n) {
        vector<int>dp(n+1,-1);
       return f(n,dp)%1000000007;
        
        // code here
    }
    long long int bottomUp(int n) {
        // code here
      long long  int prev2=0;
        int prev=1;
        
        for(int i=2;i<=n;i++){
           long long int ans=(prev2+prev)%1000000007;
            prev2=prev;
            prev=ans;
            
        }
        return prev%1000000007;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;
        long long int topDownans = obj.topDown(n);
        long long int bottomUpans = obj.bottomUp(n);
        if (topDownans != bottomUpans) cout << -1 << "\n";
        cout << topDownans << "\n";
    }
}
// } Driver Code Ends