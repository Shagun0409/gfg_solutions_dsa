//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  int mod =(int)1e9+7;
  int f(int idx,int target,vector<int>&arr,vector<vector<int>>& dp){
     // const int mod=1e9+7;
      
      if(idx==0) {
          if(target==0 && arr[0]==0)
            return 2;
          if(target==0 || target==arr[0]) 
            return 1;
         return 0;
      }
      
      if(dp[idx][target]!=-1) return dp[idx][target];
      
      int notake=f(idx-1,target,arr,dp);
      int take=0;
      if(arr[idx]<=target){
          take=f(idx-1,target-arr[idx],arr,dp);
      }
      
      return dp[idx][target]=(take+notake)%mod;
      
  }
    int countPartitions(int n, int d, vector<int>& arr) {
        // Code here
        int totalsum=0;
        for(int i=0;i<n;i++){
            totalsum+=arr[i];
        }
        
        if(totalsum-d < 0 || (totalsum-d)%2) return 0;
    
        int target=(totalsum-d)/2;
        
        
        vector<vector<int>> dp(n,vector<int>(target+1,-1));
        return f(n-1,target,arr,dp);
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        vector<int> arr;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        Solution obj;
        cout << obj.countPartitions(n, d, arr) << "\n";
    }
    return 0;
}
// } Driver Code Ends